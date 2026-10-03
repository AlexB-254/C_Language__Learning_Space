#include <stdio.h>


int main()
{
    char str[50];

    printf("What is your name? ");
    //string answer = get_string("what is your name? ");
    fgets(str, sizeof(str), stdin);

    printf("Hello, %s", str);

}