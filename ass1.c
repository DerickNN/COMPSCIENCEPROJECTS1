//A C PROGRAM TO PROMPT A USER TO ENTER A SENTENCE AND WRITES IT TO A FILE
#include<stdio.h>
#include<stdlib.h>

int main(){
	char sent[100];
	FILE *fptr;
	
	fptr = fopen("C:\\Users\\dell\\Desktop\\DERICKZETECH\\data.txt", "w");
	
	if(fptr == NULL){
		printf("Empty");
		exit(1);
	}
	printf("Enter a sentence: ");
	scanf("%s", sent);
	
	fprintf(fptr, "The sentence is %s",sent);
	
	fclose(fptr);
	printf("Sucessfully done");
	
	return 0;
}
