#include<stdio.h>
#include<malloc.h>
#define LEN sizeof(struct student)
struct student
{
	long num;
	float score;
	struct student *next;
};
int n;
void main()
{
	struct student * creat();
	struct student * del(student *, long);
	struct student * insert(student *, student *);
	void print(struct student *);
	struct student * head;
	struct student * stu;
	long del_num;
	printf("input record :\n");
	head = creat();
	print(head);
	printf("input the deleted number:");
	scanf("%ld", &del_num);
	while (del_num != 0)
	{
		head = del(head,del_num);
		print(head);
		printf("input the deleted number: ");
		scanf("%ld", &del_num);
	}
	printf("input the inserted record:");
	stu = (struct student *)malloc(LEN);
	scanf("%ld,%f", &stu->num, &stu->score);
	while (stu->num != 0)
	{
		head = insert(head,stu);
		print(head);
		printf("input the inserted record :");
		stu = (struct student *)malloc(LEN);
		scanf("%ld,%f", &stu->num, &stu->score);
	}
}
//创建链表
struct student * creat()
{
	struct student *head;
	struct student *p1,*p2; 
	n = 0;
	p1 = p2 = (struct student *)malloc(LEN);
	scanf("%ld,%f", &p1->num, &p1->score);
	head = NULL;
	while (p1->num != 0)
	{
		n += 1;
		if (n == 1)
			head = p1;//p1遍历
		else
			p2->next = p1;//p2为前一个
		p2 = p1;//前驱
		p1= (struct student *)malloc(LEN);
		scanf("%ld,%f", &p1->num, &p1->score);
	}
	p2->next = NULL;
	return head;
}
//删除元素
struct student *del(struct student *head, long num)
{
	struct student *p1, *p2;
	if (head == NULL)
	{
		printf("\nlist null!\n");
		return head;
	}
	p1=p2 = head;
	while (num != p1->num&&p1->next != NULL)//寻找
	{
		p2 = p1;//前驱
		p1 = p1->next;
	}
	if (num == p1->num)
	{
		if (p1 == head)//删除头元素
			head = p1->next;
		else
			p2->next = p1->next;//删除 覆盖
		printf("delete :%ld\n", num);
		n = n - 1;//修改链表长度
	}
	else
		printf("%ld not been found!\n", num);
	return head;
}

//插入
struct student *insert(struct student *head, struct student *stud)
{
	struct student *p0, *p1, *p2;
	p1 =p2= head;
	p0 = stud;//插入
	if (head == NULL)//链表为空
	{
		head = p0;
		p0->next = NULL;
	}
	else
	{
		while ((p0->num > p1->num) && (p1->next != NULL))
		{
			p2 = p1;//p2指向当前
			p1 = p1->next;
		}
		if (p0->num <= p1->num)//分成两种情况判断
		{
			if (head == p1)
				head = p0;
			else
				p2->next = p0;
			p0->next = p1;
		}
		else//末尾
		{
			p1->next = p0;
			p0->next = NULL;
		}
	}
	n = n + 1;
	return head;
}
void print(struct student *head)
{
	struct student *p;
	printf("\n now.these %d records are :\n", n);
	p = head;
	if(head!=NULL)
		do
		{
			printf("%ld,%5.1f\n", p->num, p->score);
			p = p->next;
		} while (p != NULL);
}


