#include<stdio.h>
void update(struct student*);
struct student
{
	int rno;
	int marks;
};
int main()
{
	struct student s1;
	s1.rno=1;
	s1.marks=450;
	update(&s1);
	printf("%d",s1.marks);
	return 0;
}
void update(struct student *s1)
{
	s1->marks=s1->marks+5;
}