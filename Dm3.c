#include <stdio.h>
#include <math.h>

int main() {
    int num, i, j;
    char set[20];

    printf("Enter the number of set elements: ");
    scanf("%d", &num);

    printf("Enter the set elements: ");
    for (i = 0; i < num; i++) {
        scanf("%s", &set[i]); // Corrected input format
    }

    int power_set_size = pow(2, num);
    printf("[ ");
    for (i = 0; i < power_set_size; i++) {
        printf("{");
        for (j = 0; j < num; j++) {
            if (i & (1 << j)) {
                printf("%c", set[j]);
            }
        }
        printf("} ");
    }
    printf(" ]");
    return 0;
}