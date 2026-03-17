#include <stdio.h>
#include <math.h>

void decimal_to_binary(int decimal) {
    int binary[32], i = 0;
    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }
    printf("Equivalent binary value is: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

void decimal_to_octal(int decimal) {
    int octal[32], i = 0;
    while (decimal > 0) {
        octal[i++] = decimal % 8;
        decimal /= 8;
    }
    printf("Equivalent octal value is: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");
}

int binary_to_decimal(int binary) {
    int decimal = 0, base = 1, remainder;
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

void binary_to_octal(int binary) {
    int decimal = binary_to_decimal(binary);
    decimal_to_octal(decimal);
}

void binary_to_hexadecimal(int binary) {
    int decimal = binary_to_decimal(binary);
    decimal_to_hexadecimal(decimal);
}

void decimal_to_hexadecimal(int decimal) {
    char hex[32];
    int i = 0;
    while (decimal > 0) {
        int remainder = decimal % 16;
        hex[i++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        decimal /= 16;
    }
    printf("Equivalent hexadecimal value is: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }
    printf("\n");
}

int main() {
    int choice, number;

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Decimal to Binary\n");
        printf("2. Decimal to Octal\n");
        printf("3. Decimal to Hexadecimal\n");
        printf("4. Binary to Decimal\n");
        printf("5. Binary to Octal\n");
        printf("6. Binary to Hexadecimal\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a decimal number: ");
                scanf("%d", &number);
                decimal_to_binary(number);
                break;
            case 2:
                printf("Enter a decimal number: ");
                scanf("%d", &number);
                decimal_to_octal(number);
                break;
            case 3:
                printf("Enter a decimal number: ");
                scanf("%d", &number);
                decimal_to_hexadecimal(number);
                break;
            case 4:
                printf("Enter a binary number: ");
                scanf("%d", &number);
                printf("Decimal equivalent: %d\n", binary_to_decimal(number));
                break;
            case 5:
                printf("Enter a binary number: ");
                scanf("%d", &number);
                binary_to_octal(number);
                break;
            case 6:
                printf("Enter a binary number: ");
                scanf("%d", &number);
                binary_to_hexadecimal(number);
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}