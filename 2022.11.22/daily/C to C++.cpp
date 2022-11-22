#include<iostream>
using namespace std;

//int main()
//{
//	int i;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			cout << i << "是奇数" << endl;
//		else
//			continue;
//	}
//	system("pause");
//	return 0;
//}
//不用函数判断一个数是否为奇数

//void IS_PRIME(int i)
//{
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			cout << i << "是奇数" << endl;
//		else
//			continue;
//	}
//}
//int main()
//{
//	int i;
//	IS_PRIME(i);
//	system("pause");
//	return 0;
//}
//用函数判断一个数是否为奇数

//int main()
//{
//	int year = 0;
//	cout << "请输入年份(按 \"-1\" )退出" << endl;
//	cin >> year;
//	while (year != -1)
//	{
//         if ((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0)
//		     cout << year << "是闰年" << endl;
//		 else
//			 cout << year << "不是闰年" << endl;
//		 cout << "请输入年份(按 \"-1\" )退出" << endl;
//		 cin >> year;
//	}
//	system("pause");
//	return 0;
//}
//不用函数判断某一年分是否为闰年

//int is_leap_year(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || (i % 400) == 0)
//	    cout << i << "是闰年" << endl;
//	else
//		cout << i << "不是闰年" << endl;
//		cout << "请输入年份(按 \"-1\" )退出" << endl;
//		cin >> i;
//		return i;
//}
//int main()
//{
//	int year;
//	cout << "请输入年份(按 \"-1\" )退出" << endl;
//	cin >> year;
//	while (year != -1)
//		year=is_leap_year(year);
//	system("pause");
//	return 0;
//}
//用函数判断某一年是否为闰年

//void swith(char a)
//{
//	if (a >= 65 && a <= 90)
//		printf("%c\n", a + 32);
//	else if (a >= 97 && a <= 122)
//		printf("%c\n", a - 32);
//	else
//		printf("%c\n", a);
//}
//int main()
//{
//	char a=0;
//	while (a != EOF)
//	{
//		printf("请输入\n");
//		scanf("%c", &a);
//		swith(a);
//		main();
//	}
//	return 0;
//}
//以C语言实现大小写转换

//int main()
//{
//	char a;
//	cout << "请输入" << endl;
//	cin >> a;
//	if (a >= 65 && a <= 90)
//		cout << char(a + 32)<< endl;//强制类型转换
//	else if (a >= 97 && a <= 122)
//		cout <<char(a - 32) << endl;
//	else
//		cout << char(a) << endl;
//}
//以C++实现大小写转换