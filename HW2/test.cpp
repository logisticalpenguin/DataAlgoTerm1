#include <iostream>
#include <iomanip>

using namespace std;

string evalGrade(double grade) {

    string result;

    if (grade >= 99) result = "A+";
    else if (grade >= 95 && grade <= 98.99) result = "A";
    else if (grade >= 93 && grade <= 94.99) result = "A-";

    else if (grade >= 90 && grade <= 92.99) result = "B+";
    else if (grade >= 87 && grade <= 89.99) result = "B";
    else if (grade >= 85 && grade <= 86.99) result = "B-";

    else if (grade >= 82 && grade <= 84.99) result = "C+";
    else if (grade >= 79 && grade <= 81.99) result = "C";
    else if (grade >= 77 && grade <= 78.99) result = "C-";

    else if (grade >= 75 && grade <= 76.99) result = "D+";
    else if (grade >= 72 && grade <= 74.99) result = "D";
    else if (grade >= 70 && grade <= 71.99) result = "D-";

    else result = "F";

    return result;
}

int main() {

    double grades[100] = {},
        gradeSum,
        average;
    
    int counter = 0;
    bool process = true;



    cout << fixed << showpoint << setprecision(2);

    do {
        double input;
        cout << "Enter your subject's grade: "; cin >> input;

        if (input >= 0 && input <= 100) {
            grades[counter] += input;
            counter = counter + 1;

        }

        else if (input == 999) {
            process = false;
            
            gradeSum = 0;

            for (int i = 0; i < counter; i++) {
                gradeSum += grades[i];
            }

            for (int i = 0; i < counter; i++) {
                cout << "Grade " << i << ": " << grades[i] << endl;
            }

            average = gradeSum / counter;

            cout << "Average = " << average << " | " << evalGrade(average) << endl;

        }
        else {
            cerr << "Invalid input!" << endl;
        }

    } while (process);

    return 0;
}