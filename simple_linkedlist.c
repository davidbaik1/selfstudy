#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct list
{
	int num;
	struct list *next; //자기 참조 구조체
};

void main()
{
	struct list a = { 10 }, b={ 20 }, c={ 30 };

#if 0
	struct list *tp = &a;
	struct list *head = &a;
	tp->next = &b;
	tp->next->next = &c;

	printf("\na:%d", tp->num);
	printf("\na:%d", tp->next->num);
	printf("\na:%d", tp->next->next->num);

	while (tp != NULL)
	{
		printf("\na:%d", tp->num);
		tp = tp->next;
	}
	
	tp = head;
	printf("\na:%d", tp->num);
#else
	a.next = &b;
	b.next = &c;
	printf("\na:%d", a.num);
	printf("\na:%d", a.next->num);
	printf("\na:%d", a.next->next->num);

#endif

}
