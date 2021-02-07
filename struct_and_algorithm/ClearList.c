#include<stdio.h>

int ClearList(LinkList *L)
{
	LinkList p,r;
	int i;
	
	p = (*L)->next;
	
	while(p)
	{
		q = p->next;
		free(p);
		p = q;
	}
	
	(*L)->next = NULL;
	
	return 1;
}