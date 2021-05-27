/*
**
** QWASAR.IO -- my_abs
**
** @param {int} param_1
**
** @return {int}
**
*/

//#include <stdio.h>

int abs( int x )
{
	return x < 0 ? -x : x; //( ( x )^2 )^( 1 / 2 ); // What? It does not work?
}

/*int main()
{
	printf("%d\n", my_abs(-3));
	printf("%d\n", my_abs(-2));
	printf("%d\n", my_abs(-1));
	printf("%d\n", my_abs(0));
	printf("%d\n", my_abs(1));
	printf("%d\n", my_abs(2));
	printf("%d\n", my_abs(3));
	return 0;
}*/
