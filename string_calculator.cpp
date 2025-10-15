#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "string_calculator.h"

AddResult add(const char* input) {
    AddResult result;
    result.sum = 0;
    result.negative_count = 0;

    // Check if input is NULL or empty
    if (input == NULL || strlen(input) == 0) {
        return result;  // sum = 0, negatives empty
    }

    // TODO: Parse numbers from input and populate sum & negatives
    // Example logic could be splitting by ',' and converting with atoi

    return result;
}