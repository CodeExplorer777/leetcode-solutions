class Solution {
    public int binaryGap(int n) {
        String binary = Integer.toBinaryString(n);
        
        int last = -1;
        int maxlen = 0;

        for(int i = 0; i < binary.length(); i++){
            if(binary.charAt(i) == '1'){
                if(last != -1){
                    maxlen = Math.max(maxlen, i - last);
                }
                last = i;
            }
        }
        return maxlen;
    }
}