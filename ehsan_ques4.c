#include<stdio.h>
int main()
{
    int nums[] = {1,4,9,11,99,5,66,76,9,0};
    
    int *ptr2max = &nums[0];
    for(int i =1; i< 10; i++){
        if(nums[i]  > *ptr2max ){
            ptr2max = &nums[i];
        }
    }
    printf("Maximum number is %d \n",(*ptr2max));

}