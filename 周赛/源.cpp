#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	long long a, b;
//	scanf("%lld %lld", &a, &b);
//	unsigned long long c;
//	c = a + b;
//	printf("%llu", c);
//	return 0;
//}
//int digui(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//		return digui(x - 2) + digui(x - 1);
//}
//int hanshu(long long x)
//{
//	if (x <= 1)
//		return 1;
//	int i ;
//	long long a = 0, b = 1, c = 0;
//	for (i = 1; i < x; i++)
//	{
//		c = (a + b) % 1000000007;
//		a = b;
//		b = c;
//	}
//	return c % 1000000007;
//}
//int main()
//{
//	long long i=0,T=0,x=0;
//	unsigned long long Y=0;
//	scanf("%lld", &T);
//	for (i = 0; i < T; i++)
//	{
//		scanf("%lld", &x);
//		Y = hanshu(x);
//		printf("%llu\n", Y);
//	}
//	return 0;
//}

//int main()
//{
//	long long shulie[50];
//	shulie[0] = 1;
//	shulie[1] = 1;
//	int i = 0;
//	for (i = 2; i < 50; i++)
//	{
//		shulie[i] = shulie[i - 1] + shulie[i - 2];
//	}
//	int T = 0, x = 0;
//	scanf("%d", &T);
//	for (i = 0; i < T; i++)
//	{
//		scanf("%d", &x);
//		printf("%lld\n", shulie[x - 1]);
//	}
//	return 0;
//}