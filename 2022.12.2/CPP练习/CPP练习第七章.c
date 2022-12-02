#include<stdio.h>

//int main()
//{
//	char a;
//	int i =0, k =0, n = 0;
//	while ((a = getchar()) != '#')
//	{
//		if (a == ' ')
//			i++;
//		if (a == '\n')
//			k++;
//		else 
//			n++;
//	}
//	printf("i=%d,k=%d,n=%d", i, k+1, n-i-k);
//	return 0;
//}
//7.12----1

//int main() {
//	char a;
//	int i = 0;
//	while ((a = getchar()) != '#')
//	{
//		printf(" %c-%d\t ", a, a);
//		i++;
//		if (i % 8 == 0)
//			putchar('\n');
//	}
//	return 0;
//}
//7.12----2

//int main() {
//	printf("请输入整数\n");
//	int a;
//	int O_count=0,E_count=0,O_sum=0,E_sum=0;
//	float O_ave=0, E_ave=0;
//	while (scanf("%d",&a) && a != 0)
//	{
//		if (a % 2 == 0 && a!=' ' && a!=0)
//		{
//			E_count++;
//			E_sum += a;
//		}
//		if (a % 2 != 0 && a!=' ')
//		{
//			O_count++;
//			O_sum += a;
//		}
//		else
//			continue;
//	}
//	E_ave = (float)(E_sum / E_count);
//	O_ave = (float)(O_sum / O_count);
//	printf("偶数的个数为：%d,平均值为：%.2f\n", E_count, E_ave);
//	printf("奇数的个数为：%d,平均值为：%.2f", O_count, O_ave);
//	return 0;
//}
//7.12----3

//int main() {
//	int count=0;
//	char a;
//	while ((a = getchar()) != '#')
//	{
//		if (a == '.')
//		{
//			a = '!';
//			count++;
//		}
//		else if (a == '!')
//		{
//			a = '!!';
//			count++;
//		}
//		else
//			continue;
//		printf("%c", a);
//	}
//	printf("替换的次数为：%d", count);
//	return 0;
//}
//7.12----4

int main()
{
	int i;
	for (i = 1; i <= 4; i++)
	{
		for (int k = 1; k <=4-i; k++)
			printf(" ");
		for (int n = 0; n < 2 * i - 1; n++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= i; j++)
			printf(" ");
		for (int k = 0; k <= 4 - 2 * i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
//打印菱形