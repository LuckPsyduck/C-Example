#include<stdio.h>
#include<malloc.h>
struct student
{
	long num;
	int score;
	struct student * next;
};

struct student lista, listb;
int n, sum = 0;
void main()
{
	struct student * creat();
	struct student * insert(struct student *, struct student *);
	void print(struct student *);
	struct student *ahead, *bhead, *abh;
	printf("input list a:\n");
	ahead = creat();
	sum += n;
	printf("input list b:\n");
	bhead = creat();
	sum += n;
	abh = insert(ahead, bhead);
	print(abh);
}
struct student *creat()
{
	struct student *p1, *p2, *head;
	n = 0;
	p1 = p2 = (struct student *)malloc(sizeof(p1));
	printf("input number & scores of student:\n");
	printf("if number is 0,stop inputing.\n");
	scanf("%ld,%d", &p1->num, &p1->score);
	head = nullptr;
	while (p1->num != 0)
	{
		n += 1;
		if (n == 1)
			head = p1;
		else
			p2->next = p1;//p2表当前
		p2 = p1;
		p1 = (struct student *)malloc(sizeof(p1));
		scanf("%ld,%d", &p1->num, &p1->score);
	}
	p2->next = nullptr;
	return head;
}
struct student *insert(struct student *ah, struct student *bh)
{
	struct student *pa1, *pa2, *pb1, *pb2;
	pa1 = pa2 = ah;
	pb1 = pb2 = bh;
	do
	{
		while ((pb1->num > pa1->num) && (pa1->next != nullptr))
		{
			pa2 = pa1;
			pa1 = pa1->next;
		}
		if (pb1->num <= pa1->num)
		{
			if (ah == pa1)
				ah = pa1;
			else
				pa2->next = pb1;//连接到a上
			pb1 = pb1->next;
			pb2->next = pa1;
			pa2 = pb2;
			pb2 = pb1;
		}
	} while ((pa1->next != nullptr) || (pa1 == nullptr&&pb1 != nullptr));
	if ((pb1 != nullptr) && (pb1->num > pa1->num) && (pa1->next == nullptr))
		pa1->next = pb1;
	return ah;
}
void print(struct student *head)
{
	struct student *p; /*reinterpret_cast<struct student *>*/
	printf("there are %d records:\n", sum);
	p =head;
	if (p != nullptr)
		do
		{
			printf("%ld %ld\n", p->num, p->score);
			p = p->next;
		} while (p != nullptr);
}


