class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        unordered_map<int, int>mp;

        for(int i = 0; i<n; i++)
        {
            int ind = target - nums[i];
            if(mp.find(ind) != mp.end())
            {
                return {mp[ind], i};
            }
            // mp.insert({nums[i], i});
            mp[nums[i]]=i;
        }

        return {};

    }
};
