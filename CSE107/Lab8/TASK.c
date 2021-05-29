#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
	
	int arr[10][10];
	int sum_arr[10];
	int i,j;

	srand(time(NULL));    
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			arr[i][j]=20+rand() % 80;
			printf("%d ",arr[i][j]);
		}
		printf("\n");
		sum_arr[i]=0;
	}
	printf("\n");
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++)
			sum_arr[i]+=arr[j][i];
		printf("%d. sum of column %d.\n",i+1,sum_arr[i]);
	}


	
}