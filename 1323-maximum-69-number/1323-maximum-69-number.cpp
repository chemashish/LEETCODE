class Solution {
public:
    int maximum69Number (int num) {
        string str=to_string(num);
        char ch='9';
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='6')
            {
                swap(str[i],ch);
                break;
            }
        }
        int sum=0;
        int n=str.size()-1;
        for(int i=0;i<str.size();i++)
        {
            int x=str[i]-48;
            sum=sum+x*pow(10,n);
            n--;
        }
        return sum;
    }
};