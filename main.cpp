//
//  main.cpp
//  cs2303-tic
//
//  Created by Phirens Rai on 19/4/2021.
//

#include <iostream>

void PrintBoard(const char* board)
{
    std::cout << board[0] << "|" << board[1] << "|" << board[2] << std::endl;
    std::cout << "-+-+-" << std::endl;
    std::cout << board[3] << "|" << board[4] << "|" << board[5] << std::endl;
    std::cout << "-+-+-" << std::endl;
    std::cout << board[6] << "|" << board[7] << "|" << board[8] << std::endl;
    std::cout << "-+-+-" << std::endl;
}

bool IsMoveValid(const char* board, int move)
{
    return (move >= 1 && move <= 9 && board[move - 1] == ' ');
}

bool IsGameOver(const char* board)
{
    // Check rows
    for (int i = 0; i < 9; i += 3)
    {
        if (board[i] != ' ' && board[i] == board[i + 1] && board[i] == board[i + 2])
            return true;
    }

    // Check columns
    for (int i = 0; i < 3; ++i)
    {
        if (board[i] != ' ' && board[i] == board[i + 3] && board[i] == board[i + 6])
            return true;
    }

    // Check diagonals
    if (board[0] != ' ' && board[0] == board[4] && board[0] == board[8])
        return true;

    if (board[2] != ' ' && board[2] == board[4] && board[2] == board[6])
        return true;

    // Check for a tie
    for (int i = 0; i < 9; ++i)
    {
        if (board[i] == ' ')
            return false;
    }

    return true;
}

int main()
{
    char board[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    int currentPlayer = 1;

    std::cout << "Tic Tac Toe Game" << std::endl;

    do
    {
        // Print the board
        PrintBoard(board);

        // Set the current player's mark
        char mark = (currentPlayer == 1) ? 'X' : 'O';

        // Prompt the current player to make a move
        int move;
        do
        {
            std::cout << "Player " << currentPlayer << "'s move (1-9): ";
            std::cin >> move;
        } while (!IsMoveValid(board, move));

        // Update the board with the current player's move
        board[move - 1] = mark;

        // Check if the game is over
        if (IsGameOver(board))
        {
            // Print the final board
            PrintBoard(board);

            // Print the result
            if (currentPlayer == 1)
                std::cout << "Player 1 wins!" << std::endl;
            else
                std::cout << "Player 2 wins!" << std::endl;

            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 1) ? 2 : 1;

    } while (true);

    return 0;
}