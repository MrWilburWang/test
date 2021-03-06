/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:17 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:26 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 08:53:57 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:43:21 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:11 CST. */
/* Copyright (c) Colorado School of Mines, CST.*/
/* All rights reserved.                       */

/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:27:49 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:26:56 CST. */
/*
 *	int gethostbyname2_r (const char *name, int af, struct hostent [Function]
 *	*restrict result_buf, char *restrict buf, size t buflen, struct hostent
 *	**restrict result, int *restrict h_errnop)
 *	The gethostbyname2_r function is like gethostbyname_r, but allows the caller to
 *	specify the desired address family (e.g. AF_INET or AF_INET6) for the result.
 */
#include <netdb.h>

int gethostbyname2_r(const char *name, int af, 
		struct hostent *restrict result_buf, 
		char *restrict buf, size_t buflen, 
		struct hostent **restrict result, 
		int *restrict h_errnop);


