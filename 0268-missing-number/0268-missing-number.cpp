class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int number=0;
        for(int i=0;i<n;i++){
            number^=nums[i]^i+1;
        }
        return number;
    }
};