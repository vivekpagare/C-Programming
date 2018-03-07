/*
write a program which accept two numbers from user and print display its common factors.
*/

#include<stdio.h>

void DisplayComFactor(int iNo1,int iNo2)
{
	int i = 1;

	while((i <= iNo1/2) && (i <= iNo2/2))
	{
		if((iNo1%i == 0) && (iNo2%i == 0))
		{
			printf("%d\t",i);
		}
		
		i++;
	}
}
/*
int main()
{
	int no1 = 0, no2 = 0;

	printf("Enter nos:\n");
	scanf("%d%d",&no1,&no2);

	DisplayComFactor(no1,no2);

	return 0;
}
*/