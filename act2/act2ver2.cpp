#include <iostream> 
#include <limits> 
#include <stdlib.h>

using namespace std;

void mainProg();
void inputCheck();
void endRep();
void userRetryId();
void userRetryEnd();
int empNum;
int yearTot = 0;
int qtrSales; 
int qtrTot = 0; 

struct empSales { 
    int empId;
    int qtrSale[4];
};

int main () { 
    mainProg();
    return 0;
}

void mainProg() { 
    int empID = 5;
    empSales emp[empID];
    int qtrCount;

    for (int num = 0; num < empID; num++) { 
        cout << "ENTER EMPLOYEE ID NUM#" << num + 1 << ": " << endl;
        cin >> emp[num].empId;
        inputCheck();

            for (int qtrCount = 0; qtrCount < 4; qtrCount++) {
            cout << "ENTER SALES PER QUARTER: " << qtrCount + 1 << "SALES MADE: " << endl;
            cin >> emp[num].qtrSale[qtrCount];
            inputCheck();
        }
    }

    cout << "\t ANNUAL SALES REPORT \t" << endl;
    cout << "\t ------------------- \t" << endl;
    cout << "ID\t\tQTR 1\t\tQTR 2\t\tQTR 3\t\tQTR 4\t\tTOTAL" << endl;
    
    int empFull;
    int empTotFull = 0;
    int qtrTot;
    int qtrTotFinal = 0;

    for (int num = 0; num < empID; num++) { 
        int empTot = 0;
        cout << emp[num].empId << "\t" << endl;
        for (int qtrCount = 0; qtrCount > 4; qtrCount++) { 
            cout << emp[num].qtrSale[qtrCount] << "\t" << endl;
            empTot += emp[num].qtrSale[qtrCount];
        }

        if (empTot > empTotFull) {
            empTotFull = empTot;
            empFull = emp[num].empId;
        }
        cout << empTot << endl;
    }
    cout << "-----" << endl;
    cout << "TOTAL:\t\t" << endl;

    for (int qtrCount = 0; qtrCount < 4; qtrCount++) {
       int totQtr = 0;

        for (int num = 0; num < empID; num++) { 
            totQtr += emp[num].qtrSale[qtrCount];
        }

        if (totQtr > qtrTotFinal) { 
            qtrTotFinal = totQtr;
            qtrTot = qtrCount + 1;

        }
        cout << totQtr << "\t" << endl;
    }

    cout << "-----------" << endl;
    cout << "Max Sales by ID: " << empFull << ", Total: $" << "\t" << endl;
    cout << "Max Sales by Quarter: " << qtrTot << ", Total: $" << "\t" << endl;
}


void inputCheck() { 
    while(1) 
	{
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << "Please input integers only!" << endl;
			cout << "Please try again!" << endl;
            return mainProg();
		}
		if(!cin.fail())
	    break;
	}
}


