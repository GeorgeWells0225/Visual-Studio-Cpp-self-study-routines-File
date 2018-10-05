
#include<stdio.h>
//函数的调用，函数的封装

int jia(int a ,int b)
{
	return a + b;

}

int jian(int a, int b)
{
	return a - b;

}

int cheng(int a, int b)
{
	return a * b;

}
int chu(int a, int b)
{
	return a / b;

}

int qiuyu(int a, int b)
{
	return a & b;

}

void main()
{
	int num1 = 100;
	int num2 = 10;

	printf("%d",cheng(num1, num2));

	getchar();

}