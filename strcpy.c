/*
**
** QWASAR.IO -- my_strcpy
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

char* strcpy(char* s_2, char* s) //char* strcpy(char* dst, char* src)
{
	int i = 0;

	while (s[i] != 0)
	{
		s_2[i] = s[i];
		i++;
	}
	s_2[i] = 0;
	return s_2;
}
