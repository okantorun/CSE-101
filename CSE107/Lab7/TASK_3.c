#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
	int number;
	int sum;
	int count=0;
	int i;
	int j;
	int temp=1;

	printf("Please enter a number:");
	scanf("%d",&number);
	for(i=2;i<=number;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				temp=i/j;
			}
		}
		for(j=2;j<i;j++){
			if(temp%j==0){
				temp=1;
				count++;
			}
		}
		if(count!=0){
			printf("%d is composite.\n",i );
			count=0;
		}

	}

	


}