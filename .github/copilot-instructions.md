# AI Coding Guidelines for CGPA Calculator Project

## Project Overview
This is a simple C++ console application that calculates GPA based on course grades and credit hours. The codebase consists of a single source file with procedural code.

## Build and Run
- **Compiler**: MinGW GCC (g++) on Windows
- **Build Output**: `build/Debug/outDebug`
- **Debug**: Use VS Code's C/C++ Runner extension with gdb
- **Command**: Extension handles compilation automatically; equivalent to `g++ cgpa-calculator-task1.cpp -o build/Debug/outDebug`

## Code Patterns
- **Arrays**: Uses `std::vector` for dynamic arrays like `vector<float> grades(n);` instead of variable-length arrays
- **I/O**: Direct `cin/cout` with minimal formatting; uses `fixed << setprecision(2)` for GPA output
- **Includes**: `<iostream>`, `<iomanip>`, `<vector>`, and `<limits>`; `using namespace std;`
- **Error Handling**: Basic input validation with loops for invalid entries (e.g., non-numeric, out-of-range); checks for division by zero
- **No Classes**: Pure procedural style with single `main()` function

## Key Files
- `cgpa-calculator-task1.cpp`: Main program logic
- `.vscode/settings.json`: C/C++ Runner configuration with warning flags
- `build/Debug/`: Build artifacts directory

## Development Notes
- Input format: number of courses, then pairs of grade points (0-4) and credit hours
- Output: Total credits and calculated GPA with 2 decimal places
- No unit tests or modular structure; all logic in main()</content>
<parameter name="filePath">d:\codealpha\codealpha_tasks\.github\copilot-instructions.md