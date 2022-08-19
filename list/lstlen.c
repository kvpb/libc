/*//	Copyright 2022 Karl V. P. Bertin
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

//#include <stddef.h> // NULL, size_t //	unused
//#include <stdlib.h> // malloc //	debug
//#include <stdio.h> // printf //	debug
#include "../include/list.h"

size_t lstlen( node_t* head )
{
	size_t i;
	node_t* temporary;

	if ( head == NULL )
		return 0;
	i = 0;
	temporary = head;
	while ( temporary != NULL )
	{
		temporary = temporary->next;
		i += 1;
	}
	return i;
}

/*int main()
{
	node* l_0 = NULL; // linked list 0
	size_t l_l_0; // linked list 0 length
	node* l_1 = malloc( sizeof(node) );
	l_1->data = malloc( sizeof(int) ); // Remember this!
	*((int*) l_1->data) = 0; // ... And this!
	l_1->next = NULL;
	// linked list 1
	size_t l_l_1; // linked list 1 length
	node* l_2 = malloc( sizeof(node) );
	l_2->data = malloc( sizeof(int) );
	*((int*) l_2->data) = 0;
	l_2->next = malloc( sizeof(node) );
	l_2->next->data = malloc( sizeof(int) );
	*((int*) l_2->next->data) = 1;
	l_2->next->next = NULL;
	// linked list 2
	size_t l_l_2; // linked list 2 length
	node* l_3 = malloc( sizeof(node) );
	l_3->data = malloc( sizeof(int) );
	*((int*) l_3->data) = 0;
	l_3->next = malloc( sizeof(node) );
	l_3->next->data = malloc( sizeof(int) );
	*((int*) l_3->next->data) = 1;
	l_3->next->next = malloc( sizeof(node) );
	l_3->next->next->data = malloc( sizeof(int) );
	*((int*) l_3->next->next->data) = 2;
	l_3->next->next->next = NULL;
	// linked list 3
	size_t   l_l_3; // linked list 3 length
	  node*  l_4 = malloc( sizeof(node) );
	         l_4->data  = malloc( sizeof(int) );
	*((int*) l_4->data) = 9;
	         l_4->next = malloc( sizeof(node) );
	         l_4->next->data  = malloc( sizeof(int) );
	*((int*) l_4->next->data) = 8;
	         l_4->next->next = malloc( sizeof(node) );
	         l_4->next->next->data  = malloc( sizeof(int) );
	*((int*) l_4->next->next->data) = 7;
	         l_4->next->next->next = malloc( sizeof(node) );
	         l_4->next->next->next->data  = malloc( sizeof(int) );
	*((int*) l_4->next->next->next->data) = 6;
	         l_4->next->next->next->next = malloc( sizeof(node) );
	         l_4->next->next->next->next->data  = malloc( sizeof(int) );
	*((int*) l_4->next->next->next->next->data) = 5;
	         l_4->next->next->next->next->next = malloc( sizeof(node) );
	         l_4->next->next->next->next->next->data  = malloc( sizeof(int) );
	*((int*) l_4->next->next->next->next->next->data) = 4;
	         l_4->next->next->next->next->next->next = malloc( sizeof(node) );
	         l_4->next->next->next->next->next->next->data  = malloc( sizeof(int) );
	*((int*) l_4->next->next->next->next->next->next->data) = 3;
	         l_4->next->next->next->next->next->next->next = malloc( sizeof(node) ); //l_4->next->next->next->next->next->next->next->next = NULL; // JE VAIS M'EN FAIRE BOUFFER, UNTIL I UNDERSTAND LINKED LISTS IN C. YOU DO NOT BECOME THE BEST, WHEN YOU KEEP SLACKING AROUND OR TAKE SHORTCUTS. I NEED TO KNOW, UNDERSTAND, BELIEVE AND MASTER THIS CONCEPT. SO I AM STARTING OVER FROM SCRATCH, ET CELA COMMENCE PAR LES BASES. IL LE FAUT. I NEED IT. 2015-STYLE, BABY! I WILL FALL OFF MY MOTORBIKE OVER AND OVER AGAIN, UNTIL I CAN STAND AND DANCE ON THE SEAT, WHILE I AM DRIVING IT.
	         l_4->next->next->next->next->next->next->next->data  = malloc( sizeof(int) );
	*((int*) l_4->next->next->next->next->next->next->next->data) = 2;
	         l_4->next->next->next->next->next->next->next->next = malloc( sizeof(node) );
	         l_4->next->next->next->next->next->next->next->next->data  = malloc( sizeof(int) );
	*((int*) l_4->next->next->next->next->next->next->next->next->data) = 1;
	         l_4->next->next->next->next->next->next->next->next->next = malloc( sizeof(node) );
	         l_4->next->next->next->next->next->next->next->next->next->data  = malloc( sizeof(int) );
	*((int*) l_4->next->next->next->next->next->next->next->next->next->data) = 0;
	         l_4->next->next->next->next->next->next->next->next->next->next = NULL;
	// linked list 4
	size_t l_l_4; // linked list 4 length

	l_l_0 = lstlen( l_0 );
	l_l_1 = lstlen( l_1 );
	l_l_2 = lstlen( l_2 );
	l_l_3 = lstlen( l_3 );
	l_l_4 = lstlen( l_4 );
	printf("%zu\n", l_l_0 );
	printf("%zu\n", l_l_1 );
	printf("%zu\n", l_l_2 );
	printf("%zu\n", l_l_3 );
	printf("%zu\n", l_l_4 );
	return 0;
}*/ //	debug

/*//	lstlen.c
////	LSTLEN
////
////	Karl V. P. B. `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	local-part@domain
////	https://www.linkedin.com/in/
////	https://twitter.com/
////	https://github.com/kvpb
*///	https://vm.tiktok.com//
