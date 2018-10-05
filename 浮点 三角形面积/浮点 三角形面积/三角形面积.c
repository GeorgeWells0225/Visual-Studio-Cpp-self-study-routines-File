#include<stdio.h>
#include<math.h>

void main()
{

	double a,b,c;
	a = 5.0;
	b = 6.0;
	c = 7.0;
	double p = (a + b + c) / 2;
	double s;
	s = sqrt(p*(p- a)*(p- b)*(p- c));
	printf("三角形的面积是%f平方厘米",s);

	getchar();

}