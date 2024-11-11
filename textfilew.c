// A C PROGRAM TO PERFORM BASIC TEXT FILE OPERATIONS - WRITE TO A FILE

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	FILE *fptr;
	char paragraph[1000];
	
	fptr = fopen("C:\\Users\\dell\\Desktop\\DERICKZETECH\\output.txt", "w");
	
	if (fptr == NULL){
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
