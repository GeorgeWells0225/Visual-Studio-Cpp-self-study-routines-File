#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int num;
	scanf("%d", &num );
	int a, b, c;
	a = num % 10;
	b = num / 10 % 10;
	c = num / 100;
	int jieguo;
	jieguo = a + b + c;
	printf("%d,%d,%d,%d",jieguo,a ,b ,c );

	system("pause");
}