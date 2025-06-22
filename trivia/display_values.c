#include <stdio.h>

//Copilots work.

// Function to display binary representation of a number
void display_binary(int num) {
    for (int i = 7; i >= 0; i--) { // Assuming 8-bit ASCII values
        printf("%d", (num >> i) & 1);
    }
}

int display_values() {
    char input;

    printf("Type any symbol (or 'q' to quit):\n");

    while (1) {
        printf("Enter a character: ");
        if (scanf(" %c", &input) != 1) { // Read a single character
            printf("Invalid input. Please try again.\n");
            continue; // Skip to the next iteration
        }

        if (input == 'q') { // Exit condition
            printf("Exiting program.\n");
            break;
        }

        printf("ASCII: %d\n", input);       // Print ASCII value
        printf("Hex: 0x%x\n", input);      // Print Hexadecimal value
        printf("Binary: ");
        display_binary(input);             // Print Binary value
        printf("\n");
    }

    return 0;
}