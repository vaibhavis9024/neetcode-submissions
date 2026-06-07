class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<int>> cset, block;
        for (int r=0; r<9; r++){
            unordered_set<int> rset;
            for(int c=0; c<9; c++){
                int b=(r/3)*3 +(c/3);
                if (board[r][c]=='.') continue;
                else if(rset.contains(board[r][c]) ||cset[c].contains(board[r][c]) || block[b].contains(board[r][c])){
                    return false;
                }
                else{
                    rset.insert(board[r][c]);
                    cset[c].insert(board[r][c]);
                    block[b].insert(board[r][c]);
                }

            }
        }
        return true;

    }
};
