class Solution {
public:
    int v(char a){
            if(a=='I'){
                return 1;
            }
            else if(a=='V'){
                return 5;
            }
            else if(a=='X'){
                return 10;
            }
            else if(a=='L'){
                return 50;
            }
            else if(a=='C'){
                return 100;
            }
            else if(a=='D'){
                return 500;
            }
            else{
                return 1000;
            }
    }
    int romanToInt(string s) {
        int c=0,m,n;
        for(int i=0;i<s.size();i++){
            m=v(s[i]);
            if(i==s.size()-1){
                c=c+m;
            }
            else{
                n=v(s[i+1]);
                if(m>=n){
                    c=c+m;
                }
                if(m<n){
                    c=c-m;
                }
            }
            
            
        }
        return c;
    }
};