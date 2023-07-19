class Solution {
public:
    int hammingWeight(uint32_t n) {
        int tmp = 0;
        while (n != 0)
        {
            tmp += (n%2);
            n >>= 1; 
        }
        return tmp;
    }
};

/*
    n >>= 1; ---> We shift the value of the variable n one bit to the right.
*/