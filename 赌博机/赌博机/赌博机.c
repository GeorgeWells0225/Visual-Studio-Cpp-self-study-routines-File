#include<stdio.h>

void main()
{
	time_t ts;
	srand((unsigned int)time(&ts));//生成随机数种子

	int num = rand() % 100 + 1;//0-99

	num > 80 ? printf("你赢了") : printf("你输了");

	getchar();

}