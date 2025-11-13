#include <stdio.h>

int main() {
    
    int nums_size;
    
    printf("Enter amount of numbers that will be entered: ");
    scanf("%d", &nums_size);
    
    int nums[nums_size];
    int result[nums_size];
    int current_sum;
    
    printf("Enter number 1: ");
    scanf("%d", &nums[0]);
    
    current_sum = nums[0];
    result[0] = nums[0];
    for(int i = 1; i < nums_size; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
        current_sum += nums[i];
        result[i] = current_sum;
    }
    
    for(int i = 0; i < nums_size; i++)
    {
        printf("%d " ,result[i]);
    }
    
    return 0;
}
