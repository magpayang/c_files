#include <stdio.h>

int str_len()
{
	//returns the number of characters of the inputed string
	int c, i;

	for(i=0; (c=getchar())!='\n'; i++)
	{
		//do nothing;		
	}
	return i;
}

int main()
{
	int string_length;
	string_length = str_len();

	printf("%d\n", string_length);
}
