#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i=0;
	char a[1];
	printf("��һ������Ҫ��ˢ�������֣�Ȼ�󰴻س�:>");
	scanf("%c", &a[0]);
	while (i < 999)
	{
		printf("%c", a[0]);
		i++;
	}
	return 0;
}