#include <stdio.h>
/*
    // Q6. Even or odd
    //Read an integer and print The number is even or The number is odd.
    //Hint: an even number has remainder 0 when divided by 2. Also, think about what -3 % 2 gives, then test it

int main (){

    int num;
    
    printf("Enter the integer to check if is even, or odd: ");
    scanf("%d", &num);

    //const int isEVEN = (num%2==0);   // is it possible to use such a declaration

    if(num%2 != 0)
    //if(num%2 == 0)
    //if (isEVEN)
    {
        printf("The number is odd\n");
        //printf("The number is even\n");
    }
    else {
        
        printf("The number is even\n");
        //printf("The number is odd\n");
    }

    return 0;
}
*/


/*
    // Q7. Voting age
    // Read an age. If it is 18 or above, print You can vote, otherwise print You cannot vote yet.
    // Test: 17, 18, 19.

    int main(void){
        //declare a variable
        int age;

        // ask user age
        printf("Enter your age: ");
        scanf("%d", &age);

        // check if the age is 18 or above and print feedback
        if (age >= 18){
            printf("You can vote\n");
        }
        else{
            printf("You cannot vote yet\n");
        }


        return 0;
    }
*/

/*
    //  Q8. Larger of two
    //  Read two numbers (use double) and print which one is larger, or say they are equal.
    //  Note: this has three outcomes, so one if / else is not enough. You’ll need else if in the middle.

    int main(void){
        // declare a variable to hold the two numbers in double form
        double num1, num2;

        // ask user for two numbers
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        //check which is larger and print it out, even if they are equal
        if(num1 > num2){
            printf("%.3lf is larger\n", num1);
        }
        else if (num2 > num1){
            printf("%.3lf is larger\n", num2);
        }
        else {
            printf("%.3lf is equal to %.3lf\n", num1, num2);
        }
        return 0;
    }

*/


/*
    //  Q9. Divisible by 5
    //  Read an integer and print whether it is divisible by 5.
    //  Test: 10, 7, 0, -15. Is 0 divisible by 5? Decide, then check what your program says.
    int main(void){
        // declare a variable to store the integer
        int num;

        // ask user to enter an integer
        printf("Enter an integer number and check if it is divisble by 5: ");
        scanf("%d", &num);

        // verify the integer if it is divisible by 5
        if (num%5 == 0){
            printf("the number is divisible by 5\n");
        }
        else {
            printf("the number is not divisible by 5\n");
        }

        return 0;
    }
*/

/*
    //  Q10. Pass or fail
    //  Read a mark out of 100. Print Pass if it is 50 or more, otherwise Fail.
    //  Test: 49, 50, 51.
    int main(void){
        // declare a variable 
        int a;
        // ask user to enter 
        printf("Enter a marks: ");
        scanf("%d", &a);

        if (a >= 50){
            printf("Pass\n");
        }
        else {
            printf("Fail\n");
        }
        return 0;
    }
*/       

//  Level 3
/*
    //  Q11. Grade calculator
    //  Read a mark (0 to 100). Print A (80+), B (70 to 79), C (60 to 69), D (50 to 59), F (below 50).
    //  Think first: if you order the chain from the top down, do you need && at all? Try it both ways and compare.
    //  Test: 100, 80, 79, 50, 49, 0.

int main(void){
    //  declare a variable
    int mark;

    //ask user to enter mark
    printf("Enter mark: ");
    scanf("%d", &mark);

    //test the condition
    if(mark <= 100 && mark >= 80){
        printf("A (80+)\n");
    }
    else if(mark <= 79 && mark >= 70){
        printf("B (70 to 79)\n");
    }
    
    else if(mark <= 69 && mark >= 60){
        printf("C (60 to 69)\n");
    }

    else if(mark <= 59 && mark >= 50 ){
        printf("D (50 to 59)\n");
    }    
    else{
        printf("F (below 50)\n");
    }

    return 0;
}
*/


    //  Q12. Largest of three
    //  Read three numbers and print the largest.
    //  Hint: a number is the largest if it is greater than or equal to both others. Test cases where two numbers tie.
    int main(void){
        //declare variable
        double num1, num2, num3;

        //ask user to enter 3 numbers
        printf("Enter 3 numbers: ");
        scanf("%lf %lf %lf", &num1, &num2, &num3);

        //test the conditions
        if (num1 > num2 && num2 > num3){
            printf("%.2lf is the largest", num1);
        }
        else if (num1 == num2 && num1 == num3) {
            printf("%.2lf equal to both %.2lf and %.2lf", num1, num2, num3);
        }
        else if (num2 > num1 && num2 > num3) {
            printf("%.2lf is the largest", num2);
        }
        else if (num2 == num1 && num2 == num3) {
            printf("%.2lf equal to both %.2lf and %.2lf", num2, num1, num3);
        }
        else if (num3 > num1 && num3 > num2) {
            printf("%.2lf is the largest", num2);
        }
        else if (num3 == num1 && num2 == num3) {
            printf("%.2lf equal to both %.2lf and %.2lf", num2, num1, num3);
        }
        else {
            printf("2 numbers are equal");
        }
        

        return 0;
    }


/*
    //  Q13. Triangle type
    //  Read three side lengths and print equilateral, isosceles, or scalene.
    //  Hint: equilateral means all three are equal, isosceles means exactly two are equal. Which one do you check first, and why?
    //  Stretch: first check that all sides are positive and that the sum of any two sides is greater than the third.
    int main(void){
        // declare the variable
        double l1, l2, l3;

        // ask user to enter 3 side length of triangle
        printf("Enter 3 lengths of a triangle: ");
        scanf("%.1lf %.1lf %.1lf", &l1, &l2, &l3);

        //  test conditions to decide which triangle it it
        if (l1 == l2 && l2 == l3){
            printf("Equlateral\n");
        }
        else if (l1 != l2 )
        

        return 0;
    }

*/

/*
    //  Q14. Leap year
    //  Read a year and print whether it is a leap year.
    //  Rule: divisible by 4, except years divisible by 100, unless also divisible by 400.
    //  Test: 2000 (leap), 1900 (not), 2024 (leap), 2023 (not), 2100 (not).
    //  Hint: write the rule in plain English first, then translate it into && and ||.
    int main(void){
        //  declare the variable
        int year;

        //  ask user 
        printf("Enter a year: ");
        scanf("%d", &year);

        //  test condition
        if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0){
            printf("It Leap year");
        }
        else{
            printf("It is not Leap year");
        }

        return 0;
    }
*/



    //  Q15. Simple calculator
    //  Read two numbers and an operator (+, -, *, /) and print the result. Print an error for division by 0.
    //  Hint: read the operator with scanf(" %c", &op);. The space before %c skips the leftover newline, and I’d like you to find out what happens without it. Compare chars with ==, like op == '+' (single quotes for characters).

/*    
    #include <math.h>
    int main (void){
        //  declared variable
        double num1;
        double num2;
        char op;
        //  ask user 
        printf("Enter number: ");
        scanf("%lf", &num1);

        printf("\nenter operator: ");
        scanf(" %c", &op);

        printf("\nEnter number: ");
        scanf("%lf", &num2);

        //  test condition
        if (op == '+' ){
            printf("%.1lf",num1 + num2);
        }
        else if(op == '-'){
            printf("%.1lf", num1 - num2);
        }
        else if(op == '*'){
            printf("%.1lf", num1 * num2);
        }
        else if(op == '/' && num2 == 0){
            printf("Error", num1 / num2);
        }
        else if (op == '/')        {
            printf("%.1lf", num1 / num2);
        }
        else printf("No calculation\n");



        return 0;
    }
*/
