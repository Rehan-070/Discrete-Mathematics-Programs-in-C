#include <stdio.h>

int main() {
    int n, low, high, mid, search;
    int a[20];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the numbers in ascending order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the search element: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (search == a[mid]) {
            printf("Position of %d is %d\n", search, mid + 1);
            return 0;
        } else if (search < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("Value %d not found in the array.\n", search);

    return 0;
}