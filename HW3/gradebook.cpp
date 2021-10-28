#include <iostream> 
#include <string> 
#include <iomanip>


using namespace std; 

void mainProg();
void gradeCalc();
void inputCheck();
void userRetry();
void titleScreen();
void gradeInput(int fiveStudents);
void finalOutput();
int gradesProg[5];
int gradesExam[3];
int gradesFinal[1];

struct Grades {
    string firstName;
    string lastName;
    int idNum;
    int program[5];
    int exam[3];
    int finalExam[1];
    int totalGrade;
} student[5];

int main () { 
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
    int fiveStudents;

    for (int fiveStudents = 1; fiveStudents < 5; fiveStudents++) {
        switch (fiveStudents) { 
            case 1: { 
                cout << "Student #1: " << endl;
                cout << "First Name: " << endl;
                cin >> student[fiveStudents].firstName;
                cout << "Last Name: " << endl;
                cin >> student[fiveStudents].lastName;
                cout << "ID Number: " << endl;
                cin >> student[fiveStudents].idNum;
                gradeInput(fiveStudents);
            }
            break;
            case 2: { 
                cout << "Enter Student #2's First Name: " << endl;
                cin >> student[fiveStudents].firstName;
                cout << "Enter Student #2's Last Name: " << endl;
                cin >> student[fiveStudents].lastName;
                cout << "Enter Student #2's ID Number: " << endl;
                cin >> student[fiveStudents].idNum;
                gradeInput(fiveStudents);
            }
            break;
            case 3: { 
                cout << "Enter Student #3's First Name: " << endl;
                cin >> student[fiveStudents].firstName;
                cout << "Enter Student #3's Last Name: " << endl;
                cin >> student[fiveStudents].lastName;
                cout << "Enter Student #3's ID Number: " << endl;
                cin >> student[fiveStudents].idNum;
                gradeInput(fiveStudents);
            }
            break;
            case 4: {
                cout << "Enter Student #4's First Name: " << endl;
                cin >> student[fiveStudents].firstName;
                cout << "Enter Student #4's Last Name: " << endl;
                cin >> student[fiveStudents].lastName;
                cout << "Enter Student #4's ID Number: " << endl;
                cin >> student[fiveStudents].idNum;
                gradeInput(fiveStudents);
            }
            break;
            case 5: { 
                cout << "Enter Student #5's First Name: " << endl;
                cin >> student[fiveStudents].firstName;
                cout << "Enter Student #5's Last Name: " << endl;
                cin >> student[fiveStudents].lastName;
                cout << "Enter Student #5's ID Number: " << endl;
                cin >> student[fiveStudents].idNum;
                gradeInput(fiveStudents);
            }
        }
    }
    finalOutput();
}

void gradeInput(int fiveStudents) { 

    for (int j = 1; j <= 5; j++) { 
        cout << "Enter your 5 Grades per Program: " << j << ", Grades: " << endl;
        cin >> gradesProg[j];

        switch (fiveStudents) { 
            case 1: {
                student[fiveStudents].program[1] = gradesProg[1];
                student[fiveStudents].program[2] = gradesProg[2];
                student[fiveStudents].program[3] = gradesProg[3];
                student[fiveStudents].program[4] = gradesProg[4];
                student[fiveStudents].program[5] = gradesProg[5];
            }
            break;  
            case 2: { 
                student[fiveStudents].program[1] = gradesProg[1];
                student[fiveStudents].program[2] = gradesProg[2];
                student[fiveStudents].program[3] = gradesProg[3];
                student[fiveStudents].program[4] = gradesProg[4];
                student[fiveStudents].program[5] = gradesProg[5];
            }
            break;
            case 3: { 
                student[fiveStudents].program[1] = gradesProg[1];
                student[fiveStudents].program[2] = gradesProg[2];
                student[fiveStudents].program[3] = gradesProg[3];
                student[fiveStudents].program[4] = gradesProg[4];
                student[fiveStudents].program[5] = gradesProg[5];
            }
            case 4: { 
                student[fiveStudents].program[1] = gradesProg[1];
                student[fiveStudents].program[2] = gradesProg[2];
                student[fiveStudents].program[3] = gradesProg[3];
                student[fiveStudents].program[4] = gradesProg[4];
                student[fiveStudents].program[5] = gradesProg[5];
            }
            break;
            case 5: { 
                student[fiveStudents].program[1] = gradesProg[1];
                student[fiveStudents].program[2] = gradesProg[2];
                student[fiveStudents].program[3] = gradesProg[3];
                student[fiveStudents].program[4] = gradesProg[4];
                student[fiveStudents].program[5] = gradesProg[5];
            }
            break;
            default: cout << "ERROR. RETURNING TO THE BEGINNING." << endl;
        }
    }
    
    for (int h = 1; h <= 3; h++) { 
        cout << "Enter your 3 grades per Exam: " << h << "Grades: " << endl;
        cin >> gradesExam[h];
        
        switch(fiveStudents) { 
            case 1: { 
                student[fiveStudents].exam[1] = gradesExam[1];
                student[fiveStudents].exam[2] = gradesExam[2];
                student[fiveStudents].exam[3] = gradesExam[3];
            }
            break;
            case 2: { 
                student[fiveStudents].exam[1] = gradesExam[1];
                student[fiveStudents].exam[2] = gradesExam[2];
                student[fiveStudents].exam[3] = gradesExam[3];
            }
            break;
            case 3: {
                student[fiveStudents].exam[1] = gradesExam[1];
                student[fiveStudents].exam[2] = gradesExam[2];
                student[fiveStudents].exam[3] = gradesExam[3];
            }
            break;
            default: cout << "ERROR. RETURNING TO THE BEGINNING." << endl;
        }
    }

    for (int k = 1; k <= 1; k++) { 
        cout << "Enter your Final Exam Grade here: " << endl;
        cin >> gradesFinal[k];
        student[fiveStudents].finalExam[1] = gradesFinal[1];
    }
}


void finalOutput() { 

    cout << "\t \t \t GRADE BOOK \t \t \t" << endl;
    cout << "===========================================================================================" << endl;
    cout << "First Name\tLast Name\tID Number\tPrograms\tQuizzes\t\tFinal Exam" << endl;
    
     for (int i = 0; i < 5; i++) { 
        cout << student[i].firstName << "\t" << student[i].lastName << "\t" << student[i].idNum;
     }
}