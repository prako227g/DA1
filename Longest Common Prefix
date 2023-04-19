#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }
    char* prefix = strs[0];
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';
    }
    return prefix;
}

int ma() {
    char* strs[] = {"flower", "flow", "flight"};
    int strsSize = 3;
    char* prefix = longestCommonPrefix(strs, strsSize);
    printf("%s\n", prefix);
    return 0;
}
