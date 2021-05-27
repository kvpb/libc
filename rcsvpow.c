int pow( int b, int n )
{
	int x;

	if ( n == 0 ) // If the exponent is 0,
	{
		return 1; // the result is 1.
	}
	if ( n % 2 == 0 ) // If the exponent is an even number,
	{
		x = pow( b, n / 2 ); // the result of the exponentiation is the base raised to the power of half of the exponent,
		return ( x * x );
		// and YOLO,
	}
	else // or else
	{
		return ( b * pow( b, n - 1 ) ); // YOLO anyways.
	}
}
