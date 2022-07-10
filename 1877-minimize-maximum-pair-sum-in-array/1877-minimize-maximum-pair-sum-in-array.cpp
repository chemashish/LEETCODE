class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=n-1;
        int mx=INT_MIN;
        while(i<j)
        {
            int sum=nums[i]+nums[j];
            if(sum>mx)
                mx=sum;
            i++;
            j--;
        }
        return mx;
    }
};