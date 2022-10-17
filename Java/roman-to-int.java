class Solution {
    static int namechange(char s1){
            if (s1=='I')
                return (1);
            if (s1=='V')
                return (5);
            if (s1=='X')
                return (10);
            if (s1=='L')
                return (50);
            if (s1=='C')
                return (100);
            if (s1=='D')
                return (500);
            if (s1=='M')
                return (1000);
            return (0);
        }
    public int romanToInt(String s) {
      
        
        int lenS=s.length();
        int last=namechange(s.charAt(lenS-1));
        int ans=namechange(s.charAt(lenS-1));
        for (int i=lenS-2;i>=0;i--){
            int a=namechange(s.charAt(i));
            if (a>=last)
                ans+=a;
            else
                ans-=a;
            last=a;
        }
        
        return (ans);
        
    }
}
