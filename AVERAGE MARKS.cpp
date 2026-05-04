#include<stdio.h>
struct student
{
	int rno;
	int m1, m2, m3;
	int total, average;
};
int main()
{
	int n;
	int i;
	struct student s[60];
	printf("enter number of students\n");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("student %d details",i+1);
		scanf("%d %d %d %d",&s[i].rno, &s[i].m1, &s[i].m2, &s[i].m3);
	}
	printf("students total and average\n");
	for(i=0;i<n;i++)
	{
		printf("%d %d %d %d\n", s[i].rno, s[i].total, s[i].average);
	}
	return 0;
}