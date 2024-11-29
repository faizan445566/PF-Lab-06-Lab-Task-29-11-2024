#include <stdio.h>
int main()
{
	int balance=1000;
	int withdraw;
	int deposit;
	int total;
	int finalbalance;
	int choice;
	int withdrawamount;
	int finalwithdraw;
	printf("\t\tWelcome to GEN-Z TRADERS Bank\n1. Check Balance\n2.Withdraw Money\n3.Deposit Money\n4.Exit");
	do{
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice){
		
		case 1:
		printf("Your Balance is $%d", balance);
		break;
		case 2:
			
			printf("how much you want to withdraw: ");
			scanf("%d", &withdraw);
			if (withdraw>balance){
				printf("your balance is insuffiicent");
			return 1;
		
			}
			else{
			
		
			}
			
		break;
		case 3:
			printf("How much you want to deposit");
			scanf("%d",&deposit);
			
			break;
			case 4:
				total=balance-withdraw+deposit;
				printf("\nYour total balance is %d", total);
	}
					
	}while(choice!=4);
return 0;
}
