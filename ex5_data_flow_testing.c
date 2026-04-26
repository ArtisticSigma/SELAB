// ============================================================
// Ex No : 05
// Title : Data Flow Testing
// ============================================================

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
    int a, b, t;

    system("cls");

    printf("Enter the first number ");
    scanf("%d", &a);

    printf("Enter the second number ");
    scanf("%d", &b);

    if (a < b) {
        t = a;
        a = b;
        b = t;
    }

    printf("a=%d b=%d", a, b);
    getch();
}

// ── Example input & output ───────────────────────────────────────────────────
// Input:  4  (first number)
//         6  (second number)
//
// Output: a=6 b=4
//
// Data Flow (Variable 'a'):
//   Defined at line 6  -> Used at line 9  (P-Use: condition a<b)
//                      -> Used at line 10 (C-Use: t=a)
//   Redefined at line 11 (a=b)
//   Used at line 14 (printf)
//
// Data Flow (Variable 'b'):
//   Defined at line 8  -> Used at line 9  (P-Use: condition a<b)
//                      -> Used at line 11 (C-Use: a=b)
//   Redefined at line 12 (b=t)
//   Used at line 14 (printf)
//
// Data Flow (Variable 't'):
//   Defined at line 10 (t=a)
//   Used at line 12    (C-Use: b=t)
