/*
 * This file is part of BOINC.
 * http://boinc.berkeley.edu
 * Copyright (C) 2020 University of California
 *
 * BOINC is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * BOINC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with BOINC.  If not, see <http://www.gnu.org/licenses/>.
 */
package edu.berkeley.boinc.rpc

import android.os.Parcel
import android.os.Parcelable

data class PlatformInfo internal constructor(
        var name: String?,
        var friendlyName: String?,
        var planClass: String?
) : Parcelable {
    private constructor(parcel: Parcel) : this(parcel.readString(), parcel.readString(), parcel.readString())

    override fun describeContents() = 0

    override fun writeToParcel(dest: Parcel, arg1: Int) {
        dest.writeString(name)
        dest.writeString(friendlyName)
        dest.writeString(planClass)
    }

    object Fields {
        const val NAME = "platform_name"
    }

    companion object {
        val CREATOR: Parcelable.Creator<PlatformInfo> = object : Parcelable.Creator<PlatformInfo> {
            override fun createFromParcel(parcel: Parcel) = PlatformInfo(parcel)

            override fun newArray(size: Int) = arrayOfNulls<PlatformInfo>(size)
        }
    }
}
