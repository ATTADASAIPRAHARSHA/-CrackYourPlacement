class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int sum=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==sum)
            {
                count++;
            }
            else{
                count--;
                if(count==0)
                {
                    sum=nums[i];
                    count=1;
                }
            }
        }
        return sum;
        
        
    }
};
