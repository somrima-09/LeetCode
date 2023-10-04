class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0,b=0,n;
        n=colors.size();
        if( n<= 2) return false;
        for(int i=1;i<n-1;i++){
            if(colors[i]=='A' && colors[i-1]=='A' && colors[i+1]=='A'){
                a=a+1;
            }
            if(colors[i]=='B' && colors[i-1]=='B' && colors[i+1]=='B'){
                b=b+1;
            }
        }
        return a>b;
    }
};