class Solution {
    public int[] twoSum(int[] nums, int target) {
       Map<Integer, Integer> mp= new HashMap<>();
       for(int i=0;i<nums.length;++i){
        mp.put(nums[i], i);
       }
       for(int i=0;i<nums.length;++i){
        int complement = target - nums[i];
        if(mp.containsKey(complement) && mp.get(complement)!=i){
            return new int[]{i, mp.get(complement)};
        }
       }
       return new int[]{};
    }
}