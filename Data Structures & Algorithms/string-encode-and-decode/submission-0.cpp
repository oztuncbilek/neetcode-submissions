class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        
        for(const string& word : strs){
        
        encoded += to_string(word.size());
        encoded.push_back('#');
        encoded += word;

        }

        return encoded;

    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i= 0;


        while (i< s.size()){
            int j= i;
           
           while(s[j] != '#'){
            j++;
           }

           int lenght = stoi(s.substr(i, j-i));
           string word = s.substr(j+1, lenght);
           decoded.push_back(word);
           i = j+1+lenght;


        }
    return decoded;

    }
};
