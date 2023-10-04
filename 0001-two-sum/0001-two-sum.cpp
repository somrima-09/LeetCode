class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> l;
        for(int i=0;i<nums.size();i++){
            int c=1;
            for(int j=i+1;c<nums.size()-i;j++){
                if(nums[i]+nums[j]==target){
                   l.push_back(i);
                   l.push_back(j);
                   break;
                }
                c=c+1;
            }
        }
        return l;
    }
};