class Solution {
public:
    int revers(int a)
    {
        int sum=0;
        while(a>0)
        {
            int rem=a%10;
            sum=sum*10+rem;
            a=a/10;
        }
        return sum;
    }
    bool sumOfNumberAndReverse(int num) {
        for(int i=0;i<=num;i++)
        {
            if(revers(i)+i==num)
                return true;
        }
        return false;
    }
};