#include<stdio.h>
struct date
{
	int d:5;
	int m:4;
	int y;
};
int main()
{
	printf("size of date is %lu bytes\n",sizeof(struct date));
	struct date dt={31, 12, 2014};
	printf("date is %d %d %d",dt.d, dt.m, dt.y);
	return 0;
}