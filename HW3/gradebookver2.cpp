
#include <iostream> 
#include <string> 
#include <iomanip>
#include <cstring>

using namespace std;

// i thought final grades will be different but i guess not (a different void)

void mainProg();
void titleScreen();
//void gradesInput(int students);
void finalOutput();
void userRetry();
void gradeCalculation();
void letterGrade();
float progTotal, totalExam, totalFE, totalGrade;
char arr[] = {'A', 'B', 'C', 'D', 'F'};

struct Grades { 
    string firstName;
    string lastName;
    int idNum; 
    int finalExam;
    //int program[5];
    // int exam[3];
    // int finelExam;
    double pg1, pg2, pg3, pg4, pg5, e1, e2, e3, fe;
    double progTotal, totalExam, totalFE, totalGrade;
} student[5];


int main() {
    titleScreen();
    return 0;
}


void titleScreen() { 
    
    cout << "WELCOME TO THE GRADE BOOK." << endl;
    cout << "=====================================" << endl;
    cout << "Please enter 5 Students Names and Their IDs, as well as their grades." << endl;
    cout << "=====================================" << endl;
    
    mainProg();
}

void mainProg() { 

    int s;

    start: 
    for (s = 0; s < 1; s++) {
        cout << "Enter Student # " << s + 1 << " First Name here: " << endl;
        cin >> student[s].firstName;
        if (student[s].firstName.length() >= 16) {
            cout << "String is too long, please try again!" << endl;
            system("pause");
            return mainProg();
        }
        cout << "Enter student # " << s + 1 << " Last Name here: " << endl;
        cin >> student[s].lastName;
        if (student[s].lastName.length() >= 16) {
            cout << "String is too long, please try again!" << endl;
            system("pause");
            return mainProg();
        }
        cout << "Enter student # " << s + 1 << " 6 Digit ID here: " << endl;
        cin >> student[s].idNum;

        cout << "Enter 1st Program Grade: ";
        cin >> student[s].pg1;
        cout << "Enter 2nd Program Grade: ";
        cin >> student[s].pg2;
        cout << "Enter 3rd Program Grade: ";
        cin >> student[s].pg3;
        cout << "Enter 4th Program Grade: ";
        cin >> student[s].pg4;
        cout << "Enter 5th Program Grade: ";
        cin >> student[s].pg5;
        cout << "Enter 1st Exam Grade: ";
        cin >> student[s].e1;
        cout << "Enter Second Exam Grade: ";
        cin >> student[s].e2;
        cout << " Enter Third Exam Grade: ";
        cin >> student[s].e3;
        cout << "Enter Final Exam Grade: ";

        /*for (int j = 0; j < 5; j++) { 
            cout << "Program " << j + 1 << " Grades: " << endl;
            cin >> student[students].program[j];
        }

        for (int k = 0; k < 3; k++) { 
            cout << "Exam " << k + 1 << " Grades: " << endl;
            cin >> student[students].exam[k];
        }

        cout << "Final Exam Grade: " << endl;
        cin >> student[students].finalExam; */
    }  
    
    cout << setw(10);
    cout << "\t \t \t GRADE BOOK \t \t \t" << endl;
    cout << "-------" << endl;
    cout << "First Name\tLast Name\tP1\tP2\tP3\tP4\tP5\tE1\tE2\tE3\tFE\n" << endl;
    cout << fixed << setprecision(2);
        
    cout << student[s].firstName << "\t\t";
    cout << student[s].lastName << "\t\t";

    }
   /* for (int students = 0; students < 5; students++) { 
        cout << student[students].firstName << "\t\t";
        cout << student[students].lastName << "\t\t";

        for (int j = 0; j < 5; j++) { 
            cout << student[students].program[j] << "\t";
        } 

         for (int k = 0; k < 3; k++) { 
            cout << student[students].exam[k] << "\t";
        }

        cout << student[students].finalExam << endl;
        
    }*/

    cout << "\n\n";

    cout << "Final Grades: " << endl;
    gradeCalculation();
    letterGrade();

    userRetry();
}

/*void gradeCalculation() { 
    for (int students = 0; students < 1; students++) {
        for (int j = 0; j < 5; j++) {
        student[students].progTotal = student[students].program[j] / 3 * .3;
        }
        for (int k = 0; k < 3; k++) {
        student[students].totalExam = student[students].exam[k] * 0.15;
        }
        student[students].totalFE = student[students].finalExam;

        student[students].totalGrade = student[students].progTotal + student[students].totalExam + student[students].totalFE;
    }

}*/



void userRetry() {
    char ch = 'n';
    cout << "--------------------" << endl;
    cout << "Do you want to try again? [Y/N]: "; 
    cin >> ch;
    if (ch == 'Y' || ch == 'y') { 
    return mainProg();
    }
    else {
     return;
    }
}