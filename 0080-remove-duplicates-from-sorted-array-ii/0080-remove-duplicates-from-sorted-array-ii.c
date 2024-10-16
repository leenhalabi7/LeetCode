int removeDuplicates(int* nums, int numsSize) {
    bool couple_on = false;
    int counter = 0, k = 1;
    for (int i = 1; i < numsSize; i++) 
    {
        if (couple_on == false) //new num after non-dup num 
        {
            if (nums[i] == nums[i - 1])
            {
                couple_on = true;
            }
            nums[i - counter] = nums[i];
            k++;

        } 
        else if (nums[i] == nums[i - 1]) 
        {
            counter++;
        } 
        else // new num after dup num 
        {
            nums[i - counter] = nums[i];
            couple_on = false;
            k++;
        }
    }
    return k;
}