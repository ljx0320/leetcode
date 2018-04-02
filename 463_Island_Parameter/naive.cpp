class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<int> last_row_island;
        vector<int> this_row_island;
        // neg is the number of the pair of rectangles that are adjacent
        int neg = 0;
        // pos is the number of the rectangles
        int pos = 0;
        for (int i = 0; i < grid.size(); i++) {
            
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j]==1) {
                    this_row_island.push_back(j);
                    pos++;
                }
                if (j<grid[i].size()-1 && grid[i][j] == 1 && grid[i][j+1] == 1) {
                    neg++;
                }
                if(grid[i][j]==1 && find(last_row_island.begin(),last_row_island.end(),j)!=last_row_island.end()){
                    neg++;
                }
            }
            last_row_island = this_row_island;
            this_row_island.clear();
        }
        
        return 4*pos-2*neg;
    }
};
