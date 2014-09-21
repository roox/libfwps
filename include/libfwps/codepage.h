/*
 * Codepage definitions for libfwps
 *
 * Copyright (c) 2013-2014, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFWPS_CODEPAGE_H )
#define _LIBFWPS_CODEPAGE_H

#include <libfwps/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBFWPS_CODEPAGES
{
	LIBFWPS_CODEPAGE_ASCII				= 20127,

	LIBFWPS_CODEPAGE_ISO_8859_1			= 28591,
	LIBFWPS_CODEPAGE_ISO_8859_2			= 28592,
	LIBFWPS_CODEPAGE_ISO_8859_3			= 28593,
	LIBFWPS_CODEPAGE_ISO_8859_4			= 28594,
	LIBFWPS_CODEPAGE_ISO_8859_5			= 28595,
	LIBFWPS_CODEPAGE_ISO_8859_6			= 28596,
	LIBFWPS_CODEPAGE_ISO_8859_7			= 28597,
	LIBFWPS_CODEPAGE_ISO_8859_8			= 28598,
	LIBFWPS_CODEPAGE_ISO_8859_9			= 28599,
	LIBFWPS_CODEPAGE_ISO_8859_10			= 28600,
	LIBFWPS_CODEPAGE_ISO_8859_11			= 28601,
	LIBFWPS_CODEPAGE_ISO_8859_13			= 28603,
	LIBFWPS_CODEPAGE_ISO_8859_14			= 28604,
	LIBFWPS_CODEPAGE_ISO_8859_15			= 28605,
	LIBFWPS_CODEPAGE_ISO_8859_16			= 28606,

	LIBFWPS_CODEPAGE_KOI8_R				= 20866,
	LIBFWPS_CODEPAGE_KOI8_U				= 21866,

	LIBFWPS_CODEPAGE_WINDOWS_874			= 874,
	LIBFWPS_CODEPAGE_WINDOWS_932			= 932,
	LIBFWPS_CODEPAGE_WINDOWS_936			= 936,
	LIBFWPS_CODEPAGE_WINDOWS_949			= 949,
	LIBFWPS_CODEPAGE_WINDOWS_950			= 950,
	LIBFWPS_CODEPAGE_WINDOWS_1250			= 1250,
	LIBFWPS_CODEPAGE_WINDOWS_1251			= 1251,
	LIBFWPS_CODEPAGE_WINDOWS_1252			= 1252,
	LIBFWPS_CODEPAGE_WINDOWS_1253			= 1253,
	LIBFWPS_CODEPAGE_WINDOWS_1254			= 1254,
	LIBFWPS_CODEPAGE_WINDOWS_1255			= 1255,
	LIBFWPS_CODEPAGE_WINDOWS_1256			= 1256,
	LIBFWPS_CODEPAGE_WINDOWS_1257			= 1257,
	LIBFWPS_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBFWPS_CODEPAGE_US_ASCII			LIBFWPS_CODEPAGE_ASCII

#define LIBFWPS_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBFWPS_CODEPAGE_ISO_8859_1
#define LIBFWPS_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBFWPS_CODEPAGE_ISO_8859_2
#define LIBFWPS_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBFWPS_CODEPAGE_ISO_8859_3
#define LIBFWPS_CODEPAGE_ISO_NORTH_EUROPEAN		LIBFWPS_CODEPAGE_ISO_8859_4
#define LIBFWPS_CODEPAGE_ISO_CYRILLIC			LIBFWPS_CODEPAGE_ISO_8859_5
#define LIBFWPS_CODEPAGE_ISO_ARABIC			LIBFWPS_CODEPAGE_ISO_8859_6
#define LIBFWPS_CODEPAGE_ISO_GREEK			LIBFWPS_CODEPAGE_ISO_8859_7
#define LIBFWPS_CODEPAGE_ISO_HEBREW			LIBFWPS_CODEPAGE_ISO_8859_8
#define LIBFWPS_CODEPAGE_ISO_TURKISH			LIBFWPS_CODEPAGE_ISO_8859_9
#define LIBFWPS_CODEPAGE_ISO_NORDIC			LIBFWPS_CODEPAGE_ISO_8859_10
#define LIBFWPS_CODEPAGE_ISO_THAI			LIBFWPS_CODEPAGE_ISO_8859_11
#define LIBFWPS_CODEPAGE_ISO_BALTIC			LIBFWPS_CODEPAGE_ISO_8859_13
#define LIBFWPS_CODEPAGE_ISO_CELTIC			LIBFWPS_CODEPAGE_ISO_8859_14

#define LIBFWPS_CODEPAGE_ISO_LATIN_1			LIBFWPS_CODEPAGE_ISO_8859_1
#define LIBFWPS_CODEPAGE_ISO_LATIN_2			LIBFWPS_CODEPAGE_ISO_8859_2
#define LIBFWPS_CODEPAGE_ISO_LATIN_3			LIBFWPS_CODEPAGE_ISO_8859_3
#define LIBFWPS_CODEPAGE_ISO_LATIN_4			LIBFWPS_CODEPAGE_ISO_8859_4
#define LIBFWPS_CODEPAGE_ISO_LATIN_5			LIBFWPS_CODEPAGE_ISO_8859_9
#define LIBFWPS_CODEPAGE_ISO_LATIN_6			LIBFWPS_CODEPAGE_ISO_8859_10
#define LIBFWPS_CODEPAGE_ISO_LATIN_7			LIBFWPS_CODEPAGE_ISO_8859_13
#define LIBFWPS_CODEPAGE_ISO_LATIN_8			LIBFWPS_CODEPAGE_ISO_8859_14
#define LIBFWPS_CODEPAGE_ISO_LATIN_9			LIBFWPS_CODEPAGE_ISO_8859_15
#define LIBFWPS_CODEPAGE_ISO_LATIN_10			LIBFWPS_CODEPAGE_ISO_8859_16

#define LIBFWPS_CODEPAGE_KOI8_RUSSIAN			LIBFWPS_CODEPAGE_KOI8_R
#define LIBFWPS_CODEPAGE_KOI8_UKRAINIAN			LIBFWPS_CODEPAGE_KOI8_U

#define LIBFWPS_CODEPAGE_WINDOWS_THAI			LIBFWPS_CODEPAGE_WINDOWS_874
#define LIBFWPS_CODEPAGE_WINDOWS_JAPANESE		LIBFWPS_CODEPAGE_WINDOWS_932
#define LIBFWPS_CODEPAGE_WINDOWS_CHINESE		LIBFWPS_CODEPAGE_WINDOWS_936
#define LIBFWPS_CODEPAGE_WINDOWS_KOREAN			LIBFWPS_CODEPAGE_WINDOWS_949
#define LIBFWPS_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBFWPS_CODEPAGE_WINDOWS_950
#define LIBFWPS_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBFWPS_CODEPAGE_WINDOWS_1250
#define LIBFWPS_CODEPAGE_WINDOWS_CYRILLIC		LIBFWPS_CODEPAGE_WINDOWS_1251
#define LIBFWPS_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBFWPS_CODEPAGE_WINDOWS_1252
#define LIBFWPS_CODEPAGE_WINDOWS_GREEK			LIBFWPS_CODEPAGE_WINDOWS_1253
#define LIBFWPS_CODEPAGE_WINDOWS_TURKISH		LIBFWPS_CODEPAGE_WINDOWS_1254
#define LIBFWPS_CODEPAGE_WINDOWS_HEBREW			LIBFWPS_CODEPAGE_WINDOWS_1255
#define LIBFWPS_CODEPAGE_WINDOWS_ARABIC			LIBFWPS_CODEPAGE_WINDOWS_1256
#define LIBFWPS_CODEPAGE_WINDOWS_BALTIC			LIBFWPS_CODEPAGE_WINDOWS_1257
#define LIBFWPS_CODEPAGE_WINDOWS_VIETNAMESE		LIBFWPS_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif

