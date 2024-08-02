# Tic-Tac-Toe Game in C

This repository contains a simple implementation of the Tic-Tac-Toe game in C. The game allows a player to play against the computer, with the player using 'X' and the computer using 'O'.

## Features

- Play against the computer.
- Simple command-line interface.
- Basic game logic including player and computer moves.
- Determines the winner or a tie.

## How to Run

1. **Compile the code:**

   Use a C compiler like `gcc` to compile the code. In your terminal, run:

   ```bash
   gcc -o tic_tac_toe tic_tac_toe.c
   ```
  Replace `tic_tac_toe.c` with the name of your C source file if different.

2. **Run the executable:**
   ```bash
   ./tic_tac_toe
   ```
   Follow the prompts to play the game.

## Code Overview
- `main()`: Entry point of the program. Manages game flow, including player and computer moves.
- `resetBoard()`: Initializes the game board to empty spaces.
- `printBoard()`: Prints the current state of the game board.
- `checkFreeSpaces()`: Checks the number of available spaces on the board.
- `playerMove()`: Handles player input and updates the board.
- `computerMove()`: Handles computer's move with random placement.
- `checkWinner()`: Checks for a winner or a tie.
- `printWinner()`: Displays the result of the game.

## Notes
- The computer's moves are randomized and not based on any advanced algorithms.
- The game is played in the terminal with input prompts for row and column numbers.
   
