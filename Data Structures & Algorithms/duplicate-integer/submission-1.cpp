class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>st;
        for(int i =0 ; i< nums.size(); i++){
            if(!st.empty()){
                if(st.find(nums[i]) != st.end()){
                    return true;
                }
                else{
                    st.insert(nums[i]);
                }
            }else{
                st.insert(nums[i]);
            }
        }
        return false;
    }
};