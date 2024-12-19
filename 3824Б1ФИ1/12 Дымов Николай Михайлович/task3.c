#include <stdlib.h>
char* task3(char* s, char ch) 
{
	int count = 0;
	int len = 0;
	for (char* ptr = s; *ptr; ++ptr) 
	{
	++len;
	if (*ptr == ch)
	  ++count;
	}

	int n = len + count + 1; 
	char* result = (char*)malloc(n);
	
	char* dest = result;
	for (char *ptr = s; *ptr; ++ptr) 
	{
	*dest++ = *ptr;
	if (*ptr == ch)
		*dest++ = ch;
	}
	*dest = '\0';
	return result;
}
