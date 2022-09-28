#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Max 10
#define hong(X,Y) X*Y
#define hong1(X,Y) ((X)+(Y))

//int hanshu(int x, int y)
//{
//	y = x * y;
//	return y;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int z;
//	z = hanshu(a, b);
//	printf("%d %d\n", z,Max);
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int* zhizhen = &a;
//	printf("%d %d %d\n", a, *zhizhen, sizeof(*zhizhen));
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int z,l;
//	z = hong(a, b);
//	l = hong1(a, b);
//	printf("%d %d %d %d %d %d\n", z, 1 + hong(a, b), hong(a, b),l,hong1(a,b),2*hong1(a,b));
//	return 0;
//}
struct jiegouti
{
	char name[5];
	int shengao;
	float score;
};
int main()
{
	struct jiegouti a = { "¹·µ°",172,80.5 };
	struct jiegouti* p= &a;
	printf("%s %d %f\n", a.name, a.shengao, a.score);
	printf("%s %d %f\n", (*p).name, (*p).shengao, (*p).score);
	printf("%s %d %f\n", p->name, p->shengao, p->score);
	return 0;
}
