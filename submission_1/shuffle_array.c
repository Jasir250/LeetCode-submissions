

// This is the code as written on the leetcode website

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    
    *returnSize = numsSize;
    int* result = (int*) malloc(numsSize * sizeof(int));

    int xPointer = 0;
    int yPointer = n;

    for(int i = 0; i < numsSize; i++)
    {
        if(i % 2 == 0)
        {
            result[i] = nums[xPointer];
            xPointer += 1;
        }else{
            result[i] = nums[yPointer];
            yPointer += 1;
        }
    }
    

    return result;
}
