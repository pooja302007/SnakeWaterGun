### Snake, Water, Gun Game

This project is a basic implementation of the "Snake, Water, Gun" game in C. The game is a simple, interactive console application where the user plays against the computer. Here's a summary of how it works:

#### Game Overview
- *Objective:* The game pits the user against the computer in a simple competition where the user chooses one of three options: Snake, Water, or Gun. The computer randomly selects one of these options, and the winner is determined based on the following rules:
  - Snake beats Water.
  - Water beats Gun.
  - Gun beats Snake.

#### Features
- *Random Number Generator:* The computer's choice is generated using a random number generator to ensure unpredictability.
- *User Input:* The user inputs their choice, and the program compares it with the computer's choice.
- *Win/Loss Determination:* The program evaluates the choices and announces the winner for each round.

#### How to Play
1. *Run the Program:* Compile and run the SnakeWaterGun.c file.
2. *Make Your Choice:* Input your choice of Snake, Water, or Gun.
3. *Computer's Choice:* The computer will randomly select its option.
4. *Results:* The game will display the result of the round, indicating whether you won, lost, or tied.

#### Code Explanation
- *Main Logic:* The core logic of the game is implemented in the main function, where user input is processed, and the winner is determined based on the rules.
- *Random Number Generation:* The rand() function is used to generate the computer's choice, providing a different outcome each time the game is played.
- *User Interface:* The game runs in the console, providing a simple text-based interface for user interaction.

#### How to Compile
To compile and run the game, use the following command in your terminal or command prompt:
bash
gcc -o SnakeWaterGun SnakeWaterGun.c
./SnakeWaterGun

#### License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

#### Feedback
If you have any feedback or suggestions for improvement, please feel free to reach out to me. Your input is greatly appreciated and will help improve this project.

#### Author
This project was created by [Your Name](https://www.linkedin.com/in/your-profile-link
