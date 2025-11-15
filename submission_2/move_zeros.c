void moveZeroes(int* nums, int numsSize) {
    int swap = 1;
    int temp; 
    int last = numsSize;
    
    while(last > 0 && swap == 1)
    {
        swap = 0;
        for(int i = 0; i < last - 1; i++)
        {
            if(nums[i] == 0)
            {
                temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
                swap = 1;
            }
        }
        last -= 1;
    }
}
