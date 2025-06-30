class Solution {
public:
    vector<pair<int,int>> v = {{1,0},{-1,0},{0,1},{0,-1}};
    int n,m;
    bool vis[505][505];
    bool valid( int i, int j)
    {
        if( i <0 || i>=n || j <0 || j>=m)
            return false;
        else

            return true;
    }
    void dfs(vector<vector<int>>& grid, int sr,int sc)
    {
        vis[sr][sc] = true;
        grid[sr][sc] = 0;
        for( int i = 0; i<4; i++)
        {
            int ci = sr+ v[i].first;
            int cj = sc + v[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]==1)
            {
                dfs(grid,ci,cj);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        memset(vis,false,sizeof(vis));
        for( int i = 0; i<n; i++)
        {
            for( int j = 0; j<m; j++)
            {
                if((i == 0 || i==n-1 || j==0 || j==m-1) && grid[i][j]==1 && !vis[i][j])
                {
                    dfs(grid,i,j);
                }
            }
        }
        int cnt = 0;
        for( int  i = 0; i<n; i++)
        {
            for( int j = 0; j<m; j++)
            {
                if(grid[i][j]==1)
                    cnt++;
            }
        }
        return cnt;
        
    }
};