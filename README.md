# README - Motus Game

## Application Overview
The Motus game is a French word-guessing game where players must guess a word within a limited number of attempts. This implementation was developed in C++ with Qt/QML and features French vocabulary.

**Main Features:**
- Simple graphical interface
- French word dictionary
- Support for words of different lengths (3 to 8 letters)
- Color-coded hint system (green, orange, gray)
- Help function to reveal random letters
- Timer to measure gameplay time

## Project Structure
The application is structured according to the following model:

```
Jeu_motus/
├── CMakeLists.txt       # Build configuration
├── main.cpp             # Program entry point
├── game.h/cpp           # Main game logic (Controller)
├── dictionary.h/cpp     # Dictionary manager (Model)
├── timer.h/cpp          # Timer management
├── Main.qml             # Main QML component
├── HomeScreen.qml       # Home screen
├── GameScreen.qml       # Game interface
└── dictionnaire.txt     # French words database
```

## Main Classes

### Game (game.h/cpp)
This class is the heart of the game, managing all gameplay logic:

**Features:**
- Game initialization: Setting up a new game, selecting a random word
- Attempt verification: Analyzing player guesses and assigning colors
- Game state: Tracking attempts, win/loss, score
- Virtual keyboard management: Updating key states
- Help features: Revealing random letters

**Key Methods:**
- `startNewGame()`: Initializes a new game
- `checkGuess()`: Evaluates an attempt and returns the status of each letter
- `keyPressed()`/`enterPressed()`/`backspacePressed()`: Handles user input
- `revealRandomLetter()`: Help function to reveal a letter

### Dictionary (dictionary.h/cpp)
This class manages the word dictionary:
- Loading the dictionary file
- Filtering by word length
- Verifying word existence

### Timer (timer.h/cpp)
Manages the game timer:
- Starting/stopping/resetting the timer
- Converting and formatting elapsed time

## User Interface
The user interface is developed in QML and includes:

**HomeScreen.qml:**
- Main menu with options to start a new game, view rules, or quit

**GameScreen.qml:**
- Game grid displaying previous attempts and their results
- Virtual keyboard with color updates based on letters already tried
- Word length selector
- Help banner to reveal a letter
- Timer display
- ? button to view rules

## Game Rules
- The first letter of the word is given
- The player must guess the word in a maximum of 6 attempts
- After each attempt, letters are colored:
  - **Green:** The letter is correct and in the right position
  - **Orange:** The letter is in the word but in the wrong position
  - **Gray:** The letter is not in the word
- Words may contain repeated letters
- Accents are not taken into account
