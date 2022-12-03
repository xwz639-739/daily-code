#include<iostream>
using namespace std;

//class TRY
//{
//public:
//	int age=0;
//	TRY()
//	{
//		//cout << "这是无参构造" << endl;
//	}
//	TRY(int a)
//	{
//		age = a;
//		cout << "这是有参构造" << endl;
//	}
//	TRY(const TRY& t)
//	{
//		age = t.age;
//		cout << "这是拷贝构造" << endl;
//	}
//	~TRY()
//	{
//		cout << "这是析构函数" << endl;
//	}
//};
//
//void test()
//{
//	//括号法
//	TRY t1;
//	TRY t2(10);
//	TRY t3(t2);
//	cout << "age of t2:" << t2.age << endl;
//	cout << "age of t3:" << t3.age << endl;
//	//注意1：调用无参函数时不能加括号，否则编译器会认为这是个函数声明
//	
//	//显示法
//	TRY t4;
//	TRY t5 = TRY(10);
//	TRY t6 = TRY(t5);
//
//	TRY(10);//匿名对象，当行结束后，马上析构
//	cout << "这里有一个匿名对象" << endl;
//
//	//隐式转换法
//	TRY t7 = 10;
//	TRY t8 = t7;
//	//注意2：不能利用拷贝构造函数初始化匿名对象，编译器会认为是对象声明
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}