#include<stdio.h>
void day(struct content date);
struct content
{
	int year;
	int month;
	int day;
};
void main()
{
	struct content date;
	puts("enter year month day");
	scanf_s("%d,%d,%d", &date.year, &date.month, &date.day);
	day(date);
}
void day(struct content date)
{
	int sum = 0;
	int num1[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int num2[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 0; i < date.month - 1; i++)
		if ((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0))
			sum += num1[i];
		else
			sum += num2[i];
	printf("%d\n", sum + date.day);
}