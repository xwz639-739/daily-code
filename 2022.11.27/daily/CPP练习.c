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
//ǳǳ��д��bug���Ժ����ޣ�

//int main()
//{
//	printf("��������������(���롰E���˳�)\n");
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
//	printf("��������������(���롰E���˳�)\n");
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
//	printf("���������ޣ�\n");
//	int a;
//	scanf("%d", &a);
//	printf("���������ޣ�������С�ڻ��������ʱ�˳�����\n");
//	int b;
//	scanf("%d", &b);
//	while (a < b)
//	{
//		int i=0;
//		for (int k = a; k <= b; k++)
//			i += k * k;
//        printf("��%d��%d��ƽ����֮��Ϊ��%d\n", a * a, b * b, i); printf("���������ޣ�\n");
//		scanf("%d", &a);
//		printf("���������ޣ�������С�ڻ��������ʱ�˳�����\n");
//		scanf("%d", &b);
//	}
//}
//6.11----10

//int main()
//{
//	int arr[8];
//	printf("������˸���\n");
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
//	printf("������һ����������0�����˳���\n");
//	scanf("%d", &a);
//	for (float i = 1; i <= a; i++)
//	{
//		m += 1 / i;
//		n += flag * 1/ i;
//		flag = (-flag);
//	}
//	printf("1+1/2+1/3+...1/n�Ľ��Ϊ%f\n", m);
//	printf("1-1/2+1/3+...1/n�Ľ��Ϊ%f", n);
//	return 0;
//}
//6.11----12