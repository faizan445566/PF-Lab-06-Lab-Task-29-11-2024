#include<stdio.h>

int main() {
    int inputnumber;

   
    printf("Enter a positive integer: ");
    scanf("%d", &inputnumber);

    
    if (inputnumber <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; 
    }

    printf("The divisors are: ");

    
    for (int i=1;i<=inputnumber;i++) {
    	
        if (inputnumber%i==0) { 
            printf("%d ",i); 
        }
    }

    printf("\n"); 
    return 0;
}

