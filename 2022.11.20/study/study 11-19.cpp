#include<iostream>
#include<string>
using namespace std;

//int main()
//{
//	float w1=0, w2=0, w3=0;
//	cout << "请输入三只小猪的体重" << endl;
//	cin >> w1;
//	cin >> w2;
//	cin >> w3;
//	if (w1 > w2)
//	{
//		if (w1 > w3)
//			cout << "第一只小猪更重" << endl;
//		else
//			cout << "第三只小猪更重" << endl;
//	}
//	else
//	{
//		if (w2 > w3)
//			cout << "第二只小猪更重" << endl;
//		else
//			cout << "第三只小猪更重" << endl;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n;
//	cout << "请输入一个三位数" << endl;
//	cin >> n;
//	while (n<100 && n>999)
//	{
//		cout << "请输入三位数" << endl;
//		cin >> n;
//	}
//	
//	int a, b, c;
//	a = n % 10;
//	b = (n / 10) % 10;
//	c = (n / 100) % 10;
//	int i = a * a * a + b * b * b + c * c * c;
//	if (i == n)
//		cout << "n= " << n << "是水仙花数" << endl;
//	else
//		cout << "n= " << n << "不是水仙花数" << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++) 
//	{
//		if ((i % 7 == 0) || (i % 10 == 7) || (i / 10 == 7))
//			cout << "拍桌子" << endl;
//		else
//			cout << i << endl;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int row,col=1;
//	for (col= 1; col < 10; col++)
//	{
//		for (row = 1; row < 10; row++)
//		{
//			if (col >= row)
//			{
//				cout << row << "*" << col << "=" << row * col;
//				cout << "\t";
//			}
//			else
//				continue;
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i,arr[10];
//	int n=0;
//	cout << "请输入十个整数" << endl;
//	while (n < 10)
//	{
//		cin >> arr[n];
//		n++;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int k = 0;	
//		for (k = 0; k < 10 -1 - i; k++)
//		{
//			if (arr[k] > arr[k+1])
//			{
//				int tmp=0;
//				tmp = arr[k];
//				arr[k] = arr[k+1];
//				arr[k+1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}
//冒泡排序

//int main()
//{
//	int grades[3][3] =
//	{
//		{100,100,100},
//		{90, 50, 100},
//		{60,70,80}
//	};
//	cout << "张三的成绩为：" << grades[0][0] + grades[0][1] + grades[0][2] << endl;
//	cout << "李四的成绩为：" << grades[1][0] + grades[1][1] + grades[1][2] << endl;
//	cout << "王五的成绩为：" << grades[2][0] + grades[2][1] + grades[2][2] << endl;
//	system("pause");
//	return 0;
//}

//int ADD(int a, int b)
//{
//	int sum = a + b;
//	return sum;
//}
//int main()
//{
//	int a=0, b=0;
//	cout << "请输入a：" << endl;
//	cin >> a;
//	cout << "请输入b：" << endl;
//	cin >> b;
//	int c = ADD(a, b);
//	cout << "a+b=" << c << endl;
//	system("pause");
//	return 0;
//}