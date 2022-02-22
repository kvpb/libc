/*//  Copyright 2014 Karl V. P. Bertin
////
////  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
////
////    1.  Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
////
////    2.  Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
////
////    3.  Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
////
*///  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "../include/stdlib.h"
#include "../include/xlocale.h"
#include <stdlib.h> // atoi, atoi_l, atof, atof_l //	debug code
#include <xlocale.h> // locale_t
#include <stdio.h> // printf //	debug code

#undef atoi
#undef atoi_l
#undef atof
#undef atof_l

int atoi( const char* a ); //int atoi(const char *str);

int atoi_l( const char *s, locale_t l ); //int atoi_l(const char *str, locale_t loc);

double atof( const char* a ); //double atof(const char *str);

double atof_l( const char* a, locale_t l ); //double atof_l(const char *str, locale_t loc);

int main()
{
	const char* s = "";
	locale_t l = ;

	printf("0\t%d\n", atoi(s));
	printf("0\t%d\n", atoi_l(s, l));
	printf("0\t%f\n", atof(s));
	printf("0\t%f\n", atof_l(s, l));
	return 0;
} //	debug code

/*//	atoi.c
////	AToI
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	https://www.linkedin.com/in/karlbertin
////	https://twitter.com/kvpb777
////	https://github.com/kvpb
////	https://www.instagram.com/add/karlbertin
*///	https://vm.tiktok.com/ZSwAmcFh/
