

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    int frequency;
} Element;

// Comparator: Ascending Frequency, then Descending Value
int compare(const void *a, const void *b) {
    Element *e1 = (Element *)a;
    Element *e2 = (Element *)b;
    if (e1->frequency != e2->frequency)
        return e1->frequency - e2->frequency;
    return e2->value - e1->value;
}

void solveQ1(int* nums, int n) {
    int freqMap[20001] = {0}; // Handling range -10^4 to 10^4
    int offset = 10000;

    for (int i = 0; i < n; i++) freqMap[nums[i] + offset]++;

    Element *elements = (Element *)malloc(n * sizeof(Element));
    for (int i = 0; i < n; i++) {
        elements[i].value = nums[i];
        elements[i].frequency = freqMap[nums[i] + offset];
    }

    qsort(elements, n, sizeof(Element), compare);

    printf("Q1 Output: ");
    for (int i = 0; i < n; i++) printf("%d ", elements[i].value);
    printf("\n");
    free(elements);
}

int main() {
    int nums[] = {1, 1, 2, 2, 2, 3};
    solveQ1(nums, 6);
    return 0;
}