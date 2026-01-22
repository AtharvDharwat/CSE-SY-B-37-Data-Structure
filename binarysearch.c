#include <stdio.h>

int main() {
    int n, target, low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    low = 0;
    high = n - 1;

    while (low <= high) {-
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            printf("Found at index: %d\n", mid);
            found = 1;
            break; 
        }

        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found == 0) {
        printf("Not found\n");
    }

    return 0;
}
