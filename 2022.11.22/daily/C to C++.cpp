#include<iostream>
using namespace std;

//int main()
//{
//	int i;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			cout << i << "������" << endl;
//		else
//			continue;
//	}
//	system("pause");
//	return 0;
//}
//���ú����ж�һ�����Ƿ�Ϊ����

//void IS_PRIME(int i)
//{
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			cout << i << "������" << endl;
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
//�ú����ж�һ�����Ƿ�Ϊ����

//int main()
//{
//	int year = 0;
//	cout << "���������(�� \"-1\" )�˳�" << endl;
//	cin >> year;
//	while (year != -1)
//	{
//         if ((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0)
//		     cout << year << "������" << endl;
//		 else
//			 cout << year << "��������" << endl;
//		 cout << "���������(�� \"-1\" )�˳�" << endl;
//		 cin >> year;
//	}
//	system("pause");
//	return 0;
//}
//���ú����ж�ĳһ����Ƿ�Ϊ����

//int is_leap_year(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || (i % 400) == 0)
//	    cout << i << "������" << endl;
//	else
//		cout << i << "��������" << endl;
//		cout << "���������(�� \"-1\" )�˳�" << endl;
//		cin >> i;
//		return i;
//}
//int main()
//{
//	int year;
//	cout << "���������(�� \"-1\" )�˳�" << endl;
//	cin >> year;
//	while (year != -1)
//		year=is_leap_year(year);
//	system("pause");
//	return 0;
//}
//�ú����ж�ĳһ���Ƿ�Ϊ����

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
//		printf("������\n");
//		scanf("%c", &a);
//		swith(a);
//		main();
//	}
//	return 0;
//}
//��C����ʵ�ִ�Сдת��

//int main()
//{
//	char a;
//	cout << "������" << endl;
//	cin >> a;
//	if (a >= 65 && a <= 90)
//		cout << char(a + 32)<< endl;//ǿ������ת��
//	else if (a >= 97 && a <= 122)
//		cout <<char(a - 32) << endl;
//	else
//		cout << char(a) << endl;
//}
//��C++ʵ�ִ�Сдת��