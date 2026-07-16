/*
 * Program Name : Unary Arithmetic Operators in C
 * Author       : Your Name
 * Date         : DD/MM/YYYY
 * Description  :
 * This program accepts an integer from the user and demonstrates
 * the use of unary arithmetic operators in C:
 *   1. Unary Plus (+)
 *   2. Unary Minus (-)
 *   3. Pre-Increment (++variable)
 *   4. Post-Increment (variable++)
 *   5. Pre-Decrement (--variable)
 *   6. Post-Decrement (variable--)
 *
 * Compiler     : GCC
 
 */

#include <stdio.h>

int main()
{
    /* Variable Declaration */
    int number;

    /* Taking Input from User */
    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("\n=====================================\n");
    printf("   UNARY ARITHMETIC OPERATORS IN C\n");
    printf("=====================================\n\n");

    /* Display Original Value */
    printf("Original Value = %d\n\n", number);

    /* Unary Plus */
    printf("Unary Plus (+number)      = %d\n", +number);

    /* Unary Minus */
    printf("Unary Minus (-number)     = %d\n\n", -number);

    /* Pre-Increment */
    printf("Pre-Increment (++number)  = %d\n", ++number);

    /* Post-Increment */
    printf("Post-Increment (number++) = %d\n", number++);
    printf("Value after Post-Increment = %d\n\n", number);

    /* Pre-Decrement */
    printf("Pre-Decrement (--number)  = %d\n", --number);

    /* Post-Decrement */
    printf("Post-Decrement (number--) = %d\n", number--);
    printf("Value after Post-Decrement = %d\n", number);

    return 0;
}