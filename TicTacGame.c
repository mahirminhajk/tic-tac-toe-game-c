#include <stdio.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = '0';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main()
{
    char winner = ' ';

    resetBoard();

    return 0;
}

void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            board[i][j] = ' ';
        }
    }
}
void printBoard()
{
}
int checkFreeSpaces()
{
}
void playerMove()
{
}
void computerMove()
{
}
char checkWinner()
{
}
void printWinner(char winner)
{
}
