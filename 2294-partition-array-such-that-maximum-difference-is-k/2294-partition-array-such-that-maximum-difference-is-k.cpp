class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int j=0;
        int count=0;
        for(int i=j+1;i<nums.size();i++)
        {
            int diff=nums[i]-nums[j];
            if(diff>k)
            {
                count++;
                j=i;
            }
            if(j==nums.size()-1)
                break;
        }
        return count+1;
    }
};