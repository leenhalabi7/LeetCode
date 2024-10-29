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
                
                high = mid-1; 
            }
            else //nums[mid] < target
            {
                low = mid+1; 
            }
        }
        return low; 
    }
    
};