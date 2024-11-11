#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char paragraph1[200];
	char paragraph2[200];
	FILE*fptr;
	
	fptr = fopen("C:\\Users\\hp\\OneDrive\\Desktop\\CLASSQUIZ_24\\output.txt", "w");
	
	if(fptr == NULL){
		printf("EMPTY");
		exit(1);
		
	}
	strcpy(paragraph1,paragraph2);
	printf("WRITE A PARAGRAPH:\n");
	scanf("%s",paragraph1);
	
	fprintf(fptr,"THIS IS THE PARAGRAPH:\n%s", paragraph1);
	fclose(fptr);
	printf("SUCESSFULLY DONE");
	
	
	return 0;
}
