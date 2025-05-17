#include <stdio.h>
#include <stdlib.h>

int maxn(int n, int v[]) {
    int max = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = maxn(n, arr);
    printf("The maximum value is: %d\n", result);

    system("pause");
    return 0;
}
