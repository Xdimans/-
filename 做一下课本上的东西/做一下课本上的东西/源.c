#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int add(int x,int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//}
//int main()
//{
//	int x ;
//	int y ;
//	scanf("%d %d", &x,&y);
//	int sum = add(x, y);
//	printf("%d", sum);
//	return 0;
//}

int hanshu(int num1, int num2)
{
	int z = 0;
	z=num1* num2;
	return z;
}
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	int sum = hanshu(x, y);
	printf("%d", sum);
	return 0;
}





//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////int main()
////{
////	int num1 = 0;
////	int num2 = 0;
////	scanf("%d %d", &num1, &num2);
////	int sum = num1 + num2;
////	printf("sum=%d", sum);
////	return 0;
////
////
////int add(int x, int y)
////{
////	int z = x + y;
////	return z;
////}
////int main()
////{
////	int num1 = 0;
////	int num2 = 0;
////	scanf("%d %d", &num1, &num2);
////	int sum = add(num1, num2);
////	printf("%d", sum);
////	return 0;
////}
//
////int add(int x, int y)
////{
////	int z = 0;
////	z = x + y;
////	return z;
////}
////int main()
////{
////	int num1 = 0;
////	int num2 = 0;
////	scanf("%d %d", &num1, &num2);
////	int sum = add(num1, num2);
////	printf("%d", sum);
////	return 0;
////}
//
////int只能有一次，多次int同一个东西会出现重复定义的错误，此外函数中使用了xyz，而主函数中使用了num1，num2，sum，这两个也不能重复使用
//
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	x = add(x, y);
//	printf("%d", x);
//	return 0;
//}
