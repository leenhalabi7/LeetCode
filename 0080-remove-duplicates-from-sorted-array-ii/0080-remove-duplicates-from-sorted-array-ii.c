int removeDuplicates(int* nums, int numsSize) {
    bool couple_on = false;
    int counter = 0, k = 1;
    for (int i = 1; i < numsSize; i++) 
    {
        if (nums[i] == nums[i - 1] && couple_on ) //dup num
        {
            counter++;
        } 
        else //new num after non-dup num 
        {
            if (nums[i] == nums[i - 1])
            {
                couple_on = true;
            }
            else 
            {
                couple_on = false;
            }
            nums[i - counter] = nums[i];
            k++;
        } 
        
    }
    return k;
}