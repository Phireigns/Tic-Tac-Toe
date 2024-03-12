<h1>Basic Tic Tac Toe</h1>

<h2>Description</h2>
This project implements a playable Tic Tac Toe game. Players take turns entering their moves, and the program validates and updates the board accordingly. It checks for winning conditions and a tie after each move, and displays the final result when the game is over.

- The code starts by initializing an empty Tic Tac Toe board represented by a character array board of size 9. It also initializes the currentPlayer variable to 1, which represents the first player.
- The PrintBoard function is responsible for displaying the current state of the Tic Tac Toe board on the console.
- The IsMoveValid function checks if a move is valid by verifying that the move is within the range of 1 to 9 and the corresponding position on the board is empty.
- The IsGameOver function checks if the game is over by examining the board for winning conditions or a tie. It checks rows, columns, and diagonals for matching marks ('X' or 'O').
- The main game loop begins with a do-while loop that continues until the game is over. It follows these steps:
  <ol>
    <li>The current state of the board is printed using the PrintBoard function.</li>
    <li>The current player's mark ('X' or 'O') is determined based on the currentPlayer variable.</li>
    <li>The current player is prompted to make a move by entering a number between 1 and 9. The input is validated using the IsMoveValid function to ensure the move is within the valid range and the corresponding position on the board is empty.</li>
    <li>If the move is valid, the board is updated by placing the current player's mark at the chosen position.</li>
    <li>The IsGameOver function is called to check if the game is over. If it is, the final state of the board is printed, and the result is displayed based on the current player.</li>
    <li>Finally, the currentPlayer variable is updated to switch to the other player for the next iteration of the loop.</li>
  </ol>
- Once the game is over, the loop is broken, and the program ends.
<br />

<h2>Languages and Utilities Used</h2>

- <b>C++</b>

<h2>UI:</h2>

<p align="center">
<img src="https://imgur.com/Iqz49nZ.png" height="20%" width="20%" alt="AOS & JS"/>
<br />
</p>
<!--
 ```diff
- text in red
+ text in green
! text in orange
# text in gray
@@ text in purple (and bold)@@
```
--!>
