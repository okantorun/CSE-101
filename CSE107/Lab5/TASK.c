#include <stdio.h>



int main(){

	float weight,height;
	float BMI;

	printf("please enter your weight (in kg):");
	scanf("%f",&weight);
	printf("\nplease enter your height (in m):");
	scanf("%f",&height);

	BMI=weight/(height*height);

	printf("\nYour BMI=%f",BMI );
	if(BMI<18.5)
		printf("\nWeight Categories:Underweight");
	else if(BMI>=18.5 && BMI<25)
		printf("\nWeight Categories:Healthy Weight");
	else if(BMI>=25 && BMI<30)
		printf("\nWeight Categories:Owerweight");
	else if(BMI>=30 && BMI<35)
		printf("\nWeight Categories:Obese(class 1)");
	else if(BMI>=35 && BMI<40)
		printf("\nWeight Categories:Severely Obese(class 2)");
	else if(BMI>=40 && BMI<50)
		printf("\nWeight Categories:Morbidly Obese(class 3)");
	else if(BMI>=50)
		printf("\nWeight Categories:Super Obese(class 4) ");




}