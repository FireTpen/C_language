#include<stdio.h>

void CreateListTail(LinkList *L,int n,int m)
{
	LinkList p,r;
	int i;
	
	*L = (LinkList)malloc(sizeof(Node));
	r = *L;
	
	for(i = 0;i < n;i++)
	{
		p =(Node)malloc(sizeof(Node));
		p->data = m;
		r->next = p;
		r = p;
	}
	
}