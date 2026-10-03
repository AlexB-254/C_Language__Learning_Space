#include <stdio.h>

int main (void) 
{
    int salary;

    printf("\nWhat was your previous job salary?\n");

    scanf("%d\n", &salary);

    salary = salary * 5;

    printf("Your new salary is %d\n", salary);
    
    return 0;
}