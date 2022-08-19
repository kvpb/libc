/*//	Copyright 2022 Karl Vincent Pierre Bertin
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

#ifndef LIST_H
# define LIST_H

# include <stdarg.h> // va_start, va_arg, va_copy, va_end
# include <stdlib.h> // malloc, free
# include <stddef.h> // NULL, size_t
# include "./libc.h"

/* linear linked lists */

/* singly linked lists */
# ifndef NODE
#  define NODE
typedef struct node
{
	void* data; // Because C does not support generics. If we will implement the same feature, we need to use a void-type pointer and function pointer. And as pointers of any type all have the same size, void-type pointers can point to any type of data, so we always can allocate a linked list node. If we will process the data stored at the address pointed to by the void-type pointer, we gotta use a function pointer.
	struct node* next;
} node_t;
# endif /* NODE */

size_t lstlen( node_t* head ); // linked list length measurement
node_t* lstrev( node_t* head ); // linked list reversal
/* linked list operations */
node_t* nodins( node_t* node, unsigned int i ); //nodcrt // node insertion
node_t* hednodins( node_t* node ); // head node (node at the beginning of the list) insertion
node_t* nodrem( node_t* node, unsigned int i ); //noddel // nth node removal
node_t* nnodrem( node_t* head ); // last node (end-of-list node) removal
node_t* ni1nodrem( node_t* head, unsigned int i ); // ( n - i + 1 )th node (nth node from the end of the list) removal
node_t* dupnodrem( node_t* head ); // sorted linked list duplicate node removal
node_t* lstmrg( node_t* head_0, node_t* head_1 ); // sorted linked list merger
node_t* klstmrg( node_t* head, ... ); // k sorted linked list merger
node_t* lstprt( node_t* ); // linked list printing

/* doubly linked lists */


/* multiply linked lists */


/* circular linked lists */


#endif /* LIST_H */

/*//	list.h
////
////	Karl V. P. B. `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	local-part@domain
////	https://www.linkedin.com/in/kvpb
////	https://twitter.com/kvpb
////	https://github.com/kvpb
*///	https://vm.tiktok.com/ZSwAmcFh/
/*//	
////	And remember:
////										|	peek							|	mutate (insert or delete) at...																			|	excess space,
////										|	(index)							+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	average
////										|									|	beginning						|	end								|	middle							|	
////	-	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	
////	linked list							|	Theta( n )						|	Theta( 1 )						|	Theta( 1 ), known end element;	|	peek time						|	Theta( n )
////										|									|									|	Theta( n ), unknown end element	|	+ Theta( 1 )					|	
////	-	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	
////	array								|	Theta( 1 )						|									|									|									|	0
////	-	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	
////	dynamic array						|	Theta( 1 )						|	Theta( n )						|	Theta( 1 ) amortized			|	Theta( n )						|	Theta( n )
////	-	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	
////	balanced tree						|	Theta( log( n ) )				|	Theta( log( n ) )				|	Theta( log( n ) )				|	Theta( log( n ) )				|	Theta( n )
////	-	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	
////	random-access list					|	Theta( log( n ) )				|	Theta( 1 )						|									|									|	Theta( n )
////	-	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	+	-	-	-	-	-	-	-	-	
////	hashed array tree					|	Theta( 1 )						|	Theta( n )						|	Theta( 1 ) amortized			|	Theta( n )						|	Theta( sqrt( n ) )
*///	https://en.wikipedia.org/wiki/Linked_list#Linked_lists_vs._dynamic_arrays
