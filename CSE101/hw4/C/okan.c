#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "arduino-serial-lib.c"
#include "arduino-serial-lib.h"

 
int main(){

	int pc = serialport_init("/dev/ttyUSB0", 9600);
	int sq;
    	int sayi;   	
	char array[256];
	
	
	
    while(sayi != 500)
    { 
printf("## WELCOME TO GTU ARDUINO LAB \n## STUDENT NAME: OKAN TORUN \n## PLEASE SELECT FROM THE FOLLOWING\n## MENU :\n(1) TURN ON LED ON ARDUINO\n(2) TURN OFF LED ON ARDUINO\n(3) FLASH ARDUINO LED 3 TIMES\n(4)SEND A NUMBER TO ARDUINO TO COMPUTE SQUARE BY ARDUINO\n(5) Button press counter\n(0) EXIT\nPLEASE SELECT:");
	
        
    	scanf("%d",&sayi); 
    
	if(sayi == 1){
	const char* okan1 = "1";
    	serialport_write(pc,okan1);//değerimizi arduino'ya yollar
    	
    }
    else if(sayi ==2){
    	const char* okan2 = "2";
    	serialport_write(pc,okan2);
    	
    }
    else if(sayi ==3){
    	const char* okan3 = "3";
    	serialport_write(pc,okan3);
    }
    	
    else if (sayi== 4){
	 const char* okan4 = "4";
    	 serialport_write(pc,okan4);
    	 printf("Enter a value:");
         scanf("%hhd",&sq);
	 serialport_flush(pc);//belirtilen seri portun giriş tamponuna gelen tüm verileri temizler(bizim girdiğimiz değer dışında)
	 serialport_writebyte(pc,sq);
	 serialport_read_until(pc,array,'*',256,6000);
	 printf("Square of %hhd: %s\n",sq,array);
	 serialport_flush(pc); 
                 
    }
    else if(sayi ==0){
	printf("Please wait program closing");
	const char* okan0 = "0";
    	serialport_write(pc,okan0);
    	break;
    }
    	

    }



    
    return 0;
}
