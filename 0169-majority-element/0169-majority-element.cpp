class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int n=nums.size();
        int maxfreq=0;
        int maxel=-1;
        for(int i : nums){
            mpp[i]++;
        }
        for(auto el:mpp){
            if(el.second>maxfreq){
                maxfreq=el.second;
                maxel=el.first;
            }
        }
        return maxel; 
    }
};