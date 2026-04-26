// ============================================================
// Ex No : 02
// Title : Binary Search - Path Testing
// ============================================================

#include <stdio.h>

int bs(int x[], int low, int high, int key) {
    printf("1");
    int mid;
    printf("-2");
    while (low <= high) {
        mid = (low + high) / 2;
        printf("-3");
        if (x[mid] == key) {
            printf("-8-9");
            return mid;
        }
        printf("-4");
        if (x[mid] < key) {
            printf("-5");
            low = mid + 1;
        } else {
            printf("-6");
            high = mid - 1;
        }
        printf("-7");
    }
    printf("-8");
    return -1;
    printf("-9");
}

int main() {
    int a[200], n, s, k;

    printf("Enter the Element Length: ");
    scanf("%d", &n);

    printf("\nEnter the Elements Value: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the Key Value: ");
    scanf("%d", &k);

    printf("\nPath: ");
    s = bs(a, 0, n - 1, k);

    if (s != -1) {
        printf("\nThe Element %d found at index of %d\n", k, s + 1);
    } else {
        printf("\nThe Element %d not found.", k);
    }
}

// ── Example input & output ───────────────────────────────────────────────────
// Array used: {10, 20, 30, 40, 50}
//
// Test 1 - Key found at mid (Path: 1-2-3-8-9):
//   Input:  n=5, elements=10 20 30 40 50, key=30
//   Output: Path: 1-2-3-8-9
//           The Element 30 found at index of 3
//
// Test 2 - Key in left half (Path: 1-2-3-4-6-7-3-4-5-7-3-8-9):
//   Input:  n=5, elements=10 20 30 40 50, key=20
//   Output: Path: 1-2-3-4-6-7-3-4-5-7-3-8-9
//           The Element 20 found at index of 2
//
// Test 3 - Key in right half (Path: 1-2-3-4-5-7-3-8-9):
//   Input:  n=5, elements=10 20 30 40 50, key=40
//   Output: Path: 1-2-3-4-5-7-3-8-9
//           The Element 40 found at index of 4
//
// Test 4 - Key not found (Path: 1-2-3-4-5-7-3-4-5-7-3-4-5-7-8):
//   Input:  n=5, elements=10 20 30 40 50, key=60
//   Output: Path: 1-2-3-4-5-7-3-4-5-7-3-4-5-7-8
//           The Element 60 not found.
