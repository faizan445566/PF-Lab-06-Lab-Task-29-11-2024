#include<stdio.h>
int main(){
	int inputmarks;
	printf("Give numbers \nPress 0 to exit");
	do{
		printf("\nEnter your marks here: ");
		scanf("%d",&inputmarks);
		if(inputmarks>=90&&inputmarks<=100){
		printf("\nYour Grade is A");
		}
		else if(inputmarks>=80&&inputmarks<=89){
			printf("\nYour Grade is B");
 		}
 		else if(inputmarks>=70&&inputmarks<=79){
			printf("\nYour Grade is C");
 		}
 		else if(inputmarks>=60&&inputmarks<=69){
			printf("\nYour Grade is D");
 		}
		 else if(inputmarks<60){
			printf("\nYour Grade is F");
 		}
 		else{
 			printf("\nPlease enter numbers between 0-100");
		 }
	}while(inputmarks!=0);
	printf("\nThanks for using Faizan grade program :)");
	return 0;
}
