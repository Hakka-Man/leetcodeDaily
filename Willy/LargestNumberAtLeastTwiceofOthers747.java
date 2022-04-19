public class LargestNumberAtLeastTwiceofOthers747 {
    public static void main(String[] args) {
        int[] test = {1,2,3,4,5,6};
        System.out.println(dominantIndex(test));
    }

    /* poor solution */
    /*
    public int dominantIndex(int[] nums) {
        int sorted[] = nums.clone();
        Arrays.sort(sorted);

        if (nums.length == 0) {
            return -1;
        }
        if (nums.length == 1) {
            return 0;
        }
        if (sorted[nums.length - 1] >= (2 * sorted[nums.length - 2])) {
            for (int i = 0; i < nums.length; i++) {
                if (nums[i] == sorted[nums.length - 1]) {
                    return i;
                }
            }
        }
        return -1;
    }
    */
}