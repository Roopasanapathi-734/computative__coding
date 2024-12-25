class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        int k=p.length();
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        vector<int>ans;
        for(int i=0;i<k;i++){
            mp1[p[i]]++;
        }
        int i=0;
        int j=0;
        while(j<n)
        {
            if(j-i+1<k)
            {

                mp2[s[j]]++;
                j++;
            }
            else
            {
                mp2[s[j]]++;
                if(mp1==mp2)
                {
                    ans.push_back(i);
                }
                mp2[s[i]]--;
                if(mp2[s[i]]==0)
                {
                    mp2.erase(s[i]);
                }
                i++;
                j++;
            }
        }
        return ans;

        
        
    }
};