#include<stdio.h>
enum day{
	MON, TUE, WED, THU, FRI, SAT, SUN
};
int main()
{
	enum day today;
	today=MON;
	printf("today is day numbrer:%d\n",today);
	return 0;
}