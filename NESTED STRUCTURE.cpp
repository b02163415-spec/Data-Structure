#include<stdio.h>
struct date{
	int day;
	int month;
	int year;
};
struct employee{
	int emp_id;
	char name[40];
	struct date dob;
};
int main()
{
	struct employee e1 = {1001 ,"ram",{15, 4, 2009}};
	printf("employee id : %d\n", e1.emp_id);
	printf("name : %s\n",e1.name);
	printf("dob:%d-%d-%d\n",e1.dob.day,e1.dob.month,e1.dob.year);
	return 0;
}