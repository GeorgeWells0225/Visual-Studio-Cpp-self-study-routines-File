#include<stdio.h>
#include<limits.h>


void main()
{
	printf("\n%d",sizeof(char));//�ַ����͵Ĵ�С
	printf("\n%d", sizeof(short));//���������͵Ĵ�С
	printf("\n%d", sizeof(int));//int���͵Ĵ�С
	printf("\n%d", sizeof(double));//double���͵Ĵ�С
	printf("\n%d", sizeof(11));
	double b = 0.111;
	printf("\n%d",sizeof(b ));
	int num1 = 10;//�з���
	int num2 = -10;
	printf("%x,%x", &num1, &num2);
	unsigned int num3 = 100;//�޷���
	printf("\n%d,%d",INT_MAX,INT_MIN);
	printf("\n%u,%u",UINT_MAX,0);

	getchar();

}