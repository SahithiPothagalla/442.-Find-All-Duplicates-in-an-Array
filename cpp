class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int> ans;
        unordered_set<int> st;
        for (int i = 0; i < nums.size(); ++i) {
            if (st.find(nums[i]) != st.end()) {
                ans.push_back(nums[i]);
            }
            st.insert(nums[i]);
        }
        return ans;
    }
};
