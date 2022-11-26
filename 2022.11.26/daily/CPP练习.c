#include<stdio.h>

//int main()
//{
//	char arr[26] = { 0 };
//	for (int i = 0; i < 26; i++)
//	{
//		arr[i] = 97 + i;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//6.16----1

//int main()
//{
//	int row, col;
//	for (row = 1; row <= 5; row++)
//	{
//		
//		for (col = 1; col <= 5; col++)
//			if(row>=col)
//				printf("$");
//		printf("\n");
//	}
//	return 0;
//}
//6.16----2

//int main()
//{
//	char a='F';
//	for (int i = 1; i <= 6; i++)
//	{
//		for (int k = 1; k <= 6; k++)
//			if (i >= k)
//				printf("%c", a + 1 - k);
//		printf("\n");
//	}
//	return 0;
//}
//6.16----3

//int main()
//{
//	char a = 'A';
//	for (int i = 1; i <= 6; i++)
//	{
//		for (int k = 1; k <= 6; k++)
//			if (i >= k)
//				printf("%c", a++);
//		printf("\n");
//	}
//	return 0;
//}
//6.16----4

//int main()
//{
//	printf("请输入上限：\n");
//	int n = 0;
//	scanf("%d", &n);
//	printf("请输入下限：\n");
//	int i = 0;
//	scanf("%d", &i);
//	for (int a = n; a <= i; a++)
//	{
//		printf("%5d%5d%5d\n", a, a * a, a * a * a);
//	}
//	return 0;
//}
//6.16----6