#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d  ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//打印数字的每位数

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1;i <= 100; i++)
//	{
//		sum += flag * 1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//计算1-1/2+1/3-···+1/99-1/100

//int main()
//{
//	int i = 0;决定行
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;决定列
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
// }
//乘法口诀表