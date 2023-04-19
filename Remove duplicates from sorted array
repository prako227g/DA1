#include <stdio.h>

int removeDuplicates(int nums[], int numsSize) {
    if (numsSize == 0)  // empty array
        return 0;

    int i, j = 0;
    for (i = 1; i < numsSize; i++) {
        if (nums[i] != nums[j]) {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}

int main() {
    int nums[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, numsSize);

    printf("The unique elements are: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("The number of unique elements is %d\n", k);

    return 0;
}
