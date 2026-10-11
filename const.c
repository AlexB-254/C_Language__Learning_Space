// we learn how to use #define

#include <stdio.h>



#define GREATER(i, n) if (i > n) \
                            printf("%d is greater than %d", i ,n); \
                        else \
                            printf("%d is lesser than %d", i, n);

int main (void)
{
    int i, n;

    printf("Enter ur 1st number\n");

    scanf("%d", &i);

    printf("\nEnter the 2nd number\n");

    scanf("%d", &n);

    printf("\n");

    GREATER(i, n);

    printf("\n-----------------------------------------------------------------------\n");

    // below are some macros

    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);  // Take note double under score are used



        return 0;

}