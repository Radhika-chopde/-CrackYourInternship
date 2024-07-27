class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0;
        int k = 0;
        for(int num : nums) {
            if(c == 0) {
                k = num;
            }
            c += (num==k) ? 1 : -1;
        }
        return k;
    }
};