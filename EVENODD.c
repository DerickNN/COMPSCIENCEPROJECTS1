//A C PROGRAM TO CHECK IF A NUMBER IS EVEN OR NOT
#include<stdio.h>

int even(int x){
	int y;
	y = x % 2;
	return y;
}

int main(){
	int t;
	int g;
	
	printf("Enter a number:");
	scanf("%d",&g);
	
	t = even(g);
	
	if(t == 0){
		printf("The number is even.");
	}else{
		printf("The number is odd.");
	}
	
	return 0;
}
