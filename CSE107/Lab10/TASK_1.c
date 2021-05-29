#include <stdio.h>
#include <string.h>


 void reverse_string ( char str []);

int main () {

	char str_arr [100];

	printf (" Enter a string :");
	scanf ("%s", str_arr );

	reverse_string ( str_arr );
	printf (" Reversed string is: %s \n", str_arr );
	return 0;
}


void reverse_string ( char str []){
 	int length,temp;
 	char a;

 	length=strlen(str);
 	temp=length;
 	for(int i=0;i<length/2;i++){
 		a=str[i];
 		str[i]=str[temp-1];
 		str[temp-1]=a;
 		temp--;
 	}

 }