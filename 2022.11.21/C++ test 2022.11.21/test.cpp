#include<iostream>
using namespace std;

//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			cout << i << endl;
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//一到一百的奇数

//int main()
//{
//	int ch = 0;
//	cout << "press \"Ctrl+z\" to quit" << endl;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	system("pause");
//	return 0;
//}
//字符输入与输出

//int main()
//{
//	int arr[10],i,k;
//	int left = 0;
//	int right = 9;
//	cout << "请输入十个数(从小到大)" << endl;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//	}
//	cout << "请输入要找的数字" << endl;
//	cin >> k;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] == k)
//		{
//			cout << "找到了，下标是：" << mid +1<< endl;
//			break;
//		}
//	}
//	if (left > right)
//		cout << "找不到" << endl;
//	system("pause");
//	return 0;
//}
//二分查找