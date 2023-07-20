class Solution {
public:
    string toLowerCase(string s) {
        for(int i =0;i<s.size();i++)
        {
            if(s[i] >= 'A' & s[i] <= 'Z')
                s[i] = s[i] - 'A' + 'a';
        }
        return s;
    }
};

/*
    For the word LOVELY 
    
   L ==> s[i] = s[i] - 'A' + 'a';  // 0 = 76 - 65 + 97 = 108 => l
   
*/