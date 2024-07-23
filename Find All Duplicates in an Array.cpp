class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
       for(int i=0;i<nums.size();i++)
       {
        int x=abs(nums[i]);
         if(nums[x - 1] < 0) result.push_back(abs(nums[i]));
            nums[x - 1] *= -1;
       }
       return result;
    }
};
