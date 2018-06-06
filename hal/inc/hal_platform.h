/**
 ******************************************************************************
  Copyright (c) 2015 Particle Industries, Inc.  All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation, either
  version 3 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************
 */

#ifndef HAL_PLATFORM_H
#define	HAL_PLATFORM_H

#ifdef	__cplusplus
extern "C" {
#endif

#if PLATFORM_ID<9
    #define HAL_PLATFORM_WIFI 1
#endif

#if PLATFORM_ID==10
#define HAL_PLATFORM_CELLULAR 1
#define PANIC_BUT_KEEP_CALM 1
#endif

#if PLATFORM_ID==10 || PLATFORM_ID==3
	#define HAL_PLATFORM_CLOUD_UDP 1
		#define HAL_PLATFORM_CLOUD_TCP 1
#else
	#define HAL_PLATFORM_CLOUD_TCP 1
#endif

#ifndef HAL_PLATFORM_WIFI
#define HAL_PLATFORM_WIFI 0
#endif

#ifndef HAL_PLATFORM_CELLULAR
#define HAL_PLATFORM_CELLULAR 0
#endif

#ifndef HAL_PLATFORM_CLOUD_UDP
#define HAL_PLATFORM_CLOUD_UDP 0
#endif

#ifndef HAL_PLATFORM_CLOUD_TCP
#define HAL_PLATFORM_CLOUD_TCP 0
#endif

#if PLATFORM_ID == 6 || PLATFORM_ID == 8 || PLATFORM_ID == 10
#define HAL_PLATFORM_DCT 1
#else
#define HAL_PLATFORM_DCT 0
#endif

/* Argon, Boron and Xenon */
#if PLATFORM_ID == 12 || PLATFORM_ID == 13 || PLATFORM_ID == 14
#define HAL_USE_SOCKET_HAL_POSIX (1)
#define HAL_USE_INET_HAL_POSIX   (1)
#define HAL_PLATFORM_OPENTHREAD  (1)
#endif /* PLATFORM_ID == 12 || PLATFORM_ID == 13 || PLATFORM_ID == 14 */

#if PLATFORM_ID == 20
#define HAL_USE_SOCKET_HAL_COMPAT (1)
#define HAL_USE_SOCKET_HAL_POSIX (1)

#define HAL_USE_INET_HAL_COMPAT (1)
#define HAL_USE_INET_HAL_POSIX (1)
#endif /* PLATFORM_ID == 20 */

#ifndef HAL_USE_SOCKET_HAL_COMPAT
#define HAL_USE_SOCKET_HAL_COMPAT (1)
#endif /* HAL_USE_SOCKET_HAL_COMPAT */

#ifndef HAL_USE_INET_HAL_COMPAT
#define HAL_USE_INET_HAL_COMPAT (1)
#endif /* HAL_USE_INET_HAL_COMPAT */

#ifndef HAL_USE_SOCKET_HAL_POSIX
#define HAL_USE_SOCKET_HAL_POSIX (0)
#endif /* HAL_USE_SOCKET_HAL_POSIX */

#ifndef HAL_USE_INET_HAL_POSIX
#define HAL_USE_INET_HAL_POSIX (0)
#endif /* HAL_USE_INET_HAL_POSIX */

#ifndef HAL_PLATFORM_OPENTHREAD
#define HAL_PLATFORM_OPENTHREAD (0)
#endif /* HAL_PLATFORM_OPENTHREAD */

#ifdef	__cplusplus
}
#endif

#endif	/* HAL_PLATFORM_H */

