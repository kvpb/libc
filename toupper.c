/*
**
** QWASAR.IO -- my_upcase
**
** @param {char*} param_1
**
** @return {char*}
**
*/

/*#include <string.h>
#include <stdio.h>*/

char* toupper(char* s)
{
	int i = 0;

	while ( s[i] != 0 )
	{
		if ( 97 <= s[i] && s[i] <= 122 )
		{
			s[i] -= 32;
		}
		i++;
	}
	return s;
} // ~It does not work?! What the fuck? Well, let's recycle my old toupper().~ Of course, it works.

/*int toupper(int c)
{
	return ( ( 97 <= c && c <= 122 ) ? c - 32 : c );
}

char* my_upcase(char* param_1)
{
	int i = 0;

	while ( param_1[i] != 0 )
	{
		toupper(param_1[i]);
		i++;
	}
	return param_1;
}*/

/*
Example of main
*/
/*int main() {
  char *my_str = strdup("AbcE Fgef1");
  
  printf("RANDOM CASE -> %s\n", my_str);
  printf("UPCASE	  -> %s\n", my_upcase(my_str));
  return 0;
}*/

/*int main()
{
	char* s_0 = "aBc";
	char* s_1 = "";

	printf("%s\n", s_0);
	my_upcase(s_0);
	printf("%s\n", s_0);
	printf("%s\n", s_1);
	my_upcase(s_1);
	printf("%s\n", s_1);
}*/
