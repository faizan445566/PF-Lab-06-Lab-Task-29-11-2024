#include<stdio.h>
int main(){
	int num,inputnum;
	int evennum,oddnum=0;	

	do{
		
	printf("\nPress 1 to Know Which one is Odd or Even\nPress 0 to get Total Count of Odd and Even Numbers\nEnter Number: ");
	scanf("%d", &num);
	
		switch(num){
			case 1:
				
				printf("\nWhich number you want to know: ");
				scanf("%d", &inputnum);
				if(inputnum%2==0){
					printf("\nThis is an even number");
					evennum++;
				}
				else{
					printf("\nThis is an odd number");
					oddnum++;
					
				}
				break;
				case 0:
					printf("\nThe Count of Even Number is: %d ", evennum);
					printf("\nThe Count of Odd Number is: %d ", oddnum);
					break;
		}
		
		
}while(num!=0);
	return 0;
}
