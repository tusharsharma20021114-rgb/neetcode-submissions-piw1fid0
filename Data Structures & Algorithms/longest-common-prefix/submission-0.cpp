class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string previous = strs[0];

        for(int i = 1; i<strs.size(); i++){
            int j = 0;

            while(j<previous.size() && strs[i].size()){
                if(previous[j]!=strs[i][j]){
                    break;
                }
                j++;
            }
            previous = previous.substr(0,j);
        }
        return previous;
    }
};