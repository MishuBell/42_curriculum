#include <stdio.h>
#include <string.h>

// Function to display binary representation of a number (full byte, 0-255)
void display_binary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

// Function to convert binary string to decimal
int binary_to_decimal(const char *binary) {
    int value = 0;
    while (*binary) {
        if (*binary == '0' || *binary == '1') {
            value = value * 2 + (*binary - '0');
        }
        binary++;
    }
    return value;
}

int display_values() {
    int input;
    unsigned char value;

    printf("=== ASCII Character Information Tool ===\n");
    printf("This tool helps you learn ASCII values and their representations.\n");
    printf("Enter any character, decimal ASCII value (0-255), or binary (prefix with 0b).\n");
    printf("Type 'q' to quit.\n\n");

    while (1) {
        printf("Enter a character, ASCII value, or binary (0b...): ");
        
        // Read input as a string first
        char input_str[20];
        if (fgets(input_str, sizeof(input_str), stdin) == NULL) {
            printf("Error reading input.\n");
            continue;
        }
        
        // Remove newline at the end
        size_t len = strlen(input_str);
        if (len > 0 && input_str[len-1] == '\n') {
            input_str[len-1] = '\0';
            len--;
        }
        
        // Check for quit command
        if (input_str[0] == 'q' && input_str[1] == '\0') {
            printf("Exiting program.\n");
            break;
        }
        
        // Check if it's a binary input (starts with "0b")
        if (len > 2 && input_str[0] == '0' && (input_str[1] == 'b' || input_str[1] == 'B')) {
            // Convert binary to decimal
            int binary_value = binary_to_decimal(input_str + 2);
            
            if (binary_value > 255) {
                printf("Binary value too large. Maximum is 8 bits (0-255).\n");
                continue;
            }
            
            value = (unsigned char)binary_value;
        }
        // Try to parse as a decimal number
        else if (sscanf(input_str, "%d", &input) == 1) {
            // Input was a number
            if (input < 0 || input > 255) {
                printf("Invalid ASCII value. Please enter a value between 0-255.\n");
                continue;
            }
            value = (unsigned char)input;
        } else {
            // Input was a character
            value = (unsigned char)input_str[0];
        }
        
        // Display results
        printf("\n=== Results ===\n");
        printf("Character: %c", value >= 32 && value <= 126 ? value : ' ');
        if (value < 32 || value > 126) {
            printf(" (non-printable)");
        }
        printf("\n");
        
        printf("ASCII: %d\n", value);
        printf("Hex: 0x%02X\n", value);
        printf("Binary: ");
        display_binary(value);
        printf("\n");
        
        // Display C representation
        printf("\n=== C Language Usage ===\n");
        printf("Character literal: '%c'\n", value >= 32 && value <= 126 ? value : ' ');
        printf("Decimal value: %d\n", value);
        printf("Hexadecimal value: 0x%02X\n", value);
        printf("Octal value: 0%o\n", value);
        printf("As escape sequence: \\%03o\n", value);
        
        printf("\nExample in C code:\n");
        printf("char c = 0x%02X;  // hex\n", value);
        printf("char c = %d;     // decimal\n", value);
        printf("char c = 0b");
        display_binary(value);
        printf(";  // binary\n\n");
        
        printf("---------------------------------\n\n");
    }

    return 0;
}