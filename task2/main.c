#include <stdio.h>

// this function for finding the greatest common divisor
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

// this is for finding the least common multiple
int findLCM(int arr[], int n) {
    int lcm = arr[0];

    for (int i = 1; i < n; i++) {
        lcm = (lcm * arr[i]) / findGCD(lcm, arr[i]);
    }

    return lcm;
}

int main() {
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    int arr[20];
    printf("Enter the numbers separated by space:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lcm = findLCM(arr, n);
    printf("Least Common Multiple: %d\n", lcm);

    return 0;
}
