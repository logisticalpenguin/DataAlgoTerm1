#include <iostream> 
#include <string> 
#include <iomanip>

using namespace std;

// i thought final grades will be different but i guess not (a different void)

void mainProg();
//void gradesInput(int students);
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
} student[3];

int main() {

    cout << "WELCOME TO THE GRADE BOOK." << endl;
    cout << "=====================================" << endl;
    cout << "Please enter 3 Students Names and Their IDs, as well as their grades." << endl;
    cout << "=====================================" << endl;
    
    int s;

    for (s = 0; s < 3; s++) {

        start: 
        cout << "Enter Student # " << s + 1 << " First Name here: " << endl;
        cin >> student[s].firstName;
        if (student[s].firstName.length() >= 16) {
            cout << "String is too long, please try again!" << endl;
            system("pause");
            return main();
        }
        cout << "Enter student # " << s + 1 << " Last Name here: " << endl;
        cin >> student[s].lastName;
        if (student[s].lastName.length() >= 16) {
            cout << "String is too long, please try again!" << endl;
            system("pause");
            return main();
        }
        cout << "Enter student # " << s + 1 << " 6 Digit ID here: " << endl;
        cin >> student[s].idNum;
        if (student[s].idNum > 999999 || student[s].idNum < 100000) {
            cout << "Pause! Enter 6 digits please!" << endl;
            goto start;
        }
        else {
            goto next;
        }
        next:
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
        cout << "Enter First Exam Grade: ";
        cin >> student[s].e1;
        cout << "Enter Second Exam Grade: ";
        cin >> student[s].e2;
        cout << "Enter Third Exam Grade: ";
        cin >> student[s].e3;
        cout << "Enter Final Exam Grade: ";
        cin >> student[s].fe;

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

    for (int s = 0; s < 3; s++) {
    cout << student[s].firstName << "\t\t" << student[s].lastName << "\t\t" << student[s].pg1 << "\t" << student[s].pg2 << "\t" << student[s].pg3 << "\t" << student[s].pg4 << "\t" << student[s].pg5 << "\t"  << student[s].e1 <<"\t" << student[s].e2 << "\t" << student[s].e3 << "\t" << student[s].fe << endl;
    }

    cout << "Final Grades: " << endl; //i honestly ran out of time and could not figure out why it will not read other than the first if, is there something wrong?
    for (int s = 0; s < 3; s++) {
        student[s].progTotal = (student[s].pg1 + student[s].pg2 + student[s].pg3 + student[s].pg4 + student[s].pg5) / 3 * .3;
		student[s].totalExam = (student[s].e1 * .15) + (student[s].e2 * .15) + (student[s].e3 * .15);
		student[s].totalFE = student[s].fe * .25;

		student[s].totalGrade = student[s].progTotal + student[s].progTotal + student[s].progTotal;

        if (student[s].totalGrade > 90) { 
        cout << student[s].firstName << "\t" << student[s].lastName << "\t" << arr[0] << endl;}
        else if((student[s].totalGrade < 90) && student[s].totalGrade >= 80) {
        cout << student[s].firstName << "\t" << student[s].lastName << "\t" << arr[1] << endl;}
        else if((student[s].totalGrade < 80) && student[s].totalGrade >= 70) {
         cout << student[s].firstName << "\t" << student[s].lastName << "\t" << arr[2] << endl;}
        else if((student[s].totalGrade < 70) && student[s].totalGrade >= 60) {
         cout << student[s].firstName << "\t" << student[s].lastName << "\t" << arr[3] << endl;}
        else if ((student[s].totalGrade < 60) && student[s].totalGrade >= 50) {
        cout << student[s].firstName << "\t" << student[s].lastName << "\t" << arr[4] << endl;}
    } 
}


/*void letterGrade() { 
    for (int d = 0; d < 3; d++) {
        if (student[d].totalGrade > 90) { 
            cout << student[d].firstName << "\t" << student[d].lastName << "\t" << arr[0] << endl;
        }
        else if((student[d].totalGrade < 90) && student[d].totalGrade >= 80) {
            cout << student[d].firstName << "\t" << student[d].lastName << "\t" << arr[1] << endl;
        }
        else if((student[d].totalGrade < 80) && student[d].totalGrade >= 70) {
            cout << student[d].firstName << "\t" << student[d].lastName << "\t" << arr[2] << endl;
        }
        else if((student[d].totalGrade < 70) && student[d].totalGrade >= 60) {
            cout << student[d].firstName << "\t" << student[d].lastName << "\t" << arr[3] << endl;
        }
        else if ((student[d].totalGrade < 60) && student[d].totalGrade >= 50) {
            cout << student[d].firstName << "\t" << student[d].lastName << "\t" << arr[4] << endl;
        }
    }
}*/