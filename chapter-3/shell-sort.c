#include <stdio.h>

// shellsort: sort v[0]...v[n-1] into ascending order
void shellsort(int v[], int n) {
    int gap, i, j, temp;

    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
}

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = 10;

    shellsort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);

    return 0;
}
