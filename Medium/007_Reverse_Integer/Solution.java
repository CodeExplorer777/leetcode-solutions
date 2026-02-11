class Solution {
    public int reverse(int x) {
       int rev = 0;
       int temp = x;
       if(temp > 0){
        while(temp != 0){
            int digit = temp % 10;
                 if (rev > Integer.MAX_VALUE / 10 || 
               (rev == Integer.MAX_VALUE / 10 && digit > 7)) {
                return 0;
            }

            if (rev < Integer.MIN_VALUE / 10 || 
               (rev == Integer.MIN_VALUE / 10 && digit < -8)) {
                return 0;
            }

            rev = rev*10 + digit;
            temp = temp / 10;
        }
       }
       else if (temp<0){
        
        temp = temp * (-1);
       while(temp!=0){
            int digit = temp % 10;
                 if (rev > Integer.MAX_VALUE / 10 || 
               (rev == Integer.MAX_VALUE / 10 && digit > 7)) {
                return 0;
            }

            if (rev < Integer.MIN_VALUE / 10 || 
               (rev == Integer.MIN_VALUE / 10 && digit < -8)) {
                return 0;
            }

            rev = rev*10 + digit;
            temp = temp / 10;
        }
        rev *=-1;
       }
        return rev;
    }
}