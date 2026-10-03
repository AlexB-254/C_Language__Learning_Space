#include <stdio.h>

int main (void) 
{
    int num = 100;          // integer type size is 4 bytes     |    %d for printing integer values

    double num1 = 55.509;   // double type size is 8 bytes      |    %lf for printing double values

    float num2 = 49.9f;     // float type size is 4 bytes       |    %f for printing float values

    char character = 'x';   // char type size is 1 byte         |    %c for printing char values

    //datatype size is printed by using [printf("%zu", sizeof(datatype name))]



    printf("\nNumber is %d, int size = %zu\n", num, sizeof(num));

    printf("Number is %.2lf\n", num1); // %.2lf is used to print double values with 2 decimal places

    printf("Number is %f\n", num2); 

    printf("Character is %c\n", character);

    printf("value store in a character 'x' is %d\n", character); // ASCII integer value stored in character value

    return 0;

}