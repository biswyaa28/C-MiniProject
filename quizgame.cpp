#include <iostream>
using namespace std;

struct Question {
    string question;
    string options[4];
    char correctAnswer;
    int points;
};

void startQuiz(Question q[], int size) {
    int score = 0;
    int totalPossible = 0;
    char userAnswer;

    for (int i = 0; i < size; i++) {
        cout << "\nQuestion " << i + 1 << ": " << q[i].question << " (" << q[i].points << " pts)" << endl;

        for (int j = 0; j < 4; j++) {
            cout << q[i].options[j] << endl;
        }

        cout << "Enter your answer (A/B/C/D): ";
        cin >> userAnswer;

        if (toupper(userAnswer) == q[i].correctAnswer) {
            cout << "Correct!\n";
            score += q[i].points;
        } else {
            cout << "Wrong! Correct answer is " << q[i].correctAnswer << endl;
        }
        totalPossible += q[i].points;
    }

    cout << "\nYour final score: " << score << " / " << totalPossible << endl;

    if (score >= 20) {
        cout << "Great job!" << endl;
    } else {
        cout << "Better luck next time." << endl;
    }
}

int main() {
    Question quiz[3] = {
        { "What is the capital of India?", {"A. Mumbai", "B. New Delhi", "C. Kolkata", "D. Chennai"}, 'B', 10 },
        { "Which language is used for system programming?", {"A. Python", "B. Java", "C. C++", "D. HTML"}, 'C', 10 },
        { "Which symbol is used for comments in C++?", {"A. /* */", "B. #", "C. //", "D. "}, 'C', 10 }
    };

    cout << "===== Welcome to the Quiz Game =====\n";
    startQuiz(quiz, 3);

    return 0;
}
