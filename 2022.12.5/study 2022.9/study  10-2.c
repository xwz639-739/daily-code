#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)
#include<stdio.h>

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1+my_strlen(str+1);
	else
		return 0;
}
int main()
{
	char arr[] = "hello";
	int len = my_strlen(arr);
	printf("len=%d", len);
	return 0;
}
//求字符串的长度

int fac(int n)
{
	if (n == 1)
		return 1;
	else
		return n * fac(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);
	return 0;
}
//求n的阶乘

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n, ret;
	scanf("%d", &n);
	ret = fib(n);
	printf("ret=%d\n", ret);
	return 0;
}
//斐波那契数列
