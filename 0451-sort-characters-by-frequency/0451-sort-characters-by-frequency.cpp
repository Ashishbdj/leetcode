class Solution {
public:
    string frequencySort(string s) {
        map<char,int>hash;
        string ans="";
        for(char c:s)
        {
            hash[c]+=1;
        }
        priority_queue<pair<int,char>> pq ;
        for(auto it: hash)
            pq.push({it.second,it.first});
        while(!pq.empty())
        {
         auto[c,ch]=pq.top();
         ans.append(c,ch);
         pq.pop();   
        }
        return ans;
  
    }
};