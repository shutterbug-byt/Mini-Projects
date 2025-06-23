# Guess The Number (C Language Mini Project)

This is a simple console-based number guessing game written in C. The program randomly selects a number between 1 and 100, and the user has to guess it in as few attempts as possible.

After each guess, the game gives you a hint to guide your next try — whether you should go **higher** or **lower**.



## Features

- Random number generation using `rand()` function
- Interactive user input and feedback
- Count of total attempts made
- Loop-based structure for repeated guessing until success
- Hint system to help narrow down guesses



## How to Play

1. Run the program
2. Enter a number between 1 and 100
3. You'll get a hint:
   - "Go higher!" if the number is too low
   - "Go lower!" if the number is too high
4. Keep guessing until you get it right!
5. The program tells you how many attempts you took to win



## How It Works

- A number is generated using `rand()` from the standard C library.
- A `while` loop checks user input against the target number.
- The attempt counter increases with each guess.
- Once guessed correctly, the game ends with a congratulatory message.



## Future Improvements

- More diverse and fun hint messages (e.g., "You're burning hot!" or "You're freezing cold!")
- Set difficulty levels (easy, medium, hard) based on range or attempts
- Timer to challenge speed



## File Structure

guess-the-number
 main.c          // Source code
 README.md       // This file
