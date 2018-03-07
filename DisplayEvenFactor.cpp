/*
write a program which accept one number from user and print even factors of that numbers.
*/

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
	if(iNo <= 0)
	{
		iNo = -iNo;
	}

	int i = 0;

	for(i = 1; i <= iNo/2; i++)
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

	DisplayEvenFactor(no);

	return 0;
}
*/