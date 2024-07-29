class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_count;
        prefix_count[0] = 1;
        int prefix_sum = 0;
        int result = 0;
        
        for (int num : nums) {
            prefix_sum += num;
            int mod = prefix_sum % k;
            
            if (mod < 0) mod += k;
            
            if (prefix_count.find(mod) != prefix_count.end()) {
                result += prefix_count[mod];
            }
            
            prefix_count[mod]++;
        }
        
        return result;
    }
};