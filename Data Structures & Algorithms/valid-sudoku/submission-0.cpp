/*
the objective is to check uniqueness in every column, row, and subBox
so, i create 3 hashset arrays, each array is the size of 9, because there are 9 rows, columns, and subBox
create a loop to iterate the 2d array
every loop we insert the number to the associating array:
j is for verticalSet index, i is for horizontalSet index, and subBoxSet index is calculated through formula
(i/3) * 3 + (j/3)
it is counted from top left to right
*/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> verticalSet(9);
        vector<unordered_set<int>> horizontalSet(9);
        vector<unordered_set<int>> subBoxSet(9);

        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                int subBoxSetIndex = (i / 3) * 3 + (j / 3);

                if(board[i][j] != '.'){
                    auto [verticalSetIterator, verticalWasInserted] = verticalSet[j].insert(board[i][j]);
                    auto [horizontalSetIterator, horizontalWasInserted] = horizontalSet[i].insert(board[i][j]);
                    auto [subBoxSetIterator, subBoxWasInserted] = subBoxSet[subBoxSetIndex].insert(board[i][j]);

                    if(!verticalWasInserted || !horizontalWasInserted || !subBoxWasInserted){
                        return false;
                    }
                }
            }
        }

        return true;
    }
};
