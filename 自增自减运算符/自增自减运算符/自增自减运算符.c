#include<stdio.h>


void main2()
{
	int x, y, a, b;
	x = 3;
	printf("%d", x++);//x�ں�������������
	y = 3;
	printf("\n%d", y--);
	printf("\n%d",y);
	a = 3;
	printf("\n%d", ++a);
	b = 3;
	printf("\n%d", --b);

	getchar();

}

//һ������£������Լ���䵥��ʹ��


void main1()
{
	int num1 = 3;

	num1 = num1 ++;//�ӼӼ��������ڳ��������,����ֵ

	printf("%d", num1);

	getchar();
}