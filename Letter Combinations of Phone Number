#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* phoneMapping[] = {
    "",     // 0
    "",     // 1
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz"  // 9
};

void backtrack(char** result, char* combination, char* digits, int index, int* returnSize) {
    if (digits[index] == '\0') {
        result[*returnSize] = strdup(combination);
        (*returnSize)++;
        return;
    }

    char* letters = phoneMapping[digits[index] - '0'];
    for (int i = 0; i < strlen(letters); i++) {
        combination[index] = letters[i];
        backtrack(result, combination, digits, index + 1, returnSize);
    }
}

char** letterCombinations(char* digits, int* returnSize) {
    int digitsLen = strlen(digits);
    if (digitsLen == 0) {
        *returnSize = 0;
        return NULL;
    }

    int maxCombinations = 1;
    for (int i = 0; i < digitsLen; i++) {
        maxCombinations *= strlen(phoneMapping[digits[i] - '0']);
    }

    char** result = (char**) malloc(maxCombinations * sizeof(char*));
    char* combination = (char*) malloc((digitsLen + 1) * sizeof(char));
    combination[digitsLen] = '\0';

    *returnSize = 0;
    backtrack(result, combination, digits, 0, returnSize);

    free(combination);

    return result;
}

int main() {
    char* digits = "23";
    int returnSize = 0;
    char** result = letterCombinations(digits, &returnSize);

    printf("The letter combinations for %s are:\n", digits);
    for (int i = 0; i < returnSize; i++) {
        printf("%s\n", result[i]);
    }

    for (int i = 0; i < returnSize; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}
