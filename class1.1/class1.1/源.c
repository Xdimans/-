#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long long a, b;
	while (scanf("%lld %lld", &a,& b) != EOF)
	{
		unsigned long long sum = a + b;
		printf("%llu\n", sum);
	}
	return 0;
}