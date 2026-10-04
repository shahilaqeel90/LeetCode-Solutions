class Solution {
public:
    bool checkIfPangram(string sentence) {
       unordered_set<char> unique_chars(sentence.begin(),sentence.end());
        return unique_chars.size()==26;
       

    }
};
