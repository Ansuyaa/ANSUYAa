#include <stdio.h>

int main(void) {
	int x,y;
	printf("enter the two numbers");
	scanf("%d %d",&x,&y);
	if(x>y)
	{
		printf("x is the highest value:%d",x);
	}
	else
	{
		printf("y is the highest value:%d",y);
	}
		return 0;
}
