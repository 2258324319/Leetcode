class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // vector<int>& g(g_r);
        // vector<int>& s(s_r);

        int p_g = 0;
        int p_s = 0;
        int count_satis = 0;

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        while(p_g<g.size() && p_s<s.size())
        {
            if(g[p_g]<=s[p_s]){
                count_satis+=1;
                p_g++;
                p_s++;
            }else{
                p_s++;
            }
        }
        return count_satis;
    }



};