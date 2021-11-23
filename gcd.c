/*// Copyright 2021 Karl V. P. Bertin
////
//// Redistribution and use in source and binary forms, with or without modifi-
//// cation, are permitted provided that the following conditions are met:
////
////   1.  Redistributions of source code must retain the above copyright noti-
////       ce, this list of conditions and the following disclaimer.
////
////   2.  Redistributions in binary form must reproduce the above copyright
////       notice, this list of conditions and the following disclaimer in the
////       documentation and/or other materials provided with the distribution.
////
////   3.  Neither the name of the copyright holder nor the names of its con-
////       tributors may be used to endorse or promote products derived from
////       this software without specific prior written permission.
////
//// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
//// IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
//// PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRI-
//// BUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLA-
//// RY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
//// OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSI-
//// NESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
//// IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHER-
//// WISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
*/// OF THE POSSIBILITY OF SUCH DAMAGE.

//#include <stdarg.h> // https://en.wikipedia.org/wiki/Variadic_function#In_C
//#include <stdio.h> //	debug code

/*int min( int a, int b )
{
	return ( ( a <= b ) ? a : b );
}*/ // KVPB's MIN
//	debug code

/*int max( int a, int b )
{
	return ( ( a >= b ) ? a : b );
}*/ // KVPB's MAX
//	debug code

int gcd( int a, int b ) // int gcd( int c, ... )
{
	/*if ( b == 0 ) //if ( a == 0 || b == 0 )
		return a; //	return -1;
	if ( a % b != 0 )
		return gcd( b, a % b ); //return gcd( min( a, b ), max( a, b ) % min( a, b ) );*/
	return ( ( b == 0 ) ? a : gcd( b, a % b ) );
} // KVPB's RCSVGCD

/*int abs( int x )
{
	return ( ( x < 0 ) ? -( x ) : x );
}*/ // KVPB's ABS
//	debug code

/*int lcm( int a, int b ) //int lcm( int c, ... )
{
	int L;

	
	return L;
} // KVPB's LCM
//	debug code

int gcd( int a, int b )
{
	//int d;

	
	//return ( abs( a * b ) / lcm( a, b ) );
} KVPB's GCD*/

/*int main()
{
	int a_0 = 0;
	int b_0 = 0;
	int a_1 = 1;
	int b_1 = 10;
	int a_2 = 2;
	int b_2 = 22;
	int a_3 = 34;
	int b_3 = 43;
	int a_4 = 45;
	int b_4 = 54;
	int a_5 = 50;
	int b_5 = 95;
	int a_6 = 48;
	int b_6 = 72;
	int a_7 = 42;
	int b_7 = 777;

	printf("a = %d,\tb = %d\tgcd( a, b ) = %d\n", a_0, b_0, gcd( a_0, b_0 ));
	printf("a = %d,\tb = %d\tgcd( a, b ) = %d\n", a_1, b_1, gcd( a_1, b_1 ));
	printf("a = %d,\tb = %d\tgcd( a, b ) = %d\n", a_2, b_2, gcd( a_2, b_2 ));
	printf("a = %d,\tb = %d\tgcd( a, b ) = %d\n", a_3, b_3, gcd( a_3, b_3 ));
	printf("a = %d,\tb = %d\tgcd( a, b ) = %d\n", a_4, b_4, gcd( a_4, b_4 ));
	printf("a = %d,\tb = %d\tgcd( a, b ) = %d\n", a_5, b_5, gcd( a_5, b_5 ));
	printf("a = %d,\tb = %d\tgcd( a, b ) = %d\n", a_6, b_6, gcd( a_6, b_6 ));
	printf("a = %d,\tb = %d\tgcd( a, b ) = %d\n", a_7, b_7, gcd( a_7, b_7 ));
	return 0;
}*/ //	debug code

/*//	gcd.c
////	GCD
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	https://www.linkedin.com/in/karlbertin
////	https://twitter.com/kvpb777
////	https://www.instagram.com/add/karlbertin
////	https://vm.tiktok.com/ZSwAmcFh/
////
////		#include <stdarg.h>
////		#include <stdio.h>
////		
////		double average(int count, ...) {
////		    va_list ap;
////		    int j;
////		    double sum = 0;
////	
////		    va_start(ap, count); / Requires the last fixed parameter (to get the address) /
////		    for (j = 0; j < count; j++) {
////		        sum += va_arg(ap, int); / Increments ap to the next argument. /
////		    }
////		    va_end(ap);
////		
////		    return sum / count;
////		}
////		
////		int main(int argc, char const *argv[]) {
////		    printf("%f\n", average(3, 1, 2, 3));
////		    return 0;
////		}
*///		// https://en.wikipedia.org/wiki/Variadic_function#In_C
