class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i:nums)
        {
            m[i]++;
            if(m[i]>1)
            {
            return i;
            break;
            }
        }
        return m[2];
    }
};