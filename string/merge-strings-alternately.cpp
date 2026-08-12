class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int pointer = 0;
        string result = "";
        
        while(pointer < word1.length() && pointer < word2.length()){
            result= result + word1[pointer] + word2[pointer];
            pointer++;
        }
        while(pointer < word1.length()){
            result= result + word1[pointer];
            pointer++;
        }
        while(pointer < word2.length()){
            result= result + word2[pointer];
            pointer++;
        }
        return result;
    }
};