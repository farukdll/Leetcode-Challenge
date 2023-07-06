class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> s;
        int ans = 0;
        for(char i : jewels){
            s.insert(i);
        }
        for(char i : stones){
            if(s.find(i)!=s.end()){ ans ++;}
        }
        return ans;
    }
};