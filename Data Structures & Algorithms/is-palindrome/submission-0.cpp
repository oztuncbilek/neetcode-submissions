class Solution {
public:
    bool isPalindrome(string s) {
       string cleaned;
       
       
       for(char i:s){
           if(isalnum(i)){
                cleaned += tolower(i);
           }
        }

        string reversed = cleaned;
        reverse(reversed.begin(),reversed.end());
        
        return cleaned == reversed;
    }
};
