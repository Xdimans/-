#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i=0;
	char a[1];
	printf("打一段你想要我刷屏的文字，然后按回车:>");
	scanf("%c", &a[0]);
	while (i < 999)
	{
		printf("%c", a[0]);
		i++;
	}
	return 0;
}