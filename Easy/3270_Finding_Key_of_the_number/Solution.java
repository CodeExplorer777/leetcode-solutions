class Solution {
    public int generateKey(int num1, int num2, int num3) {
               String[] nums = {
            String.valueOf(num1),
            String.valueOf(num2),
            String.valueOf(num3)
        };

        // Pad to 4 digits
        for (int i = 0; i < nums.length; i++) {
            while (nums[i].length() < 4) {
                nums[i] = "0" + nums[i];
            }
        }

        StringBuilder result = new StringBuilder();

        // Find minimum digit column-wise
        for (int j = 0; j < 4; j++) {
            char minChar = nums[0].charAt(j);

            for (int i = 1; i < nums.length; i++) {
                if (nums[i].charAt(j) < minChar) {
                    minChar = nums[i].charAt(j);
                }
            }

            result.append(minChar);
        }

        return Integer.parseInt(result.toString());
    }
    
}