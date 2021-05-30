#include <stdio.h>
#include <stdlib.h>
void Menu()
	{   
	printf("\n(1) ADD TWO NUMBERS\n(2) SUBTRACT TWO NUMBERS\n(3) MULTIPLY TWO NUMBERS\n(4) DIVIDE TWO NUMBERS\n(5) TAKE THE NTH POWER OF A NUMBER\n(6) FIND AVERAGE OF NUMBERS INPUTTED\n(7) FIND THE MAXIMUM OF NUMBERS INPUTTED\n(0) EXIT\n");
}
	
float sayi1,sayi2;
float addition(float sayi1,float sayi2)
{
	return sayi1+sayi2;
}
float subtraction(float sayi1,float sayi2)
{
	return sayi1-sayi2;
}
float product(float sayi1,float sayi2)
{
	return sayi1*sayi2;
}
float division(float sayi1,float sayi2)
{
	return sayi1/sayi2;
}
float power(float sayi1,float sayi2){
	float sonuc=1,temp=0,rasyonelsonuc;
	
	if (sayi2 < 0) {
        	sayi2= -1 * sayi2;
        	temp = 1;
        }
        for (int i = 0; i < sayi2; i++)
        {
        sonuc *= sayi1;
        
	    }
	    if (temp == 1) {
        rasyonelsonuc = 1.0 / sonuc;
        return rasyonelsonuc;
}
return sonuc;
 
}
float ortalama(){
	float sonuc,sayi,toplam,a;
	printf("Press the '-1963' key to stop the program\n");  
        	
        	while(1){
	 	printf("\n please enter a number:");
   		 scanf("%f",&sayi);
   		 if(sayi==-1963){
   		 	sonuc=toplam/a;
   		 	printf("Average of numbers=%f",sonuc);
   		 	return 0;
			}
   		 toplam=toplam+sayi;
   		 a=a+1.0;
   		
	
	}
}
float maximum(){
	float sayi,max;
	char c;
	printf("Press the 'y' key to stop the program:\n");
	do{
		printf("\n please enter a number:");
		scanf("%f",&sayi);
		if(sayi>max){
			max=sayi;
		}
		 c = getchar();    /* klavyeden bir tus okuyalim         */
     putchar(c);       /* ekranda gosterelim.                */
   } while (c != 'y');  /* ta ki okunan bir y oluncaya dek... */
   printf("\nEnd of program.\nMax=%f",max);
	
	
	
}


int main(void) {

	char c;
	int selection,i,adet,average;
	float sayi1,sayi2,temp=0,sonuc,rasyonelsonuc,sayi,toplam=0,a,max;

	printf("WELCOME TO GTU CALCULATOR MACHINE \nSTUDENT NAME : Okan Torun\nPLEASE SELECT FROM THE FOLLOWING\nMENU:");

	
	while(1){
		Menu();
		printf("\nPlease Select:");
	
	    scanf("%d",&selection);
	
		 if(selection==1){
		
			printf("Enter the first number.\n");
			scanf("%f\n",&sayi1);
			printf("Enter the second number.\n");
			scanf("%f",&sayi2);
			printf("%f\n",addition(sayi1,sayi2));
			
	}
		else if(selection==2){
		
			printf("Enter the first number.\n");
			scanf("%f",&sayi1);
			printf("Enter the second number.\n");
			scanf("\n%f",&sayi2);
			printf("%f\n",subtraction(sayi1,sayi2));
				
	}
		else if(selection==3){
		
			printf("Enter the first number.\n");
			scanf("%f",&sayi1);
			printf("Enter the second number.\n");
			scanf("\n%f",&sayi2);
			printf("%.2f",product(sayi1,sayi2));
			
	}
		else if(selection==4){
		
			printf("Enter the first number\n");
			scanf("%f",&sayi1);
			printf("Enter the second number\n");
			scanf("%f",&sayi2);
			if(sayi2==0){
				printf("syntax error");
			}
			printf("%f",division(sayi1,sayi2));
	
	}
	
			
		
	
		else if(selection==5){
		
		printf("Enter the first number\n");
			scanf("%f",&sayi1);
			printf("Enter the second number\n");
			scanf("%f",&sayi2);
			printf("%f",power(sayi1,sayi2));
       }
      
        
	

		else if(selection==6){
        	ortalama();
   	}
   	
   	   
            			
		else if(selection==7){
			maximum();
   
}
		else if(selection==0){
			return 0;
		}
	
   
}
		
		


		
	
			
		
			
			
			
			
		
			

		



		
    

	return 0;
}
