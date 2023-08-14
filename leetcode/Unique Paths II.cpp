class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
      int row = g.size();
      int col = g[0].size();
      if(g[0][0]) return 0;
      g[0][0] = 1;

      for(int i=1; i<col; i++){
        if(g[0][i] == 1){
          g[0][i] = 0;
        }else{
          g[0][i] = g[0][i-1];
        }
      }

      for(int i=1; i<row; i++){
        if(g[i][0] == 1){
          g[i][0] = 0;
        }else{
          g[i][0] = g[i-1][0];
        }
      }

      for(int i=1; i<row; i++){
        for(int j=1; j<col; j++){    
          if(g[i][j]){
            g[i][j] = 0;
          }else{
            g[i][j] = g[i-1][j] + g[i][j-1];
          }
        }
      }

      return g[row-1][col-1];
    }
};
