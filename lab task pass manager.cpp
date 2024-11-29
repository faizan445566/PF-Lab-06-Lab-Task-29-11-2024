#include<stdio.h>
int main(){
	int pass=2450;
	int inputpass;
	int attempt=3;
	printf("Please enter your password. You have only three attempts ");
for(int i=1;i<=attempt;i++){
	printf("\nEnter Here: ");
	scanf("%d",&inputpass);
	
	if(inputpass==pass){
		printf("\nAccess Granted");
		printf("\n\t\t\t\tWelcome to DUCK Pc!");
		return 0;
	}
	else{
		printf("\nAccess Denied\n");
	}
	
}
return 0;
}
