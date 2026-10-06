class Solution {
public:
    void bfs(vector<vector<int>>& adj,vector<int>& visited, int i){
        queue<int> q;
        visited[i]=1;
        q.push(i);
        while(!q.empty()){
            int j=q.front();
            q.pop();
            for(auto c:adj[j]){
                if(visited[c]== -1){
                    q.push(c);
                    visited[c]=1;
                }
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        int count=0;
        vector<vector<int>> adj(n);
        for(auto c: edges){
            adj[c[0]].push_back(c[1]);
            adj[c[1]].push_back(c[0]);
        }
        vector<int> visited(n,-1);
        for(int i=0;i<n;i++){
            if(visited[i]== -1){
                bfs(adj,visited,i);
                count++;
            }
        }

        return count;


    }
};
