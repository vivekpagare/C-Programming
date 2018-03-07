#include<stdio.h>
#include<string.h>

void ConvertCase(char chvalue)
{
	if(chvalue >= 'A' && chvalue <= 'Z')
	{
		chvalue = chvalue + 32;
		printf("%c",chvalue);
	}
	else //if(chvalue >= 'a' && chvalue <= 'z')
	{
		chvalue = chvalue - 32;
		printf("%c",chvalue);
	}
}
/*
int main()
{
	char ch;
	
	printf("Enter character:\n");
	scanf("%c",&ch);

	ConvertCase(ch);
	return 0;
}
*/