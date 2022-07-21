class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        while(num>0)
        {
            int rem=num%10;
            v.push_back(rem);
            num=num/10;
        }
        sort(v.begin(),v.end());
        int n=v.size();
        int a=n/2;
        int b=n-a;
        int i=0,j=n-1;
        int num1=0,num2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                num1=num1+v[i]*(pow(10,b-1));
                    b--;
            }
            
            else{
                num2=num2+v[i]*(pow(10,a-1));
                a--;
            }
        }
        
        return num1+num2;
    }
};