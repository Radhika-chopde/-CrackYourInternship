class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int k;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]) {
                i++;
            }
            else if(nums1[i]>nums2[j]){
                swap(nums1[i],nums2[j]);
                k=j;
                while((k+1)<n && nums2[k]>nums2[k+1]){
                    swap(nums2[k],nums2[k+1]);
                    k++;
                }
            }
        }
        while(j<n){
            nums1[i]=nums2[j];
            i++;
            j++;
        }
    }
};