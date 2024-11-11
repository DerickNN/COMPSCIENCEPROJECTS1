//A C PROGRAM THAT READS CONTENT FROM A TEXT FILE
#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fptr;
	
	fptr = fopen("output.txt", "r");
	
	if(fptr == NULL){
		printf("NO FILE");
		exit(1);
	}
	
	char paragraph[1000];
	
	while(fgets(paragraph,100,fptr)){
		printf("%s", paragraph);
	}
	
	fclose(fptr);
	printf("SUCCESSFULLY DONE");
	return 0;
}
