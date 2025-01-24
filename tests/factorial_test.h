#ifndef FACTORIAL_H
#define FACTORIAL_H

    int test_cases[][2] = {
        {5, 120},    // Normal case
        {0, 1},      // Edge case: 0! = 1
        {1, 1},      // Edge case: 1! = 1
        {12, 479001600}, // Max valid case
        {-5, 0},     // Invalid negative
        {13, 1932053504}      // Overflow case
    };


#endif
