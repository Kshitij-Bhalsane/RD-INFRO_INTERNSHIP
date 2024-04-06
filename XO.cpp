#include <iostream>
#include <vector>

using namespace std;

void displayBoard(const vector<vector<char>>& board) 
{
    cout << "  0 1 2" << endl;
    for (int i = 0; i < 3; ++i) 
    {
        cout << i << " ";
        for (int j = 0; j < 3; ++j) 
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool updateBoard(vector<vector<char>>& board, int row, int col, char player) 
{
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != '-') 
    {
        return false;
    }
    board[row][col] = player;
    return true;
}

bool Win(const vector<vector<char>>& board, char player) 
{
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) 
        {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) 
    {
        return true;
    }
    return false;
}

bool Draw(const vector<vector<char>>& board) 
{
    
    for (const auto& row : board) 
    {
        for (char cell : row) 
        {
            if (cell == '-') 
            {
                return false;
            }
        }
    }
    return true;
}

void switchPlayers(char& currplayer) 
{
    currplayer = (currplayer == 'X') ? 'O' : 'X';
}

void displayResult(char winner) 
{
    cout << "Player " << winner << " wins!" << endl;
}

bool playAgain() 
{
    char choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    return (choice == 'y' || choice == 'Y');
}

int main() 
{
    char currplayer = 'X';
    vector<vector<char>> board(3, vector<char>(3, '-'));

    do 
    {
        displayBoard(board);

        
        int row, col;
        cout << "Player " << currplayer << ", enter your move (row and column): ";
        cin >> row >> col;


        if (updateBoard(board, row, col, currplayer)) 
        {
           
            if (Win(board, currplayer)) 
            {
                displayBoard(board);
                displayResult(currplayer);
                break;
            }
            
            if (Draw(board)) 
            {
                displayBoard(board);
                cout << "It's a draw!" << endl;
                break;
            }
            
            switchPlayers(currplayer);
        } 
        else 
        {
            cout << "Invalid move. Try again." << endl;
        }

    } while (true);

    if (playAgain()) 
    {
        main();
    }

    return 0;
}

