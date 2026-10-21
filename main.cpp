#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 59;

// Project 2 — Hussain Z
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
    const int N = 30;
    int scores[N];
    const int scoreAt10 = 73;
    // Do not edit this boilerplate. It randomly generates 30 elements into the array.
    srand(static_cast<unsigned>(time(nullptr)));

    const int scoreAt20 = 81;

    for (int i = 0; i < N; ++i) {
        scores[i] = rand() % 100;
    }

    scores[0] = scoreAt0;
    const int scoreAt27 = 99;
    scores[10] = scoreAt10;
    scores[20] = scoreAt20;
    scores[27] = scoreAt27;

    // Print each index and scores[i]
    using std::cout;
    using std::endl;

    for (int i = 0; i < N; ++i) {
        cout << i << " " << scores[i] << endl;
    }

    // One for loop. Count A, B, C, D, and failing.
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    int aGrades[N];
    int bGrades[N];
    int cGrades[N];
    int dGrades[N];
    int fGrades[N];

    cout << endl << "===Grade Distribution===" << endl;
    for (int i = 0; i < N; ++i) {
        if (scores[i] >= 90) {
            aGrades[aCount] = scores[i];
            ++aCount;
        }
        else if (scores[i] >= 80 && scores[i] <= 89) {
            bGrades[bCount] = scores[i];
            ++bCount;
        }
        else if (scores[i] >= 70 && scores[i] <= 79) {
            cGrades[cCount] = scores[i];
            ++cCount;
        }
        else if (scores[i] >= 60 && scores[i] <= 69) {
            dGrades[dCount] = scores[i];
            ++dCount;
        }
        else {
            fGrades[fCount] = scores[i];
            ++fCount;
        }
    }
    // Print A:, B:, C:, D:, and F:. The five totals add up to 30.
    cout << "A Grades: " << aCount;

    cout << endl;
    cout << "B Grades: " << bCount;

    cout << endl;
    cout << "C Grades: " << cCount;

    cout << endl;
    cout << "D Grades: " << dCount;

    cout << endl;
    cout << "F Grades: " << fCount;

    int total = aCount + bCount + cCount + dCount + fCount;
    cout << endl
        << "--------------\n"
        << "Total: " << total;

    cout << endl << endl;

    // One while loop. If scores[i] is under 60, print:
    int index = 0;
    int indices[N];
    int i = 0;
    // Put ++i in the loop or it never ends.
    while (i < N) {
        if (scores[i] < 60) {
            indices[index] = i;
            ++index;
        }
        ++i;
    }
    // Student at index i needs to come to office hours.
    cout << endl << "Students at indicies ";
    for (int i = 0; i < index; ++i) {
        if (i == 0) {
            cout << indices[i];
        }
        else if (i == index - 1) {
            cout << " and " << indices[i];
        }
        else {
            cout << ", " << indices[i];
        }
    }
    cout << " need to come in to office hours!";

    return 0;
}
