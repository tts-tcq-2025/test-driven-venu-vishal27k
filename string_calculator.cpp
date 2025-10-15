#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "string_calculator.h"

// Helper: parse a single number and update AddResult
static void process_number(int num, AddResult* result) {
    result->sum += num;
    if (num < 0 && result->negative_count < MAX_NEGATIVES) {
        result->negatives[result->negative_count++] = num;
    }
}

AddResult add(const char* input) {
    AddResult result = {0};  // sum=0, negative_count=0
    if (input == NULL || *input == '\0') return result;

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