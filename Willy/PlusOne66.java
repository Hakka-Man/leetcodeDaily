public class PlusOne66 {
    public static void main(String[] args) {
        int[] test = {9,9,9};
        test = plusOne(test);
        for (Integer i : test) {
            System.out.println(i);
        }
    }
    public static int[] plusOne(int[] digits) {
        int index = digits.length - 1;
        while (true) {
            if (index < 0) {
                int[] result = new int[digits.length + 1];
                for (int i = 0; i < digits.length; i++) {
                    result[i + 1] = digits[i];
                }
                result[0] = 1;
                return result;
            }
            digits[index]++;
            if (digits[index] != 10) {
                break;
            }
            digits[index] = 0;
            index--;
        }
        return digits;
    }
}