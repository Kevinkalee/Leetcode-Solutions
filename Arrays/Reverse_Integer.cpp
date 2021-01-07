class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        int isOverflow = 0;
        int max = 2147483647;
        int min = -2147483648;
        if (x == min)
            return 0;
        
        if (x < 0){
            x = -x;
            sign = -1;
        }
        
        int result = 0;
        while (x != 0){
            int digit = x % 10;
            if (result > max / 10 || (result * 10) > (max - digit)){
                isOverflow = 1;
                break;
            }
            result = result * 10 + digit;
            x = x / 10;
        }
        if (isOverflow)
            return 0;
        return sign * result;
    }
};