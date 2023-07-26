class Solution {
public:
    int countDigits(int num) {
        int tmp = num;
        int i = 0;
        
        while (num > 0)
        {
            int nbr = 0;
            nbr = num % 10;
            if (tmp % nbr == 0)
                i++;
            num /= 10;
        }
        return i;
    }
};
