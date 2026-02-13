class Solution {
    public int lengthOfLastWord(String s) {
        String [] st = s.split(" ");
        int len = st.length;
           return st[len].length ;
    }
}