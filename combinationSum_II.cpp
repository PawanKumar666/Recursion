class Solution {
    public: 
    void findCombination(int ind, int target, vector<int> &candidates,vector<vector<int>>&result,vector<int>&temp) 
    {
        if(target==0) {
            result.push_back(temp);
            return;
        }        
        for(int i = ind;i<candidates.size();i++) {
            if(i>ind && candidates[i]==candidates[i-1]) continue; 
            if(candidates[i]>target) break; 
            temp.push_back(candidates[i]);
            findCombination(i+1, target - candidates[i], candidates, result, temp); 
            temp.pop_back(); 
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result; 
        vector<int> temp; 
        findCombination(0, target, candidates, result, temp); 
        return result; 
    }
};
