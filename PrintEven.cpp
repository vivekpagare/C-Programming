/*
Write a program which accept one number from user and print that no of even numbers on screen
*/

#include<stdio.h>

void NoEven(int iNo)
{
	int i = 0;

	for(i = 1; i <= iNo * 2; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d\t",i);
		}
	}
}
/*
int main()
{
	int no = 0;

	printf("Enter no:\n");
	scanf("%d",&no);

	NoEven(no);

	return 0;
}
*/