#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_mode(int n, int arr[ ]);
int find_number_of_x(int x, int n, int arr[ ]);
int find_max(int arr[ ]);

int main(){
	
	int arr[100];
	int arr2[10];	
	int i,j;


	srand(time(NULL));    
	for(i=0;i<100;i++){
		arr[i]=1 +rand() % 10;
	}
	for(i=0;i<10;i++){
		printf("%d --> %d",i+1,find_number_of_x(i+1,100,arr));
		printf("\n");
	}

	printf("\nMod is %d.",find_mode(100,arr));

	for(i=0;i<10;i++){
		arr2[i]=1 +rand() % 10;
	}
	printf("\n\nmaximum element of an array with 10 elements = %d\n",find_max(arr2));
	
}

int find_max(int arr[ ]){
	int i;
	int max;
	max=arr[0];
	for(i=0;i<10;i++)
		if(arr[i]>max)
			max=arr[i];
	return max;
}

int find_number_of_x(int x, int n, int arr[ ]){
	int i;
	int counter=0;
	for(i=0;i<n;i++){
		if(arr[i]==x)
			counter++;
	}
	return counter;
}

int find_mode(int n, int arr[ ]){
	int i,j;
	int mod=0;
	int temp=0;
	int counter=0;
	
	for(i=0;i<10;i++){
		for(j=0;j<n;j++){
			if(arr[j]==i+1)
				counter++;
			
		}
		if(counter>temp){
			temp=counter;
			mod=i+1;
		}
		counter=0;
	}
	return mod;
	

}

