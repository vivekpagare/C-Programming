/*
Accept one character from user and check whether that character is vowel or not.
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char value)
{
	if(value == 'a' || value == 'e' || value == 'i' || value == 'o' || value == 'u')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
/*
int main()
{
	char ch;
	int  iRet = 0;

	printf("Enter character:\n");
	scanf("%c",&ch);

	iRet = ChkVowel(ch);
	if(iRet == TRUE)
	{
		printf("Vowel");
	}
	else
	{
		printf("Not Vowel");
	}

	return 0;
}
*/