#include<stdio.h>
struct student
{
	int rno;
	char name[50];
};
int main()
{
	struct student s1={864,"bhavani"};
	printf("%d\n%s",s1.rno,s1.name);
	return 0;
}