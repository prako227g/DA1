#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return left;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int target = 5;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int index = searchInsert(nums, numsSize, target);
    printf("Index of target element: %d\n", index);
    return 0;
}
