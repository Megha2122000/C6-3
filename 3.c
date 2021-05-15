
 
#include <stdio.h>

/* Function declaration */
int lcm(int a, int b);

int main()
{
    int number1, number2, LCM;

    /* Input two numbers from user */
    printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &number1, &number2);
    
    /*
     * Ensures that first parameter of LCM function 
     * is always less than second 
     */
    if(number1 > number2)
        LCM = lcm(number2, number1);
    else
        LCM = lcm(number1, number2);
        
    printf("LCM of %d and %d = %d", number1, number2, LCM);
    
    return 0;
}

/**
 * Recursive function to find lcm of two numbers 'a' and 'b'.
 * Here 'a' needs to be always less than 'b'.
 */
int lcm(int a, int b)
{
    static int multiple = 0;
    
    /* Increments multiple by adding max value to it */
    multiple += b;
    
    /*
     * Base condition of recursion
     * If found a common multiple then return the multiple.
     */
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}

