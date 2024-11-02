//A C PROGRAM TO READ NAME AND MARKS OF 5 STUDENTS AND STORE THEM IN A FILE
#include<stdio.h>
#include<stdlib.h>

int main(){
	char name[50];
	int marks, i;
	int number = 5;
	
	FILE *fptr;
	
	fptr = fopen("C:\\Users\\dell\\Desktop\\DERICKZETECH\\student.txt","w");
	
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
