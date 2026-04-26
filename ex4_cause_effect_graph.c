// ============================================================
// Ex No : 04
// Title : Cause - Effect Graph (Triangle Classification)
// ============================================================

#include <stdio.h>

void main() {
    int a, b, c;

    printf("Enter the values of a, b, and c: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("\nImpossible\n");
        return;
    }

    if (((a + b) > c) && ((b + c) > a) && ((c + a) > b)) {
        if ((a == b) && (b == c)) {
            printf("\nIt is an Equilateral Triangle");
        } else if ((a == b) || (b == c) || (c == a)) {
            printf("\nIt is an Isosceles Triangle");
        } else {
            printf("\nIt is a Scalene Triangle");
        }
    } else {
        printf("\nNot a Triangle");
    }
}

// ── Example input & output ───────────────────────────────────────────────────
// Test Case 1:  Input: 4 1 2   Output: Not a Triangle
// Test Case 2:  Input: 1 4 2   Output: Not a Triangle
// Test Case 3:  Input: 1 2 4   Output: Not a Triangle
// Test Case 4:  Input: 5 5 5   Output: It is an Equilateral Triangle
// Test Case 5:  Input: 2 2 3   Output: It is an Isosceles Triangle
// Test Case 6:  Input: 2 3 2   Output: It is an Isosceles Triangle
// Test Case 7:  Input: 3 2 2   Output: It is an Isosceles Triangle
// Test Case 8:  Input: 3 4 5   Output: It is a Scalene Triangle
// Test Case 9:  Input: a b c   Output: Impossible  (non-integer input)
