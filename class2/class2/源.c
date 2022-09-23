#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char cn;
//	scanf("%c", &cn);
//	int a;
//	a = (int)cn-32;
//	printf("%c\n", a);
//	return 0;
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%1d%1d%1d.%1d", &a, &b, &c, &d);
//	printf("%1d.%1d%1d%1d", d, c, b, a);
//	return 0;
//}
int main()
{
	float a = 0;
	long b = 0;
	scanf("%f %ld", &a, &b);
	float c;
	long long d;
	c = a / b;
	d = 2 * b;
	printf("%.3f\n%lld\n", c, d);
	return 0;
}
	