#include<stdio.h>

void main()
{
	printf("%d", 1 + 2* 3);
	printf("\n%d",( 1 + 2) * 3);

	int num1 = 3;
	printf("\n%d", -num1++);//等价于-（num++）
	//++的优先级大于乘除大于加减
	int x, y;
	x = 10, y = 20;
	printf("%d,%d", x, x+++y);

	getchar();
	

}