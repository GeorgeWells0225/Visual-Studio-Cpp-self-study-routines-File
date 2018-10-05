#include<stdio.h>

void main3()
{
	int num1 = 100;
	int num2 = 10;
	num1 += num2;//等价于num1=num1+num2
	printf("%d",num1);
	num1 -= num2;
	printf("\n%d", num1);
	num1 *= num2;
	printf("\n%d", num1);//除的原理相同
	num1 %= num2;
	printf("\n%d", num1);
	getchar();


}