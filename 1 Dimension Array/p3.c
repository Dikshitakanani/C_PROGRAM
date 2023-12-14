/*

given array odd - even number sum.

sum of odd nomber :30
sum of even nomber :25

*/

#include<stdio.h>

int main()
{
	
	int a[10]={1,3,2,4,5,6,5,7,6,8};
	int i;
	int even=0,odd=0;

	for(i=0; i < 10; i++)
	{
		if(a[i]%2==0)
		{
			even+=a[i];
		}
		else
		{
			odd+=a[i];
		}
	}

	printf(" sum of odd nomber :%d\n",odd);

	printf("sum of even nomber :%d\n",even);

	return 0;
	
}