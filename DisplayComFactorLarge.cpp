/*
write a program which accept two numbers from user and display its largest common factors.
*/

#include<stdio.h>

void DisplayComFactorLarge(int iNo1,int iNo2)
{
	int i = 1, iMax = 0;

	while((i <= iNo1/2) && (i <= iNo2/2))
	{
		if((iNo1%i == 0) && (iNo2%i == 0))
		{
			if(iMax < i)
			{
				iMax = i;
			}
		}
		
		i++;
	}
	printf("%d\t",iMax);
}
/*
int main()
{
	int no1 = 0, no2 = 0;

	printf("Enter nos:\n");
	scanf("%d%d",&no1,&no2);

	DisplayComFactorLarge(no1,no2);

	return 0;
}
*/