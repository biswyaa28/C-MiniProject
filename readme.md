# C++ Quiz Game

A console-based multiple-choice quiz game built with C++. Perfect for beginners learning about structures, arrays, and functions.

## 📋 Features

- Multiple-choice questions (A/B/C/D format)
- Score calculation with points per question
- Immediate answer feedback
- Case-insensitive input handling
- Performance evaluation at the end

## 🚀 Getting Started

### Compilation

```bash
g++ quiz.cpp -o quiz
./quiz
```

### Sample Questions

1. Capital of India (Geography)
2. System programming language (Computer Science)
3. C++ comment syntax (Programming)

## 🎮 How to Play

1. Run the program
2. Read each question and options
3. Enter A, B, C, or D as your answer
4. Get immediate feedback
5. View your final score

## 📁 Code Structure

```cpp
struct Question {
    string question;
    string options[4];
    char correctAnswer;
    int points;
};
```

## 🔧 Customization

Edit the `quiz` array in `main()` to add your own questions:

```cpp
Question quiz[] = {
    { "Your question here?",
      {"A. Option1", "B. Option2", "C. Option3", "D. Option4"},
      'C',  // Correct answer
      10 }, // Points
    // Add more questions...
};
```

## 📈 Scoring

- Each question: 10 points
- Total possible: 30 points
- Evaluation:
  - ≥20 points: "Great job!"
  - <20 points: "Better luck next time."

## 💡 Learning Outcomes

- C++ structures and arrays
- Function implementation
- Control flow (loops/conditionals)
- Basic input/output operations

## 🔄 Potential Improvements

- Add more questions
- Read questions from file
- Add timer feature
- Implement difficulty levels
- Create categories
- Add input validation

## 📝 Note

This is an educational project created to practice C++ fundamentals. Feel free to modify and extend it for your learning purposes.
