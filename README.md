# CodeAlpha Tasks

This repository contains three C++ projects completed as part of CodeAlpha tasks.

## Projects

### 1. CGPA Calculator (Task 1)
A console application that calculates GPA based on course grades and credit hours.

**Location:** `cgpa-calculator-task1/`

**Features:**
- Input number of courses
- Enter grade points (0-4) and credit hours for each course
- Calculates and displays total credits and GPA
- Input validation for invalid entries

**How to run:**
```bash
cd cgpa-calculator-task1
./cgpa-calculator-task1.exe
```

### 2. Login System (Task 2)
A simple user authentication system with registration and login functionality.

**Location:** `login-system-task2/`

**Features:**
- User registration
- User login
- Password verification
- Data stored in `users.txt`

**How to run:**
```bash
cd login-system-task2
./login-system-task2.exe
```

### 3. Sudoku Solver (Task 3)
A program that solves Sudoku puzzles using backtracking algorithm.

**Location:** `sudoku-solver-task3/`

**Features:**
- 9x9 Sudoku grid representation
- Backtracking algorithm to solve the puzzle
- Validates row, column, and 3x3 subgrid constraints
- Displays original puzzle and solved solution

### 4. Banking System (Task 4)
A basic banking application for managing accounts.

**Location:** `banking-system-task4/`

**Features:**
- Create new accounts
- Deposit money
- Withdraw money
- Check balance
- Account data stored in `accounts.txt`

**How to run:**
```bash
cd banking-system-task4
./banking-system-task4.exe
```

## Requirements
- MinGW GCC compiler
- Windows OS

## Build Instructions
Each project can be built using:
```bash
g++ <filename>.cpp -o <filename>.exe
```

## Repository Structure
```
codealpha_tasks/
├── cgpa-calculator-task1/
│   ├── cgpa-calculator-task1.cpp
│   ├── cgpa-calculator-task1.exe
│   ├── .github/
│   ├── .vscode/
│   └── build/
├── login-system-task2/
│   ├── login-system-task2.cpp
│   ├── login-system-task2.exe
│   └── users.txt
├── sudoku-solver-task3/
│   ├── sudoku-solver-task3.cpp
│   └── sudoku-solver-task3.exe
└── banking-system-task4/
    ├── banking-system-task4.cpp
    ├── banking-system-task4.exe
    └── accounts.txt
```