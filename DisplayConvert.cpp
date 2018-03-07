/*
Accept one character from user and convert case of that character.
*/

#include<stdio.h>

void DisplayConvert(char chValue)
{
	if(chValue > 'A' && chValue < 'Z')
	{
		printf("%c",chValue);
	}
	else if(chValue > 'a' && chValue < 'z')
	{
		printf("%c",chValue);
	}
}
/*
int main()
{
	char ch;

	printf("Enter character:\n");
	scanf("%c",&ch);

	DisplayConvert(ch);

	return 0;
}
*/