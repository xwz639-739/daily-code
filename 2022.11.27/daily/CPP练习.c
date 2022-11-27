#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main() 
//{
//	char arr[30] = {0};
//	scanf_s("%s", &arr,sizeof(arr));
//	int i = strlen(arr);
//	for (i -= i; i >= 0; --i)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//浅浅的写个bug（以后来修）

//int main()
//{
//	printf("请输入两个数字(输入“E”退出)\n");
//	float a, b;
//	while (scanf("%f %f", &a, &b))
//	{
//		printf("%f", (a - b) / (a * b));
//	}
//	return 0;
//}
//6.11----8

//float counting(float a, float b)
//{
//	return  (a - b) / (a * b);
//}
//int main()
//{
//	printf("请输入两个数字(输入“E”退出)\n");
//	float a, b;
//	while (scanf("%f %f", &a, &b))
//	{
//		printf("%f",counting(a, b));
//	}
//	return 0;
//}
//6.11----9

//int main()
//{
//	printf("请输入上限：\n");
//	int a;
//	scanf("%d", &a);
//	printf("请输入下限（当下限小于或等于上限时退出）：\n");
//	int b;
//	scanf("%d", &b);
//	while (a < b)
//	{
//		int i=0;
//		for (int k = a; k <= b; k++)
//			i += k * k;
//        printf("从%d到%d的平方数之和为：%d\n", a * a, b * b, i); printf("请输入上限：\n");
//		scanf("%d", &a);
//		printf("请输入下限（当下限小于或等于上限时退出）：\n");
//		scanf("%d", &b);
//	}
//}
//6.11----10

//int main()
//{
//	int arr[8];
//	printf("请输入八个数\n");
//	for (int i = 0; i < 8; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 7; i >= 0; i--)
//	{
//		printf("%2d", arr[i]);
//	}
//	return 0;
//}
//6.11----11

//int main()
//{
//	int a;
//	float m = 0, n = 0;
//	int flag = 1;
//	printf("请输入一个数（输入0或负数退出）\n");
//	scanf("%d", &a);
//	for (float i = 1; i <= a; i++)
//	{
//		m += 1 / i;
//		n += flag * 1/ i;
//		flag = (-flag);
//	}
//	printf("1+1/2+1/3+...1/n的结果为%f\n", m);
//	printf("1-1/2+1/3+...1/n的结果为%f", n);
//	return 0;
//}
//6.11----12