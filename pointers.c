#include<stdio.h>
#include<stdlib.h>

int main(){
	int number;
	FILE *fptr;
	
	fptr = fopen("C:\\Users\\dell\\Desktop\\TREESHADE 2024\\10. OCTOBER 2024\\file.txt", "w");
	if(fptr == NULL){
		printf("Error opening the file");
		exit(1);
		
	}
	printf("Enter a random number: ");
	scanf("%d", &number);
	
	fprintf(fptr, "The number entered is %d", number);
	fclose(fptr);
	printf("Number written successfully");
	
	return 0;
}
