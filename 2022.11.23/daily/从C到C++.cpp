#include<iostream>
#include<string>
using namespace std;

//void new_line() {
//	cout << "nice" << endl;
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i <= 3; i++)
//		new_line();
//}
//int main()
//{
//	three_line();
//	system("pause");
//	return 0;
//}
//函数的嵌套调用

//int main() {
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			cout << i << "*" << j << "=" << i * j<<"\t";
//		}
//		cout<<"\n";
//	}
//	system("pause");
//	return 0;
//}
//九九乘法表

//int main()
//{
//	double i = 0,flag=1;
//	double sum=0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1 / i;
//		flag = -flag;
//	}
//	cout << "sum=" << sum << endl;
//	system("pause");
//	return 0;
//}
//计算1-1/2+1/3-1/4...+1/99-1/100

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}
//计算1到00中“9”的个数

//int FAC(int n) {
//	if (n == 1)
//		return 1;
//	else
//		return n * FAC(n - 1);
//}
//int main()
//{
//	int n, ret;
//	cout << "请输入：" << endl;
//	cin >> n;
//	ret = FAC(n);
//	cout << n << "的阶乘为" << ret << endl;
//	system("pause");
//	return 0;
//}
//求n的阶乘（函数的递推）
