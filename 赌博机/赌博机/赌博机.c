#include<stdio.h>

void main()
{
	time_t ts;
	srand((unsigned int)time(&ts));//�������������

	int num = rand() % 100 + 1;//0-99

	num > 80 ? printf("��Ӯ��") : printf("������");

	getchar();

}