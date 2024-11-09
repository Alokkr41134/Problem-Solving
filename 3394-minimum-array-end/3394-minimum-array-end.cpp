class Solution {
public:
    long long minEnd(int n, int x) {
    long long  temp = x + 1;
        while (n != 1) {
            if ((temp & x) == x) { 
                n--;
                temp++;
            }
            else{
                temp|=x;
            }
        } 
return temp-1;    
    }
};