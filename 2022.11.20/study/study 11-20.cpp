#include"swap.h"
int main()
{
	int a = 10, b = 20;
	cout << "before: a= " << a << ",b= " << b << endl;
	swap(a, b);
	cout<< "after: a= " << a << ",b= " << b << endl;
	system("pause");
	return 0;
}