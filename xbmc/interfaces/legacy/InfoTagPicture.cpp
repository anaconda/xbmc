/*
*      Copyright (C) 2005-2016 Team Kodi
*      http://kodi.tv
*
*  This Program is free software; you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation; either version 2, or (at your option)
*  any later version.
*
*  This Program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with XBMC; see the file COPYING.  If not, see
*  <http://www.gnu.org/licenses/>.
*
*/

#include "InfoTagPicture.h"
#include "utils/StringUtils.h"
#include "settings/AdvancedSettings.h"

namespace XBMCAddon
{
  namespace xbmc
  {
    InfoTagPicture::InfoTagPicture()
    {
      infoTag = new CPictureInfoTag();
    }

    InfoTagPicture::InfoTagPicture(const CPictureInfoTag& tag)
    {
      infoTag = new CPictureInfoTag();
      *infoTag = tag;
    }

    InfoTagPicture::~InfoTagPicture()
    {
      delete infoTag;
    }

    String InfoTagPicture::getGPSLatitude()
    {
      return infoTag->GetInfo(SLIDE_EXIF_GPS_LATITUDE);
    }

    String InfoTagPicture::getGPSLongitude()
    {
      return infoTag->GetInfo(SLIDE_EXIF_GPS_LONGITUDE);
    }
  }
}
