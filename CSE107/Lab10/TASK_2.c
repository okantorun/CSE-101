#include<stdio.h>
#include <string.h>



void print_line(char c,int num_of_chars);
void print_histogram(char c,int vals []);
int len(int arr []);




int main () {
	int values [100] , val =1 , count =0;

	printf ("Enter positive integer ( s ),to print anhistogram .\nEnter a non - positive integer to stop .\n \n ") ;

	do {
		printf ("Enter a value : ") ;
		scanf ("%d",&val) ;
		values[count]=val;
		count ++;
	} while (val>0) ;

	print_histogram('*',values);
	return 0;
}


int len(int arr []){
	int length,count=0;

	while(arr[count]!=-1){
		count++;
	}

		
	return count;
}

void print_histogram(char c,int vals []){
	int length;

	length=len(vals);

	for(int i=0;i<length;i++)
		print_line(c,vals[i]);
	
}

void print_line(char c,int num_of_chars){
	printf("\n");
	for(int i=0;i<num_of_chars;i++)
		printf("%c",c);

}