#include<stdio.h>
#include<math.h>
#include<string.h>


//int main()
//{
//	int a[8];
//	int i = 0;
//	for (i = 0; i < 8; i++)
//	{
//		a[i] = (int)pow(2,i)*2;
//	}
//	int k = 0;
//	do
//	{
//		printf("%d ", a[k]);
//		k++;
//	} while (k < 8);
//	return 0;
//}
//6.11----13

//int main()
//{
//	double arr1[8];
//	double arr2[8] = {0};
//	for (int i = 0; i < 8; i++)
//	{
//		scanf("%lf", &arr1[i]);
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		int k = 0;
//		for (k = 0; k <= i; k++)
//		{
//			arr2[i] += arr1[k];
//		}
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%.2lf\t", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%.2lf\t", arr2[i]);
//	}
//	return 0;
//}
//6.11----14

//int main()
//{
//	char data[256];
//	printf("请输入:");
//	int i = 0;
//	do {
//		scanf("%c", &data[i]);
//	} while (data[i] != '\n' && ++i);
//	printf("倒序打印:");
//	for (i--; i >= 0; i--)
//	{
//		printf("%c", data[i]);
//	}
//	printf("\ndone\n");
//	return 0;
//}
//6.11----15

//int main()
//{
//	int year=1;
//	double DAP = 100;
//	double DEI = 100;
//	do
//	{
//		DAP = 100.0 + 10.0 * year;
//	    DEI =DEI+DEI*0.05;
//		year++;
//	} while ((DEI-DAP) <0 );
//	printf("%d\n", year);
//	printf("DAP=%.2lf", DAP);
//	printf("\tDEI=%.2lf", DEI);
//	return 0;
//}
//6.11----16

//int main()
//{
//	float chuckie = 100;
//	int year = 0;
//	do
//	{
//		chuckie = chuckie + chuckie * 0.08;
//		chuckie -= 10;
//		year++;
//		printf("%f\n", chuckie);
//	} while (chuckie > 9);
//	printf("%d,%f\n", year,chuckie);
//	printf("%d", ++year);
//	return 0;
//}
//6.11----17

//int main()
//{
//	int start = 5;
//	int week = 1;
//	while (start < 150)
//	{
//		printf("在第%d个星期，有%d个朋友\n", week, start);
//		start = 2 * (start - week++);
//	}
//	return 0;
//}
//6.11----18