class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        int n=nums.size();
        for(int i : nums){
            if(st.count(i)){
                return true;
            }
            st.insert(i);
        }
        return false;
    }
};