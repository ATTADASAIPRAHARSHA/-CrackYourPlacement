class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=0)
            {
                i++;
            }
            else if(nums[j]!=0 )
            {
                swap(nums[i],nums[j]);
                i++;
            }
        }

        for(int i:nums)
        {
            cout<<i;
        }
        cout<<endl;
    }
};
