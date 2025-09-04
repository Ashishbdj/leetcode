class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size();
        int l=0,r=9;
        vector<string>ans;
        unordered_map<string,int>hash;
        while(r<n)
        {
            string str = s.substr(l,10);
            hash[str]+=1;
            r++;
            l++;
        }
        for(auto it : hash)
        {
            if(it.second>1)
            ans.push_back(it.first);
        }
    return ans;
    }
};