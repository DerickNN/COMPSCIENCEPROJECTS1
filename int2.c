//A C PROGRAM ADD THE INFORMATION TO AN EXISTING FILE
#include<stdio.h>
#include<stdlib.h>

int main(){
	char name[50];
	int marks, i;
	int number;
	FILE *fptr;
	
	printf("Enter the number of students:");
	scanf("%d", &number);
	
	fptr = fopen("student.txt", "a");
	if(fptr == NULL){
		printf("EMPTY");
		exit(1);
	}
	
	for(i = 0; i < number; ++i){
		printf("student %d name is: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	printf("ALL DONE");
	
	
	return 0;
}
