#include <stdio.h>



int main(){
	int number;
	int sum;
	int count=0;


	printf("Please enter a number:");
	scanf("%d",&number);
	for(int i=1;i<number;i++){
		if(number%i==0)
			count=count+i;
	}

	if(count==number)
		printf("\n%d is perfect number\n", number);
	else
		printf("\n%d is not perfect number\n",number );
}