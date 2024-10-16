int removeDuplicates(int* nums, int numsSize) {
    bool couple_on = false;
    short counter = 0, k = 1;
    for (short i = 1; i < numsSize; i++) 
    {
        if (nums[i] == nums[i - 1] && couple_on ) //dup num
        {
            counter++;
        } 
        else 
        {
            if (nums[i] == nums[i - 1]) //num reached max dup
            {
                couple_on = true;
            }
            else //new num - first appearience
            {
                couple_on = false;
            }
            nums[i - counter] = nums[i];
            k++;
        } 
    }
    return k;
}