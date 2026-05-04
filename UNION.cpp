#include<stdio.h>
union data
{
	int i;
	float s;
};
int main()
{
	union data d;
	d.i=60;
	printf("%d\n",d.i);
	d.s=80;
	printf("%f",d.s);
	return 0;
}
