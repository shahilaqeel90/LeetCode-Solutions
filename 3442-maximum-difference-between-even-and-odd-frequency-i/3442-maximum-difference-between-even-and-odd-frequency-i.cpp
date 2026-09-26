class Solution {
public:
    int maxDifference(string s) {
        int freq[26]={0};
        for(char ch:s){
            freq[ch-'a']++;
        }
        int maxodd=0;
        int mineven=100;
        for(int i=0;i<26;i++){
            if(freq[i]%2==1){
                maxodd=max(maxodd,freq[i]);
            }
            else if(freq[i]>0){
                mineven=min(mineven,freq[i]);
            }

        }
        return maxodd-mineven;
    }
};