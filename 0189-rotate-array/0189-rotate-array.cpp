class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n;
        n=nums.size();
        if(k>n){
            k=k%n;
        }
        if(n==1){
            cout<<nums[0];
        }
        else{
            rev(0,n-k-1,nums);
            rev(n-k,n-1,nums);
            rev(0,n-1,nums);
            for(int i;i<n;i++){
                cout<<nums[i]<<endl;
            }
        }
    }
    void rev(int i,int j,vector<int> &v){
        for(i,j;i<=j;i++,j--){
            int temp;
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
};