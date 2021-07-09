/*
**
** QWASAR.IO -- my_fibonacci
**
**
** @param {Integer} param_1
** @return {integer}

**
*/

//#include <stdio.h> //	debug code

/*int pow( int b, int n )
{
	int x;

	if ( n == 0 )
		return 1;
	if ( n % 2 == 0 )
	{
		x = pow( b, n / 2 );
		return x * x;
	}
	else
		return b * pow( b, n - 1 );
}*/ // KVPB's RCSVPOW

/*int nfib( int n )
{
	if ( n >= 0 )
		return fib( n );
	if ( n == -1 ) //else if ( n == -1 )
		return -( n );
	else// if ( -2 >= n )
		return pow( -1, n + 1 ) * ( nfib( n - 1 ) + nfib( n - 2 ) ); //pow( -1, n + 1 ) * fib( n );
}*/ // KVPB's RCSVNFIB

int fib( int n )
{
	if ( n < 0 )
		return -1;
/*	if ( n < 0 )
		return nfib( n );*/
	if ( 0 <= n && n <= 1 ) //else if ( 0 <= n && n <= 1 ) // Else if? Why? It was a one-way trip to a return.
		return n;
	else
		return fib( n - 1 ) + fib( n - 2 );
} // KVPB's RCSVFIB

/*int main()
{
	int   d = -20;
	int   c =  -3;
	int   b =  -2;
	int   a =  -1;
	int n_0 =   0;
	int n_1 =   1;
	int n_2 =   2;
	int n_3 =   3;
	int n_4 =  20;

	printf("%d\n", fib( d   ));
	printf("%d\n", fib( c   ));
	printf("%d\n", fib( b   ));
	printf("%d\n", fib( a   ));
	printf("%d\n", fib( n_0 ));
	printf("%d\n", fib( n_1 ));
	printf("%d\n", fib( n_2 ));
	printf("%d\n", fib( n_3 ));
	printf("%d\n", fib( n_4 ));
	return 0;
}*/ //	debug code

// fib.c
// Fibonacci number
//
// Karl V. P. Bertin `kvpb`
// +33 A BB BB BB BB
// local-part@domain
// https://www.linkedin.com/in/karlbertin

