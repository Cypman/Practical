// Testing_Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
int main() {

    // an array of strings : to store the questions and options of MCQ
    std::string questions[4];

    // an array of Characters : to store the answers (or correct options)
    char answers[4];

    // insert the questions 
    questions[0] = "Total number of countries in the world : \n(A) 190    (B) 193\n(C) 195    (D) 186\n";
    questions[1] = "Total number of continents in the world : \n(A) 10    (B) 7\n(C) 9    (D) 6\n";
    questions[2] = "Height of the Mount Everest(in ft.) : \n(A) 29,035    (B) 20,005\n(C) 26,035    (D) None\n";
    questions[3] = "When is International Women's Day celebrated ? \n(A) 20th March    (B) 8th March\n(C) 9th June    (D) 14th November\n";

    // answers
    answers[0] = 'C';
    answers[1] = 'B';
    answers[2] = 'A';
    answers[3] = 'B';

    // choose a random integer between 0-3 
    srand(time(NULL));
    int idx = rand() % 4;

    // display the question questions[idx] and prompt for the input 
    std::cout << questions[idx] << '\n';
    char ch;

    std::cout << "Input your answer (A,B,C or D): ";
    std::cin >> ch;

    // match the input with the answers[idx]
    if (ch == answers[idx]) {
        std::cout << "Correct answer!";
    }
    else {
        std::cout << "Incorrect answer : Correct option is " << answers[idx];
    }
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
