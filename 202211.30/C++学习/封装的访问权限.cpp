#include<iostream>
using namespace std;
#include<string>

//class person {
//
//	//公共权限 public      成员 类内、类外均可访问
//	//保护权限 protected   成员 类内可以访问，类外不可以访问
//    //私有权限 private     成员 类内可以访问，类外不可以访问
//
//public:
//	//公共权限
//	string name;
//
//protected:
//	//保护权限
//	string car;
//
//private:
//	//私有权限
//	int password;
//
//public:
//	void func()
//	{
//		name = "张三";//若已经在func中有name，则优先打印func中的
//		car = "五菱宏光";
//		password = 123456;
//		cout << "姓名：" << name << "，汽车：" << car << "，密码：" << password<<"。" << endl;
//	}
//};
//int main()
//{
//	person p;
//	p.name = "李四";
//	//p.car = "宝马";    //保护权限内容，在类外不可访问
//	//p.password=234567;  //私有权先内容，在类外不可访问
//
//	p.func();
//
//	system("pause");
//	return 0;
//}