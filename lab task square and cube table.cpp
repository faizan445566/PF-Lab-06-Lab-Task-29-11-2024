#include <stdio.h>

int main() {
    int num;
    int i;

    printf("Enter a positive integer: ");
    scanf("%d",&num);
    if (num<=0) {
        printf("\nPlease enter a valid positive integer");
        return 1;
    }

    
    printf("\nNumber\t\tSquare\t\tCube\n");

    
    for (i=1;i<=num;i++) {
        printf("%d\t\t%d\t\t%d\n", i,i*i,i*i*i);
    }

    return 0;
}
