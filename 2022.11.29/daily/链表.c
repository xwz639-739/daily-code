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
//	//声明
//
//	a.data = 1;
//	b.data = 2;
//	c.data = 3;
//	//赋值
//
//	a.point = &b;
//	b.point = &c;
//	c.point = NULL;
//	//创建链接节点
//
//	struct node *head = &a;
//	//创建表头
//
//	while (head != NULL)
//	{
//		int currentdata = head->data;
//		printf("currendata=%d\n", currentdata);
//		head=head->point;
//	}
//	//使用链表
//
//	return 0;
//}