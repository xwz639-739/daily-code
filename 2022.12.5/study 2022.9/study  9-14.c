#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int num1, num2, sum;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d", sum);
	return 0;
}
//两数相加

int main()
{
	int i = 1;
	while (i < 100)
	{
		printf("%d\n",i);
		i += 2;
	}
	return 0;
}
//1到100的奇数1

int main()
{
	int ret, ch;
	char password[20] = { 0 };
	printf("请输入密码\n");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
取走“\n”
	printf("请确认（Y/N)\n");
	ret = getchar();
	if ('Y' == ret)
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}
//设置密码

int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}
//打印1到9的数字（for语句）

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int k = 7;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid]< k)
		{
			left = mid + 1;
		}
		else if (arr[mid] = k)
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}
//二分查找法

int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d\n", i);
		i++;
	}
	return 0;
}
//1到100的奇数2

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret=%d", ret);
	return 0;
}
//n的阶乘（有bug）

int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}
//计算1！+2！+3！

int main()
{
	char arr1[] = "hello!!!!!";
	char arr2[] = "          ";
	int left = 0;
	int right = strlen(arr1)-1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1500);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}
//字符向中间汇聚

void swap(int* a, int* b)
{
	int tmp = 0;
	tmp =*a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("a=%d  b=%d\n", a, b);
	swap(a, b);
	printf("a=%d  b=%d\n", a, b);
	return 0;
}
