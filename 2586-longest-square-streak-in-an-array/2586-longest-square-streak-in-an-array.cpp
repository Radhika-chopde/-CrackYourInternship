class Solution {
public:
    int longestSquareStreak(std::vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(),nums.end());
        int max_l = -1;
        for(int num:nums){
            int l = 1;
            long long c = sqrt(num);
            int k = num;
            while(c*c == k && numSet.find(c)!=numSet.end()){
                k=c;
                c = sqrt(c);
                l++;
            }
            if(l>=2){
                max_l = max(max_l,l);
            }
        }
        return max_l;
    }
};