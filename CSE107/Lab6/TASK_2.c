#include <stdio.h>



int main(){
	int number;
	int sum;
	int count=0;


	printf("Please enter a number:");
	scanf("%d",&number);
	for(int i=2;i<number;i++){
		if(number%i==0)
			count++;
	}

	if(count!=0)
		printf("\n%d is not prime\n", number);
	else
		printf("\n%d is prime\n",number );
}