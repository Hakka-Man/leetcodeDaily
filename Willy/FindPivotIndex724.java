public class FindPivotIndex724 {

    public static void main(String[] args){
        int[] test = {1,7,3,6,5,6};
        int result = pivotIndex(test);

        System.out.println(result);
    }

    /* bad approach */
    /*
    public static int pivotIndex(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            int leftSum = 0;
            for (int j = 0; j < i; j++) {
                leftSum += nums[j];
            }
            int rightSum = 0;
            for (int j = i + 1; j < nums.length; j++) {
                rightSum += nums[j];
            }
            if (rightSum == leftSum) {
                return i;
            }
        }
        return -1;
    }
    */

    /* better approach */
    public static int pivotIndex(int[] nums) {
        int sum = 0;
        int leftSum = 0;
        for (Integer i : nums) {
            sum += i;
        }
        for (int i = 0; i < nums.length; i++) {
            if (leftSum == sum - leftSum - nums[i]) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
}