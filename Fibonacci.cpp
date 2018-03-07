/*
Acept one number and print that no of elements from fibonacci series.
*/

#include<stdio.h>

void Fibonacci(int iNo)
{
	int a = 0, b = 0, c = 1;

	while(iNo != 0)
	{
		printf("%d\t",c);
		a = b;
		b = c;
		c = a + b;
		iNo--;
	}
}
/*
int main()
{
	int no = 0;

	printf("Enter no:\n");
	scanf("%d",&no);

	Fibonacci(no);
	return 0;
}
*/