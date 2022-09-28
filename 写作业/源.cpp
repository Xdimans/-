#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<algorithm>
int main()
{
	int n, m,i;
	long long sum;
	int a[10000];
	while (scanf("%d %d", &n, &m) != EOF);
	for (i = 0; i < n, i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a[1], a[i], );
	sum = a[1] + a[2] + a[3];
	printf("%lld", sum);
	return 0;
}
//int main()
//{
//	int shuzu[2000000];
//	long long n,c,t,i,j;
//	double a;
//	scanf("%lld", &n);
//	for (int c = 0; c < n; c++)
//	{
//		scanf("%lf %lld", &a, &t);
//		for (i = 1; i <= t; ++i)
//		{
//			if (shuzu[int(i * a)] = 0)
//			{
//				 shuzu[int(i *a)] = 1;
//			}
//			else
//			{
//				 shuzu[int(i * a)] = 0;
//			}
//		}
//		
//	}
//	for (j = 1;; j++)
//	{
//		if (shuzu[j] = 1)
//		{
//			printf("%d", i * (int)a);
//		}
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	double n = 0;
//	scanf("%lf", &n);
//	printf("%d", (int)n);
//	return 0;
//}
//int main()
//{
//	int n,sum=0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	int n = 1;
//	double S = 0;
//	for (n=1; S <= k; n++)
//	{
//		S = S + (1.0 / n);
//		if (S > k)
//		{
//			break;
//		}
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	double F, G, H=0;
//	H = (1 - sqrt(5)) / 2;
//	G = (1 + sqrt(5)) / 2;
//	double sum1 = 0;
//	double sum2=0;
//	int d;
//	for (int d = 0; d < n; d++)
//	{
//		
//		sum1 = sum1 * G;
//		sum2 = sum2 * H;
//	}
//	F = (sum1 - sum2) / sqrt(5);
//	printf("%.2lf", G);
//	return 0;
	//int main()
	//{
	//	int n = 0;
	//	scanf("%d", &n);
	//	double F, G, H = 0;
	//	H = (1 - sqrt(5)) / 2;
	//	G = (1 + sqrt(5)) / 2;
	//	double sum1 = 1;
	//	double sum2 = 1;
	//	int d=0;
	//	while (d < n)
	//	{
	//		sum1 = sum1 * H;
	//		sum2 = sum2 * G;
	//		d++;
	//	}
	//	if (d = n)
	//	{
	//		F = (sum2 - sum1) / sqrt(5);
	//		printf("%.2lf",F);
	//	}
	//	return 0;
	//}
//int main()
//{
//    int t;
//    scanf("%d", &t);
//    while (t--)
//    {
//        char a;
//        scanf("%c", &a);
//        printf("%d\n", a);
//    }
//    return 0;
//
//}
// 
//int main()
//{
//	int n, sum = 0, m;
//	int a, b;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		sum = 0;
//		scanf("%d", &m);
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &a);
//			sum += a;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//int main()
//{
//	long long d,n,x,y= 0;
//	long long i;
//	scanf("%lld", &d);
//	for (long long i = 0; i < d; i++)
//	{
//		scanf("%lld %lld %lld", &n, &x, &y);
//		while (n >= x + y)
//		{
//			n = n - x - y;
//		}
//		if (n > x)
//		{
//			printf("A\n");
//		}
//		else if (n = x)
//		{
//			printf("A\n");
//		}
//		else
//		{
//			printf("B\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n,sum = 0,m;
//	int a,b;
//	scanf("%d",&n);
//	for(int i= 0;i<n;i++)
//	{
//		sum = 0;
//		scanf("%d",&m);
//		for(int j = 0;j<m;j++)
//		{
//			scanf("%d",&a);
//			sum+=a;
//		}
//		printf("%d\n",sum);
//	}
//} 
//int main()
//{
//	int a, b, c;
//	scanf("%lld %lld %lld", &a, &b, &c);
//	int t
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[1000];
//	for (int i = 0; i <n ; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int less = a[0];
//	for (int i = 0;i < n; i++)
//	{
//		if (a[i] < less)
//		{
//			less = a[i];
//		}
//	}
//	printf("%d\n", less);
//	return 0;
//}
//int main()
//{
//	int n,k=0;
//	scanf("%d %d", &n,&k);
//	int sum1=0 ;
//	int sum2=0 ;
//	int ci1 = 0;
//	int ci2 = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		if (i% k == 0)
//		{
//			sum1 = sum1 + i;
//			ci1 += 1;
//		}
//		else
//		{
//			sum2 = sum2 + i;
//			ci2 += 1;
//		}
//	}
//	double av1, av2=0;
//	av1 = (double)sum1 / (double)ci1;
//	av2 = (double)sum2 / (double)ci2;
//	printf("%.1f %.1f", av1, av2);
//	return 0;
//}
//int main()
//{
//	long a,b=0;
//	scanf("%ld", &a);
//	while (a > 1)
//	{
//		a = a / 2;
//		b++;
//	}
//	if (a = 1)
//	{
//		b += 1;
//		printf("%d\n", b);
//	}
//	return 0;
//}
//int main()
//{
//	double s,b= 0;
//	int a = 0;
//	double c = 2;
//	scanf("%lf", &s);
//	while (b < s)
//	{
//		b = b + c;
//		c = 0.98 * c;
//		a++;
//	}
//	if (b > s)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}
//int main()
//{
//	printf("%%d%%\'\\n\\r\"\\");
//		return 0;
//}
//int main()
//{
//	int getchar()
//}