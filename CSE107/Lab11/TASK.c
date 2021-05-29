#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct Task
{
	char Name[25];
	char Surname[25];
	char Id[25];
	float gpa;		

};
void info(char *file_path){
	struct Task task_obj[15];
	char gpa[10];
	int count=0;
	int max_gpa;
	int min_gpa;
	int max_gpa_index;
	int min_gpa_index;
	FILE *fp=fopen(file_path,"r");

	
	
	while(!feof(fp)){
		fscanf(fp, "%s", task_obj[count].Name);
		fscanf(fp, "%s", task_obj[count].Surname);
		fscanf(fp, "%s", task_obj[count].Id);
		fscanf(fp, "%s", gpa);
		task_obj[count].gpa=atof(gpa);
		count++;
	}
	max_gpa=task_obj[0].gpa;
	min_gpa=task_obj[0].gpa;

	for(int i=0;i<15;i++){
		if(task_obj[i].gpa>max_gpa)
			max_gpa_index=i;
			max_gpa=task_obj[i].gpa;
		if(task_obj[i].gpa<min_gpa){
			min_gpa_index=i;
			min_gpa=task_obj[i].gpa;
		}
	}
	printf("The student wit the highest Gpa:\n");
	printf("NAME: %s     Surname:  %s     Id:  %s     Gpa: %.1f \n",task_obj[max_gpa_index].Name,task_obj[max_gpa_index].Surname,
																task_obj[max_gpa_index].Id,task_obj[max_gpa_index].gpa);
	printf("\n\nThe student wit the lowest Gpa:\n");
	printf("NAME: %s     Surname : %s      Id:  %s     Gpa: %.1f \n",task_obj[min_gpa_index].Name,task_obj[min_gpa_index].Surname,
																task_obj[min_gpa_index].Id,task_obj[min_gpa_index].gpa);
}	


int main(){

	  info("TASK.txt");

}

