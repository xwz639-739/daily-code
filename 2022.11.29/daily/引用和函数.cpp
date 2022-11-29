#include<iostream>
using namespace std;

//void my_swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "交换前：a= " << a << " b= " << b << endl;
//	my_swap(a, b);
//	cout << "交换后：a= " << a << " b= " << b << endl;
//	system("pause");
//	return 0;
//}
//引用相当于指针，且可以自行解引用，在C++中多用引用

//int& test()
//{
//	static int a = 10;
//	return a;
//}
//int main()
//{
//	int& ref = test();
//	cout << "ref= " << ref << endl;
//	system("pause");
//	return 0;
//}
//引用做函数的返回值

//void func1(int a, int b = 20)
//{
//	cout << "func1中a= " << a << " b= " << b << endl;
//}
//void func2(int a, int b)
//{
//	cout << "func2中a= " << a << " b= " << b << endl;
//}
//int main()
//{
//	func1(10);
//	func2(10, 20);
//	cout << "func1与func2的输出结果相同！" << endl;
//	system("pause");
//	return 0;
//}
//C++中默认参数
