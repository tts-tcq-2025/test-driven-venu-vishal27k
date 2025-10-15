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

   while (*input && isspace(*input)) input++;

    // Check if there is a comma
    const char* comma = strchr(input, ',');
    if (comma == NULL) {
        // Single number case
        int num = atoi(input);
        result.sum = num;

        if (num < 0) {
            result.negatives[0] = num;
          
        }

        return result;
    }


    return result;
}