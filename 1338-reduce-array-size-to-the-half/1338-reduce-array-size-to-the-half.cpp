class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        vector<int>v;
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        sort(v.begin(),v.end(),greater<>());
        int count=0,sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum=sum+v[i];
            count++;
            if(sum>=n/2)
                break;
        }
        return count;
    }
};