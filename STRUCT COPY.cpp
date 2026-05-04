#include<stdio.h>
struct student
{
	int rno;
	char name[70];
};
int main()
{
	//struct student s1={1,"siva"};
	struct student s1={1,"siva"};
	printf("%d\n%s\n",s1.rno,s1.name);
	//s1.rno=1;
	//strcpy(s1.name,"siva");
	printf("enter student 1 details\n");
	scanf("%d%s",&s1.rno,s1.name);
	struct student s2={2,"parvathi"};
	printf("%d\n%s",s2.rno,s2.name);
	return 0;
}