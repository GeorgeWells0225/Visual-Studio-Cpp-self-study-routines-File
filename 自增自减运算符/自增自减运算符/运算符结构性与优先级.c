#include<stdio.h>

void main()
{
	printf("%d", 1 + 2* 3);
	printf("\n%d",( 1 + 2) * 3);

	int num1 = 3;
	printf("\n%d", -num1++);//�ȼ���-��num++��
	//++�����ȼ����ڳ˳����ڼӼ�
	int x, y;
	x = 10, y = 20;
	printf("%d,%d", x, x+++y);

	getchar();
	

}