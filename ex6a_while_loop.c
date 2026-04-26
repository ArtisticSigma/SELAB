// ============================================================
// Ex No : 06 (a)
// Title : Working of Loops - While Loop
// ============================================================

#include <stdio.h>

int main() {
    int i = 0;

    printf("Before loop, i=%d\n", i);

    while (i < 5) {
        printf("i=%d\n", i++);
    }

    printf("After loop, i=%d\n", i);

    return 0;
}

// ── Example output (no input needed) ────────────────────────────────────────
// Before loop, i=0
// i=0
// i=1
// i=2
// i=3
// i=4
// After loop, i=5
