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

int isodd( int n )
{
	return ( n % 2 != 0 ); //return ( n % 2 == 1 || n % 2 == -1 );
}

/*int main()
{
	int n_0 = 0;
	int n_1 = 1;
	int n_2 = 2;
	int n_3 = 3;
	int n_4 = 4;
	int n_5 = 5;
	int n_6 = 6;
	int n_7 = 7;
	int n_8 = 8;
	int n_9 = 9;

	printf("%d\t%d\n", n_0, isodd( n_0 ));
	printf("%d\t%d\n", n_1, isodd( n_1 ));
	printf("%d\t%d\n", n_2, isodd( n_2 ));
	printf("%d\t%d\n", n_3, isodd( n_3 ));
	printf("%d\t%d\n", n_4, isodd( n_4 ));
	printf("%d\t%d\n", n_5, isodd( n_5 ));
	printf("%d\t%d\n", n_6, isodd( n_6 ));
	printf("%d\t%d\n", n_7, isodd( n_7 ));
	printf("%d\t%d\n", n_8, isodd( n_8 ));
	printf("%d\t%d\n", n_9, isodd( n_9 ));
	return 0;
}*/ //	debug code
