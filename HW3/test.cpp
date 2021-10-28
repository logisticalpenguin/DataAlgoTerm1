#include<iostream>
#include <string>
using namespace std;

struct Students{
    string fname;
    string lname;
    char ID[6]; 
    int programs[5];
    int exam[3];
    int finexam;
    char fingrade;
}students[10];

/* Char Grading*/
char grading(float fingrade){
    if (fingrade < 60) return 'F'; // Below 60
    if (fingrade < 70) return 'D'; // 69 - 60
    if (fingrade < 80) return 'C'; // 79 - 70
    if (fingrade < 90) return 'B'; // 89 - 80
    return 'A'; // 90+
}

/* Main program */
int main() {
    /* User Input */
    for (int i = 0; i < 1; i++){
        float programAvg = 0;
        float examAvg = 0;
        float finexamAvg = 0  ;

        cout << "\n**************\n";
        cout << "Student #" << i + 1 << ":\n\n";

        cout << "First Name: "; cin >> students[i].fname;
        cout << "Last Name: "; cin >> students[i].lname;
        cout << "6-Digit ID: "; cin >> students[i].ID;

        cout << "\nProgram Grades: \n";
        for (int j = 0; j < 5; j++){
            cout << "Program #" << j + 1 << ": "; cin >> students[i].programs[j];
            programAvg += (float)students[i].programs[j];
        }

        // Programs computation
        programAvg /= 5;
        programAvg *= 0.3;

        cout << "\nExam Grades: \n";
        for (int j = 0; j < 3; j++){
             cout << "Exam #" << j + 1 << ": "; cin >> students[i].exam[j];
             examAvg += ((float)students[i].exam[j] * 0.15);
        }

        cout << "Final Exam Grade: "; cin >> students[i].finexam;
        finexamAvg = students[i].finexam * 0.25;

        //Final grading
        students[i].fingrade = grading(programAvg + examAvg + finexamAvg);
    }


    /* Output */
    cout << "First Name\tLast Name\t\tP1\tP2\tP3\tP4\tP5\tQ1\tQ2\tQ3\tExam\n";
    for (int i = 0; i < 1; i++){
        cout << students[i].fname << "\t\t";
        cout << students[i].lname << "\t\t";

        for (int j = 0; j < 5; j++){
            cout << students[i].programs[j] << "\t";
        }

        for (int j = 0; j < 3; j++){
             cout << students[i].exam[j] << "\t";
        }

        cout << students[i].finexam << endl;
    }

    cout << "\n\n";

    for (int i = 0; i < 1; i++){
        cout << students[i].fname << "\t\t";
        cout << students[i].lname << "\t\t";
        cout << students[i].fingrade << endl;
    }

    /* Program Exit */
    cout << "\n\n...Press any key to exit...";
    system("pause>0");
}