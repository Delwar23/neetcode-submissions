class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero = 0, n = nums.size();
        long long int prod = 1;

        if (n == 1) {
            return nums;
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zero++;
            } else {
                prod *= nums[i];
            }

            if (zero > 1) {
                break;
            }
        }

        vector<int> res(n, 0);

        if (zero > 1) {
            return res;
        } else if (zero == 1)
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) {
                    res[i] = prod;
                } else {
                    res[i] = 0;
                }
            }
        else {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) {
                    res[i] = prod;
                } else {
                    res[i] = prod / nums[i];
                }
            }
        }

        return res;
    }
};
