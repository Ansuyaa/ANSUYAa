#include <stdio.h>

int main(void) {
	double n1,n2,n3;
	
	printf("enter the three numbers:");
	scanf("%lf %lf %lf",&n1,&n2,&n3);
	
	if(n1>n2 && n1>n3)
	{
		printf("%.2f is the highest number:",n1);
	}
	if(n2>n3 && n2>n1)
	{
		printf("%.2f is the hishest number:",n2);
	}
	if(n3>n2 && n3>n1)
	{
		printf("%.2f is the highest number:",n3);
	}
	return 0;
}
