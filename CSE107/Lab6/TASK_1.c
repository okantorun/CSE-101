#include <stdio.h>



int main(){
	int number;
	int iter=0;
	int temp1=0;
	int temp2=1;
	int sum;
	printf("Please enter how many terms you would like to print:");
	scanf("%d",&number);												
	printf("Top %d terms:",number);
	for(int i=0;i<number;i++){
		if (i < 2)
     		iter= i;
     	else{												//TASK 1
     		iter=temp1+temp2;	
     		temp1=temp2;									
     		temp2=iter;

     	}
     	printf("%d,",iter);
	}

}