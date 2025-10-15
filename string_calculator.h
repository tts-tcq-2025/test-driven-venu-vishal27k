#define MAX_NEGATIVES 50
typedef struct {
    int sum;
    int negatives[MAX_NEGATIVES];
    int negative_count;
} AddResult;

AddResult add(const char* input);