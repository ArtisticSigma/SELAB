// ============================================================
// Ex No : 06 (b)
// Title : Working of Loops - Do While Loop
// ============================================================

#include <stdio.h>

int main() {
    int month;

    do {
        printf("Please enter the month of your birth > ");
        scanf("%d", &month);
    } while (month < 1 || month > 12);

    return 0;
}

// ── Example input & output ───────────────────────────────────────────────────
// Input:  13  (invalid)
//         -1  (invalid)
//         15  (invalid)
//         -3  (invalid)
//         12  (valid - loop exits)
//
// Output:
// Please enter the month of your birth > 13
// Please enter the month of your birth > -1
// Please enter the month of your birth > 15
// Please enter the month of your birth > -3
// Please enter the month of your birth > 12
