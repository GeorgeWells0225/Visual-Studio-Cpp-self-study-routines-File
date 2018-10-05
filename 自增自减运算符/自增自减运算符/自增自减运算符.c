#include<stdio.h>


void main2()
{
	int x, y, a, b;
	x = 3;
	printf("%d", x++);//x在后先引用再自增
	y = 3;
	printf("\n%d", y--);
	printf("\n%d",y);
	a = 3;
	printf("\n%d", ++a);
	b = 3;
	printf("\n%d", --b);

	getchar();

}

//一般情况下，自增自减语句单独使用


void main1()
{
	int num1 = 3;

	num1 = num1 ++;//加加减减不用于常量运算符,需左值

	printf("%d", num1);

	getchar();
}