#include<stdio.h>
#include<limits.h>


void main()
{
	printf("\n%d",sizeof(char));//字符类型的大小
	printf("\n%d", sizeof(short));//短整数类型的大小
	printf("\n%d", sizeof(int));//int类型的大小
	printf("\n%d", sizeof(double));//double类型的大小
	printf("\n%d", sizeof(11));
	double b = 0.111;
	printf("\n%d",sizeof(b ));
	int num1 = 10;//有符号
	int num2 = -10;
	printf("%x,%x", &num1, &num2);
	unsigned int num3 = 100;//无符号
	printf("\n%d,%d",INT_MAX,INT_MIN);
	printf("\n%u,%u",UINT_MAX,0);

	getchar();

}