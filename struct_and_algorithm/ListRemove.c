#include<stdio.h>

typedef struct node{
	int data;
	struct node *next;
}Node;
typedef struct node* LinkList;

int ListInsert(LinkList *L,int i,int *e)
{
	LinkList p,q;
	int j = 1;
	
	p = *L;
	
	while(p->next&&j<i)
	{
		p = p->next;
		j++;
	}
	if(!(p->next)||j>i)
	{
		perror("元素不存在");
		return 0;
	}
	q = p->next;
	p->next = q->next;
	
	*e = q->data;
	
	free(q);
	q = NULL;
	
	return 1;
	
}





int main()
{
	return 0;
}