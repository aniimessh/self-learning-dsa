#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int value, int board[][9], int i, int j){
    // row check
    for(int col=0;col<9;col++){
        if(board[i][col] == value){
            return false;
        }
    }
    // col check
    for(int row=0;row<9;row++){
        if(board[row][j] == value){
            return false;
        }
    }

    // 3x3 board
    for(int k=0;k<9;k++){
        if(board[3*(i/3) + (k/3)][3*(j/3) + (k%3)] == value){
            return false;
        }
    }
    return true;
}

bool solve(int board[][9], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // check for empty cell
            if(board[i][j] == 0){
                for(int value=1;value<=9;value++){
                    if(isSafe(value, board, i, j)){
                        board[i][j] = value;
                        bool solution = solve(board, n);
                        if(solution) return true;
                        board[i][j] = 0;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    int board[9][9] ={
        {4,5,0,0,0,0,0,0,0},
        {0,0,2,0,7,0,6,3,0},
        {0,0,0,0,0,0,0,2,8},
        {0,0,0,9,5,0,0,0,0},
        {0,8,6,0,0,0,2,0,0},
        {0,2,0,6,0,0,7,5,0},
        {0,0,0,0,0,0,4,7,6},
        {0,7,0,0,4,5,0,0,0},
        {0,0,8,0,0,9,0,0,0},
    };
    int n = 9;
    solve(board, n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}