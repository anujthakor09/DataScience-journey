#Code:
//used long int because it was unable to store large int values

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        long int palin_num=0;
        int y = x;
        while(x!=0)
        {   int digit = x%10;
            palin_num = palin_num * 10 + digit;
            x = x/10;
        }
        return y == palin_num;
    }
};
