#include <stdio.h>

int main() {
	int n,num,i;
	int big;
	
	printf("enter the values of n:");
	scanf("%d",&n);
	
	printf("number %d",1);
	scanf("%d",&big);
	
	for(i=2;i<=n;i++){
		printf("number %d:",i);
		scanf("%d",&num);
		
		if(big<num)
		big=num;
	}
	
	printf("largest number is: %d",big);
     
	return 0;
}
