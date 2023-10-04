class Solution {
public:
    bool isPalindrome(int x) {
        long long r=0,d,o;
        o=x;
        while(x>0){
            d=x%10;
            r=(r*10)+d;
            x=x/10;
        }
        if(r==o){
            return true;
        }
        else{
            return false;
        }
    }
};