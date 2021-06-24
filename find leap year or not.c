#include<stdio.h>
#include<conio.h>
void main()
{
	int m = 1900, n = 2100;
	do{
		if(m%4==0)
		printf("\n %d is leap year",m);
		else
		printf("\n %d is not a leap year",m);
		m++;
    }while(m<=n);
}
