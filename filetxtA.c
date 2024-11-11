//A C PROGRAM TO APPEND TO AN EXISTING FILE
#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fptr;
	char paragraph[1000];
	
	fptr=fopen("output.txt", "a");
	
	if(fptr == NULL){
		printf("ERROR OPENING THE FILE");
		exit(1);
	}
	
	printf("Enter the paragraph:");
    fgets(paragraph, sizeof(paragraph), stdin);
    
    fprintf(fptr, "paragraph:\n%s", paragraph);
    puts(paragraph);
    
	fclose(fptr);
	printf("SUCCESSFULLY DONE");
	
	return 0;
}
