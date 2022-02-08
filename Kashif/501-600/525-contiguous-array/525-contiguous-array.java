class Solution {
    public int findMaxLength(int[] nums) {
        Map<Integer, Integer> hashMap = new HashMap<>();
        hashMap.put(0, -1);
        int maxLength = 0, count = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == 0){
                count = count - 1;
            }else{
                count = count + 1;
            }
            if(hashMap.containsKey(count)){
                maxLength = Math.max(maxLength, i - hashMap.get(count));
            }else{
                hashMap.put(count, i);
            }
        }
        return maxLength;
    }
}