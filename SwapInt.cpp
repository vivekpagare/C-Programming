/*
Accept two integers from user and swap contents of that two integers without using third variable
*/

#include<stdio.h>

void Swap(int *ptr1, int *ptr2)
{
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
}
/*
int main()
{
	int no1 = 11, no2 = 21;
	Swap(&no1,&no2);

	printf("%d\t%d",no1,no2);

	return 0;
}
*/