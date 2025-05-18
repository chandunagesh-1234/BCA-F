
#include <stdio.h>

int main()
 {
    int dividend, divisor, quotient, remainder;

    // Prompt user for input
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Check for division by zero
    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Exit with error code
    }

    // Perform division and modulus operations
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // Display the results
    printf("\n=== Division Results ===\n");
    printf("Dividend : %d\n", dividend);
    printf("Divisor  : %d\n", divisor);
    printf("Quotient : %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}