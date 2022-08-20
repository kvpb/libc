/*//	Copyright 2020 Karl V. P. Bertin
////
////	Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
////
////	1.	Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
////
////	2.	Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
////
////	3.	Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
////
*///	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef STDDEF_H
# define STDDEF_H

//# if defined(GNUC) && defined(PTRDIFF_TYPE) && defined(SIZE_TYPE)
//#  define BSD_PTRDIFF_T PTRDIFF_TYPE
//#  define BSD_SIZE_T SIZE_TYPE
//# else
//#  define BSD_PTRDIFF_T
#  define SIZE_T unsigned long long //#  define BSD_SIZE_T unsigned long // 64-bit Darwin size_t: unsigned long long. size_t can be unsigned char, unsigned short, unsigned int, unsigned long, unsigned long long... Since a size should be positive, size_t is unsigned. So overwriting it obviously will break a lot of things.
//# endif
/*//	Or one can define implementation-fundamental types in a non-standard header, and then make standard headers have:
////		#ifdef SIZE_T
////		typedef SIZE_T size_t;
////		# undef SIZE_T
////		#endif
*///	https://opensource.apple.com/source/Libc/Libc-997.1.1/include/stddef.h.auto.html https://opensource.apple.com/source/Libc/Libc-594.9.4/include/stdio.h.auto.html https://opensource.apple.com/source/Libc/Libc-594.9.4/include/stdlib.h.auto.html https://opensource.apple.com/source/Libc/Libc-825.26/include/string.h.auto.html https://opensource.apple.com/source/xnu/xnu-201/bsd/include/time.h.auto.html https://opensource.apple.com/source/xnu/xnu-344.21.74/EXTERNAL_HEADERS/bsd/i386/ansi.h.auto.html
//# ifndef SIZE_T
//#  define SIZE_T
//typedef __darwin_size_t size_t;
//# endif

# ifndef
#  define NULL ((void *) 0 )
# endif
/* NULL */ // https://opensource.apple.com/source/xnu/xnu-1228.0.2/bsd/sys/_types.h.auto.html

#endif /* STDDEF_H */

/*//	stddef.h
////
////	Karl V. P. B. `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	local-part@domain
////	https://www.linkedin.com/in/
////	https://twitter.com/
////	https://github.com/
*///	https://vm.tiktok.com//
