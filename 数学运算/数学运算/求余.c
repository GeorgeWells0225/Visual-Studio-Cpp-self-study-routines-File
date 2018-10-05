#include<stdio.h>

void main2()
{
	//求余数的一个很重要的用途就是取出个位数
	printf("%d",100 % 9);
	printf("\n%d", 120 % 19);

	int num = 109;//取出个位数
	printf("%d",num % 10);

	getchar();
}