/*
Accept two characters from user and swap that characters.
*/

#include<stdio.h>

void Swap(char *ptr1, char *ptr2)
{
	char temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
/*
int main()
{
	char ch1 = 'A', ch2 = 'B';
	Swap(&ch1,&ch2);

	printf("%c\t%c",ch1,ch2);

	return 0;
}
*/