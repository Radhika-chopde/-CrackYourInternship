class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] i=new int[2];
        for(int j=0;j<nums.length;j++){
            for(int k=j+1;k<nums.length;k++){
                if((nums[j]+nums[k])==target){
                    i[0]=j;
                    i[1]=k;
                    break;
                }
            }
        }
        return i;
    }
}