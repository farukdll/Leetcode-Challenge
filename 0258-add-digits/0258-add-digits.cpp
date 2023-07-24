class Solution {
public:
    int addDigits(int num) {        
        if (num < 10)
            return num;
        
        int tmp = 0;
        while (num >= 10)
        {
            while (num)
            {
                tmp += num % 10;
                num /= 10;
            }
            num = tmp;
            tmp = 0;
        }
        return num;
    }
};