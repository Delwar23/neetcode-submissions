class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int mx = 0, l = 0, r = heights.size() - 1;

        while (l < r) {
            mx = max(mx, (r - l) * min(heights[r], heights[l]));
            if (heights[l] > heights[r]) {
                r--;
            } else {
                l++;
            }
        }
        return mx;
    }
};
