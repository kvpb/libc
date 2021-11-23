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

//#include <stdio.h> //	debug code

/*int abs( int x )
{
	return ( ( x < 0 ) ? -( x ) : x );
}*/ // KVPB's ABS
//	debug code

/*int rcsvgcd( int a, int b )
{
	return ( ( b == 0 ) ? a : rcsvgcd( b, a % b ) );
}*/ // KVPB's RCSVGCD
//	debug code

int lcm( int a, int b )
{
	return ( ( b == 0 ) ? a : abs( a * b ) / rcsvgcd( a, b ) );
} // KVPB's LCM

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

	printf("a = %d,\tb = %d\tlcm( a, b ) = %d\n", a_0, b_0, lcm( a_0, b_0 ));
	printf("a = %d,\tb = %d\tlcm( a, b ) = %d\n", a_1, b_1, lcm( a_1, b_1 ));
	printf("a = %d,\tb = %d\tlcm( a, b ) = %d\n", a_2, b_2, lcm( a_2, b_2 ));
	printf("a = %d,\tb = %d\tlcm( a, b ) = %d\n", a_3, b_3, lcm( a_3, b_3 ));
	printf("a = %d,\tb = %d\tlcm( a, b ) = %d\n", a_4, b_4, lcm( a_4, b_4 ));
	printf("a = %d,\tb = %d\tlcm( a, b ) = %d\n", a_5, b_5, lcm( a_5, b_5 ));
	printf("a = %d,\tb = %d\tlcm( a, b ) = %d\n", a_6, b_6, lcm( a_6, b_6 ));
	printf("a = %d,\tb = %d\tlcm( a, b ) = %d\n", a_7, b_7, lcm( a_7, b_7 ));
	return 0;
}*/ //	debug code

/*//	lcm.c
////	LCM
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	https://www.linkedin.com/in/karlbertin
////	https://twitter.com/kvpb777
////	https://www.instagram.com/add/karlbertin
*///	https://vm.tiktok.com/ZSwAmcFh/
