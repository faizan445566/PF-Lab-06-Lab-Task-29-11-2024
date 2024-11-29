#include<stdio.h>
int main(){
	int i,j;
	int inputnum;
    printf("Enter any positive number: ");
	scanf("%d",&inputnum);
	if (inputnum<=0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; 
    }
	for(i=inputnum;i>=1;i--){
	for(j=i;j>=1;j--){
	printf("%d ",j);}
		
	
	printf("\n ");}
	return 0;
}
