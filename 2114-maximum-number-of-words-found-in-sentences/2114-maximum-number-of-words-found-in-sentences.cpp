class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxword =0;
        for(int i=0;i<sentences.size();i++){
            int countword=1;
            for(char ch:sentences[i]){
                if(ch==' '){
                    countword++;
                }
               
            }
             maxword=max(maxword , countword);
            
        }
        return maxword;
    }
};