//#include<stdio.h>
//
//struct node 
//{
//	int data;
//	struct node* point;
//};
//int main()
//{
//	struct node a, b, c;
//	//����
//
//	a.data = 1;
//	b.data = 2;
//	c.data = 3;
//	//��ֵ
//
//	a.point = &b;
//	b.point = &c;
//	c.point = NULL;
//	//�������ӽڵ�
//
//	struct node *head = &a;
//	//������ͷ
//
//	while (head != NULL)
//	{
//		int currentdata = head->data;
//		printf("currendata=%d\n", currentdata);
//		head=head->point;
//	}
//	//ʹ������
//
//	return 0;
//}