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
//һ��һ�ٵ�����

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
//�ַ����������

//int main()
//{
//	int arr[10],i,k;
//	int left = 0;
//	int right = 9;
//	cout << "������ʮ����(��С����)" << endl;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//	}
//	cout << "������Ҫ�ҵ�����" << endl;
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
//			cout << "�ҵ��ˣ��±��ǣ�" << mid +1<< endl;
//			break;
//		}
//	}
//	if (left > right)
//		cout << "�Ҳ���" << endl;
//	system("pause");
//	return 0;
//}
//���ֲ���