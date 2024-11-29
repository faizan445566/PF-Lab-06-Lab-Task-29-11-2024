#include<stdio.h>
int main(){
	int menu;
	int amount;
	int tea=2;
	int coffee=3;
	int sandwich=5;
	int burger=7;
	printf("\t\tWelcome to The SHU Cafe\nITEMS\t\tPRICE\n1.Tea\t\t$2\n2.Coffee\t$3\n3.Sandwich\t$5\n4.Burger\t$7\n5.Exit\t\tFree");
	while(menu!=5){
	printf("\nEnter Your Choice: ");
	scanf("\n%d",&menu);
	
	switch(menu){
	
	case 1:
		printf("\nYou selected TEA $2 added");
		amount+=tea;
		break;
	case 2:
			printf("\nYou Selected Coffee $3 added");
			amount+=coffee;
			break;
	case 3:
		printf("\n You selected sandwich $5 added");
		amount+=sandwich;
		break;
	case 4:
		printf("\n You Selected burger $7 added");
		amount+=burger;
		break;
	case 5:
	printf("\nYour total is $%d",amount);
	    break;
	     default:
	printf ("enter correct choice please!");
				
}

}

	return 0;
}


