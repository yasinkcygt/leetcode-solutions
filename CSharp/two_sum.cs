public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        // Create an array to store the result indices
        int[] resultArray = new int[2]; 
        
        // Iterate through each element in nums
        for(int i = 0; i < nums.Length; i++){
            // For each element, check all subsequent elements
            for(int j = i; j < nums.Length; j++){
                // Check if the sum of nums[i] and nums[j] equals the target
                // Also ensure that i and j are not the same index
                if(nums[i] + nums[j] == target && i != j){
                    // Store the indices in the result array
                    resultArray[0] = i;
                    resultArray[1] = j;
                }
            } 
        }
        // Return the result array containing the two indices
        return resultArray;
    }
}
