// code as written on LeetCode


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;


    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] % 2 == 0)
        {
            nums[i] = 0;
        }else{
            nums[i] = 1;
        }
    }


    int swap = 1;
    int last = numsSize;
    int temp;

    while(last > 0 && swap == 1)
    {
        swap = 0;
        for(int i = 0; i < last - 1; i++)
        {
            if(nums[i] > nums[i+1]){
                temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
                swap = 1;
            }
        }
        last -= 1;
    }

    return nums; 

}
