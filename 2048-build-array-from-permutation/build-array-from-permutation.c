/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 #include <stdio.h>

int* buildArray(int* nums, int numsSize, int* returnSize) {
    
    *returnSize = numsSize;

    // Store both old and new values in nums[i]
    for (int i = 0; i < numsSize; i++) {
        nums[i] += numsSize * (nums[nums[i]] % numsSize);
    }

    // Extract the new values
    for (int i = 0; i < numsSize; i++) {
        nums[i] /= numsSize;
    }

    return nums;
}