#include<stdio.h>

void CreateListHead(LinkList *L,int n,int m)
{
	LinkList P;
	int i;
	*L = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;
	
	for(i = 0;i < n;i++)
	{
		p =(LinkList)malloc(sizeof(Node));
		p->data = m;
		p->next = (*L)->next;
		(*L)-next = p;
	}
	
}