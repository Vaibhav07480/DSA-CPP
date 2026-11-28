class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int hi = nums.size()-1;
        int mid;
        while(low<=hi){
            mid = (low+hi)/2;
            if (nums[mid] == target){
                return mid;
            }
            else{
                if (nums[mid]<target){
                    low = mid+1;
                    
                }
                else{
                    hi = mid-1;
                }
            }
        }
        return -1;
    }
};