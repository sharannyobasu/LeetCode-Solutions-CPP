class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        map<int, bool>visited;
        queue<int>q;
        q.push(0);
        visited[0]=true;
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            for(auto it:rooms[curr])
            {
                if(!visited[it])
                {
                    q.push(it);
                    visited[it]=true;
                }
            }
        }
        
        for(int i=0;i<rooms.size();i++)
        {
            
            if(!visited[i])
            {
                return false;
            }
        }
        return true;
    }
};
