#include <stdio.h>

int countDigits(num);
int main(){
	int num,count;
	
	printf("enter a number:");
	scanf("%d",&num);
	
   count=countDigits(num);
   
   printf("total digits is: %d",count);
   return 0;
}
int countDigits(int num){
	static int count=0;
	
	if(num!=0){
		count++;
	  countDigits(num/10);
	}
	return count;
}

