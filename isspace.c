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

int isspace(char c)
{
	return ( ( ( 9 <= c && c <= 13 ) || ( c == 32 ) ) ? 1 : 0 );
}

/*int main()
{
	char c_0 = '\0';
	char c_9 = '\t';
	char c_10 = '\n';
	char c_11 = '\v';
	char c_12 = '\f';
	char c_13 = '\r';
	char c_32 = ' ';
	char c_48 = '0';

	printf("NUL\t%d\n", isspace(c_0));
	printf("HT\t%d\n", isspace(c_9));
	printf("NL\t%d\n", isspace(c_10));
	printf("VT\t%d\n", isspace(c_11));
	printf("NP\t%d\n", isspace(c_12));
	printf("CR\t%d\n", isspace(c_13));
	printf("SP\t%d\n", isspace(c_32));
	printf("0\t%d\n", isspace(c_48));
	return 0;
}*/ //	debug code
