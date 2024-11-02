//A C PROGRAM APPEND A SECOND SENTENCE WITHOUT OVERWRITING THE ORIGINAL CONTENT
#include<stdio.h>
#include<stdlib.h>

int main(){
	char sent[100];
	FILE *fptr;
	
	fptr = fopen("data.txt", "a");
	
	if("fptr == NULL"){
		printf("EMPTY");
		exit(1);
	}
	
	printf("Enter a sentence : ");
	scanf("%s", sent);
	fprintf(fptr, "\nThe sentence is %s", sent);
	
	fclose(fptr);
	printf("We did it");
	
	return 0;
}
