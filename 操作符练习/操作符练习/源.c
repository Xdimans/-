#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	a -= 3;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	a = a - 3;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = 2;
//	a = a % b;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 5.0;
//	int b = 2;
//	a = a / b;
//	printf("%d\n", a);
//	return 0;
//}
//a:00000000000000000000000000000101ÒÆ²½ºó0000000000000000000000000000010100=16+4=20
//int main()
//{
//	int a = 5;
//	int b = a << 2;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	a = -a;
//	printf("%d", a);
//	return 0;
//}

int main()
{
	int a = 5;
	char arr1[10] = { 'a','b' };
	int ch[3] = { 1,2,3 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(ch));
	int cao = sizeof(ch) / sizeof(a);
	printf("%d\n", cao);
	return 0;
}