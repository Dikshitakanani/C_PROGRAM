/*

A       c       E       g       I       k       M       o      Y

*/


#include<stdio.h>
#include<conio.h>

int main()

{

      int a=65;

	while(a<=90)
	{
		if(a%4==1)
		{
			printf("%c\t",a);
		}
		else
		{
			printf("%c\t",a+32);
		}
		a+=2;
	}
      return 0;
}