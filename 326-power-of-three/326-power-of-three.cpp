class Solution {
public:
    bool isPowerOfThree(int n) {
        int i=n;
        int count=0;
        while(i>=1)
        {
            if(i%3==0){
                count++;
            }
            i=i/3;
        }
        if(pow(3,count)==n)
        {
            return true;
        }
        else{
            return false;
        }
    }
};