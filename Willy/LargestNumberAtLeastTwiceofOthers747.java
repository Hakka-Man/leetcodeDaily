public class LargestNumberAtLeastTwiceofOthers747 {
    public static void main(String[] args) {
        int[] test = {1, 0};
        System.out.println(dominantIndex(test));
    }

    /* poor solution */
    /*
    public static int dominantIndex(int[] nums) {
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

    public static int dominantIndex(int[] nums) {
        if (nums.length == 1) {
            return 0;
        }
        int max1 = nums[0];
        int max2 = 0;
        int index = 0;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] > max1) {
                max2 = max1;
                max1 = nums[i];
                index = i;
            } else if (nums[i] > max2) {
                max2 = nums[i];
            }
        }
        int result = max1 >= (2 * max2) ? index : -1;
        return result;
    }
}