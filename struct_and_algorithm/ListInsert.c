#include<stdio.h>

typedef struct node{
	int data;
	struct node *next;
}Node;
typedef struct node* LinkList;

int ListInsert(LinkList *L,int i,int e)
{
	LinkList p,s;
	int j = 1;
	
	p = *L;
	
	while(p&&j<i)
	{
		p = p->next;
		j++;
	}
	if(!p||j>i)
	{
		perror("元素不存在");
		return 0;
	}
	s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	
	s->next = p->next;
	p-next = s;
	
	return 1;
	
}





int main()
{
	return 0;
}