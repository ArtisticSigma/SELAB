// ============================================================
// Ex No : 03
// Title : Boundary Value Analysis
// ============================================================

#include <stdio.h>

void nature_of_roots(int a, int b, int c) {
    int D = b * b - 4 * a * c;
    if (a == 0) {
        printf("Not a Quadratic Equation\n");
        return;
    }
    if (D > 0) {
        printf("Real Roots\n");
    } else if (D == 0) {
        printf("Equal Roots\n");
    } else {
        printf("Imaginary Roots\n");
    }
}

int main() {
    int a, b, c, testcase = 1;
    printf("Testcase\t a\t b\t c\t Result\n");

    while (testcase <= 13) {
        if (testcase == 1)  { a = 0;   b = 50;  c = 50;  }
        if (testcase == 2)  { a = 1;   b = 50;  c = 50;  }
        if (testcase == 3)  { a = 50;  b = 50;  c = 50;  }
        if (testcase == 4)  { a = 99;  b = 50;  c = 50;  }
        if (testcase == 5)  { a = 100; b = 50;  c = 50;  }
        if (testcase == 6)  { a = 50;  b = 0;   c = 50;  }
        if (testcase == 7)  { a = 50;  b = 1;   c = 50;  }
        if (testcase == 8)  { a = 50;  b = 99;  c = 50;  }
        if (testcase == 9)  { a = 50;  b = 100; c = 50;  }
        if (testcase == 10) { a = 50;  b = 50;  c = 0;   }
        if (testcase == 11) { a = 50;  b = 50;  c = 1;   }
        if (testcase == 12) { a = 50;  b = 50;  c = 99;  }
        if (testcase == 13) { a = 50;  b = 50;  c = 100; }

        printf("%d\t\t%d\t%d\t%d\t", testcase, a, b, c);
        nature_of_roots(a, b, c);
        testcase++;
    }
    return 0;
}

// ── Example output (no input needed, values are hardcoded) ──────────────────
// Testcase   a    b    c    Result
// 1          0    50   50   Not a Quadratic Equation
// 2          1    50   50   Real Roots
// 3          50   50   50   Imaginary Roots
// 4          99   50   50   Imaginary Roots
// 5          100  50   50   Imaginary Roots
// 6          50   0    50   Imaginary Roots
// 7          50   1    50   Imaginary Roots
// 8          50   99   50   Imaginary Roots
// 9          50   100  50   Equal Roots
// 10         50   50   0    Real Roots
// 11         50   50   1    Real Roots
// 12         50   50   99   Imaginary Roots
// 13         50   50   100  Imaginary Roots
