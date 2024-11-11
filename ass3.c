//A C PROGRAM TO READ CONTENT AND DISPLAY IT ON THE SCREEN
#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fptr;
	
	fptr = fopen("data.txt", "r");
	
	if(fptr == NULL){
		printf("EMPTY");
		exit(1);
	}
	
	char sent[100];
	
	while(fgets(sent,100,fptr)){
		printf("%s", sent);
	}
	
	fclose(fptr);
	
	return 0;
}
