#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "string_calculator.h"



// Helper: add a number to the result
static void process_number(int num, AddResult* result) {
    result->sum += num;
}

AddResult add(const char* input) {
    AddResult result = {0};  // sum = 0

    // If the input is empty, return sum = 0
    if (*input == '\0') return result;

    char* copy = strdup(input);  // duplicate string for tokenization
    char* token = strtok(copy, ",");
    while (token != NULL) {
        int num = atoi(token);
        process_number(num, &result);
        token = strtok(NULL, ",");
    }
    free(copy);
    return result;
}
