#include<iostream>
using namespace std;
#include<string>
#include<ctime>

//void menu()
//{
//	cout << "*********************" << endl;
//	cout << "**1. play***0. exit**" << endl;
//	cout << "*********************" << endl;
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		cout << "请猜数字：";
//		cin >> guess;
//		if (guess > ret)
//		{
//			cout << "猜大了" << endl;
//		}
//		else if (guess < ret)
//		{
//			cout << "猜小了" << endl;
//		}
//		else if (ret == guess)
//		{
//			cout << "猜对了" << endl;
//			break;
//		}
//	}
//}
//int main()
//{
//	int i=0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		cout << "请选择" << endl;
//		cin >> i;
//		switch (i)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			cout << "退出游戏" << endl;
//			break;
//		default:
//			cout << "选择错误，请重新选择" << endl;
//			break;
//		}
//	} while (i);
//	system("pause");
//	return 0;
//}
//猜数字 


//int FIB(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return FIB(n - 1) + FIB(n - 2);
//}
//int main()
//{
//	int n;
//	int ret;
//	cout << "请输入n" << endl;
//	cin >> n;
//	ret = FIB(n);
//	cout << "第" << n << "个斐波那契数是：" << ret << endl;
//	system("pause");
//	return 0;
//}
//计算第n个斐波那契数