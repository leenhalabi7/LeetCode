class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0; 
        int high = nums.size()-1; 
        while(low <= high)
        {
            int mid = (low + high)/2; 
            if(nums[mid] == target)
            {
                return mid; //target is found
            }
            if(nums[mid] > target)
            {
                
                if(mid == 0 )
                {
                    return 0; //target not found - insert in the begining
                }
                //greater num on the right, smaller num on the left
                else if(nums[mid-1] < target ) 
                {
                    return mid; //target not found - insert between two nums 
                }
                high = mid; 
            }
            if(nums[mid] < target) 
            {
                if(mid == nums.size()-1 )
                {
                    return nums.size(); //target not found - insert in the end
                }
                //greater num on the right, smaller num on the left
                else if(nums[mid+1] > target) 
                {
                    return mid+1; //target not found - insert between two nums 
                }
                low = mid+1; 
            }
        }
        return 0; 
    }
    
};