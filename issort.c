/*
**
** QWASAR.IO -- my_is_sort
**
** @param {integer_array*} param_1
**
** @return {bool}
**
*/

#include <stdbool.h>
#include <stddef.h>
//#include <stdlib.h> //	debug code
//#include <stdio.h> //	debug code

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
	int size;
	int* array;
} integer_array;
#endif

bool issortasc( integer_array* A )
{
	int l = A->size; //= sizeof(param_1->array);
	int i = 0;

	while ( A->array[ i + 1 ] != 0 && A->array[ i ] <= A->array[ i + 1 ] )
		i++;
	if ( i == l - 1 ) //== param_1->size - 1 )
		return true;
	else
		return false;
}

bool issortdesc( integer_array* A )
{
	int l = A->size;
	int i = 0;

	while ( A->array[ i + 1 ] != 0 && A->array[ i ] >= A->array[ i + 1 ] )
		i++;
	if ( i == l - 1 )
		return true;
	else
		return false;
}

bool issort( integer_array* A )
{
	if ( A->size <= 1 || issortasc( A ) || issortdesc( A ) ) //if ( my_is_sort_asc( param_1 ) || my_is_sort_desc( param_1 ) )
		return true;
	else
		return false;
}

/*int main()
{
	struct s_integer_array* A_0;
	A_0 = (struct s_integer_array*) malloc(sizeof(struct s_integer_array));
	A_0->size = 3; //sizeof(A->array);
	A_0->array = (int*) malloc(sizeof(int));
	A_0->array[3];
		A_0->array[0] = 1;
		A_0->array[1] = 1;
		A_0->array[2] = 2;
	struct s_integer_array* A_1;
	A_1 = (struct s_integer_array*) malloc(sizeof(struct s_integer_array));
	A_1->size = 3;
	A_1->array = (int*) malloc(sizeof(int));
	A_1->array[3];
		A_1->array[0] = 2;
		A_1->array[1] = 1;
		A_1->array[2] = -1;
	struct s_integer_array* A_2;
	A_2 = (struct s_integer_array*) malloc(sizeof(struct s_integer_array));
	A_2->size = 4;
	A_2->array = (int*) malloc(sizeof(int));
	A_2->array[4];
		A_2->array[0] = 4;
		A_2->array[1] = 7;
		A_2->array[2] = 0;
		A_2->array[3] = 3;

	printf("%s\n", my_is_sort(A_0) ? "true" : "false"); //printf("%d\n", my_is_sort(A_0)); //printf("%s\n", my_is_sort(A_0));
	printf("%s\n", my_is_sort(A_1) ? "true" : "false");
	printf("%s\n", my_is_sort(A_2) ? "true" : "false");
	return 0;
}*/
//	debug code
