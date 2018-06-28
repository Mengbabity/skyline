class Solution {
public:
    vector<pair<int, int>> getSkyline(vector<vector<int>>& buildings) {
        int n=buildings.size();
        if(n==0)
            return {};
        
        vector<pair<int,int>> res;
        priority_queue<pair<int,int>> live;
        int i=0;
        int x=0,h=0;
        
        while(i<n || !live.empty())
        {
            if(live.empty())
                x=buildings[i][0];
            else
                x=live.top().second;
            
            if(i>=n || buildings[i][0]>x)
            {
                while(!live.empty() && live.top().second<=x)
                    live.pop();               
            }
            else
            {
                x=buildings[i][0];
                while(i<n && buildings[i][0]==x)
                {
                    live.push(make_pair(buildings[i][2],buildings[i][1]));
                    i++;
                }
            }
            
            if(!live.empty())
            {
                h=live.top().first;
            }
            else
                h=0;
            
            if(res.empty() || res.back().second!=h)
                res.push_back(make_pair(x,h));
        }
        
        return res;
    }
};
