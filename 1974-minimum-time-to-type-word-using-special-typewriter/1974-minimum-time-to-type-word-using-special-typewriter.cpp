class Solution {
public:
    int minTimeToType(string word) {
        int n=word.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                sum=sum+abs(int(word[i]-'a'));
                if(sum>13)
                {
                    sum=(26-sum);
                }
                
            }
            else{
                int x=abs(int(word[i]-word[i-1]));
                
                if(x>13)
                {
                    sum+=(26-x);
                    
                }
                else{
                    sum=sum+x;
                    
                }
            }
        }
        return (sum+n);
    }
};