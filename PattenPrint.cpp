/*
Accept one no from user and print that no of * on screen.
*/

#include<stdio.h>

void PatternPrint(int iNo)
{
	while(iNo > 0)
	{
		printf(" * ");
		iNo --;
	}
}
/*
int main()
{
	int no = 0;

	printf("Enter no:\n");
	scanf("%d",&no);

	PatternPrint(no);

	return 0;
}
*/