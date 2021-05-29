#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
	int number;
	int i;
	int j;
	
	printf("Please enter a number:");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		for(j=0;j<((number-i)*2+1)/2;j++){
			printf(" ");
		}
		for(j=0;j<i;j++){
		    printf("* ");
	    }
		printf("\n");
	}
	
}