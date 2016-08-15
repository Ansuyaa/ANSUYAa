#include <stdio.h>

int main() {
	int num,x;
	printf("enter any number:");
	scanf("%d",&num);
	printf("generic root: %d",(x=num%9)?x:9);
	return 0;
}
