#include <iostream> 
#include <limits>
using namespace std;

void mainProg();
void empSales(int empID);
void salesRep(int qtrUno, int qtrDos, int qtrTres, int qtrSinco);
void inputCheck();
void userRetryID();
void userRetryEnd();
int qtrSale[4];


struct empSales { 
    int empId;
    int qtrOne; 
    int qtrTwo;
    int qtrThree;
    int qtrFour; 
    int yearTot;
} empOne, empTwo, empThree, empFour, empFive;

int main() { 
    mainProg();
    return 0;
}

void mainProg() { 
    int empID;
    for (empID = 1 ; empID <= 5; empID++) { 
        switch (empID) { 
            case 1: {
            cout << "ENTER EMPLOYEE ID#1: " << endl;
            cin >> empOne.empId;
            inputCheck();
            empSales(empID);
            }
            break;
            case 2: { 
            cout << "ENTER EMPLOYEE ID#2: " << endl;
            cin >> empTwo.empId;
            inputCheck();
            empSales(empID);
            }
            break;
            case 3: { 
            cout << "ENTER EMPLOYEE ID#3: " << endl;
            cin >> empThree.empId;
            inputCheck();
            empSales(empID);
            }
            break;
            case 4: { 
                cout << "ENTER EMPLOYEE ID#4: " << endl;
                cin >> empFour.empId;
                inputCheck();
                empSales(empID);
            }
            break;
            case 5: {
                cout << "ENTER EMPLOYEE ID#5: " << endl;
                cin >> empFive.empId;
                inputCheck();
                empSales(empID);
            }
            break;
            default: 
            cout << "ERROR. RETURNING TO THE BEGINNING." << endl; return mainProg();
        
        }
    }

   int qtrUno = empOne.qtrOne + empTwo.qtrOne + empThree.qtrOne  + empFour.qtrOne + empFive.qtrOne;
   int qtrDos = empOne.qtrTwo + empTwo.qtrTwo + empThree.qtrTwo + empFour.qtrTwo + empFive.qtrTwo;
   int qtrTres = empOne.qtrThree + empTwo.qtrThree + empThree.qtrThree + empFour.qtrThree + empFive.qtrThree;
   int qtrQuatro = empOne.qtrFour + empTwo.qtrFour + empThree.qtrFour + empFour.qtrFour + empFive.qtrFour;

    salesRep(qtrUno, qtrDos, qtrTres, qtrQuatro);

}

void inputCheck() { 
    while(1) 
	{
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << "Please input integers only!" << endl;
			cout << "Try Again!" << endl;
            system("pause");
            system("cls");
            return mainProg();
		}
		if(!cin.fail())
	    break;
	}
}

void userRetryID() {
    char ch;
    cout << "--------------" << endl;
    cout << "Do you want to input the ID again? [Y/N]: "; 
    cin >> ch;
    if (ch == 'Y' || ch == 'y') {
     return mainProg();
    }
    else if (ch == 'n' || ch == 'N') {
     return;
    }
}

void empSales(int empID) { 
        for (int qtr = 1; qtr <= 4; qtr++) { 
            cout << "ENTER SALES PER QUARTER:" << qtr << " Sales: ";
            cin >> qtrSale[qtr];
            inputCheck();
            cout << endl;

            switch (empID) { 
            case 1: { 
            empOne.qtrOne = qtrSale[1];
            empOne.qtrTwo = qtrSale[2];
            empOne.qtrThree = qtrSale[3];
            empOne.qtrFour = qtrSale[4];
            empOne.yearTot = empOne.qtrOne + empOne.qtrTwo + empOne.qtrThree + empOne.qtrFour;
            }
            break;
            case 2: { 
            empTwo.qtrOne = qtrSale[1];
            empTwo.qtrTwo = qtrSale[2];
            empTwo.qtrThree = qtrSale[3];
            empTwo.qtrFour = qtrSale[4];
            empTwo.yearTot = empTwo.qtrOne + empTwo.qtrTwo + empTwo.qtrThree + empTwo.qtrFour;
            }
            break;
            case 3: { 
            empThree.qtrOne = qtrSale[1];
            empThree.qtrTwo = qtrSale[2];
            empThree.qtrThree = qtrSale[3];
            empThree.qtrFour = qtrSale[4];
            empThree.yearTot = empThree.qtrOne + empThree.qtrTwo + empThree.qtrThree + empThree.qtrFour;
            }
            break; 
            case 4: {
            empFour.qtrOne = qtrSale[1];
            empFour.qtrTwo = qtrSale[2];
            empFour.qtrThree = qtrSale[3];
            empFour.qtrFour = qtrSale[4];
            empFour.yearTot = empFour.qtrOne + empFour.qtrTwo + empFour.qtrThree + empFour.qtrFour;
            }
            break;
            case 5: {
            empFive.qtrOne = qtrSale[1];
            empFive.qtrTwo = qtrSale[2];
            empFive.qtrThree = qtrSale[3];
            empFive.qtrFour = qtrSale[4]; //will be redirected to the empOne.empId for some odd reason
            empFive.yearTot = empFive.qtrOne + empFive.qtrTwo + empFive.qtrThree + empFive.qtrFour;
            }
            break;
            default: 
            cout << "ERROR. RETURNING TO THE BEGINNING." << endl; return mainProg();
        }
    }
}

void salesRep(int qtrUno, int qtrDos, int qtrTres, int qtrQuatro) { 
    cout << "\t ANNUAL SALES REPORT \t" << endl;
    cout << "\t ------------------- \t" << endl;
    cout << "ID\tQTR 1\tQTR 2\tQTR 3\tQTR 4\tTOTAL" << endl;

    cout << empOne.empId << "\t" << empOne.qtrOne << "\t" << empOne.qtrTwo << "\t" << empOne.qtrThree << "\t" << empOne.qtrFour << "\t" << empOne.yearTot << endl;
    cout << empTwo.empId << "\t" << empTwo.qtrOne << "\t" << empTwo.qtrTwo << "\t" << empTwo.qtrThree << "\t" << empTwo.qtrFour << "\t" << empTwo.yearTot << endl;
    cout << empThree.empId << "\t" << empThree.qtrOne << "\t" << empThree.qtrTwo << "\t" << empThree.qtrThree << "\t" << empThree.qtrFour << "\t" << empThree.yearTot << endl;
    cout << empFour.empId << "\t" << empFour.qtrOne << "\t" << empFour.qtrTwo << "\t" << empFour.qtrThree << "\t" << empFour.qtrFour << "\t" << empFour.yearTot << endl;
    cout << empFive.empId << "\t" << empFive.qtrOne << "\t" << empFive.qtrTwo << "\t" << empFive.qtrThree << "\t" << empFive.qtrFour << "\t" << empFive.yearTot << endl;
    cout << "-----" << endl;
    cout << "TOTAL: " << "\t" << qtrUno << "\t" << qtrDos << "\t" << qtrTres << "\t" << qtrQuatro << "\t" << endl;
    
    if ((empOne.yearTot > empTwo.yearTot) && (empOne.yearTot > empThree.yearTot) && (empOne.yearTot > empFour.yearTot) && (empOne.yearTot > empFive.yearTot)) { 
        cout << "Max Sales by ID: " << empOne.empId << ", and Amount made: $ " << empOne.yearTot << endl;
    }
    else if ((empTwo.yearTot > empOne.yearTot) && (empTwo.yearTot > empThree.yearTot) && (empTwo.yearTot > empFour.yearTot) && (empTwo.yearTot > empFive.yearTot)) { 
        cout << "Max Sales by ID: " << empTwo.empId << ", Amount made: $ " << empTwo.yearTot << endl;
    }
    else if((empThree.yearTot > empOne.yearTot) && (empThree.yearTot > empTwo.yearTot) && (empThree.yearTot > empFour.yearTot) && (empThree.yearTot > empFive.yearTot)) { 
        cout << "Max Sales by ID: " << empThree.empId << ", and Amount made: $ " << empThree.yearTot << endl;
    }
    else if ((empFour.yearTot > empOne.yearTot) && (empFour.yearTot > empTwo.yearTot) && (empFour.yearTot > empThree.yearTot) && (empFour.yearTot > empFive.yearTot)) {
        cout << "Max Sales by ID: " << empFour.empId << ", and Amount made: $" << empFour.yearTot << endl;
    }
    else if((empFive.yearTot > empOne.yearTot) && (empFive.yearTot > empTwo.yearTot) && (empFive.yearTot > empThree.yearTot) && (empFive.yearTot > empFour.yearTot)) { 
        cout << "Max Sales by ID: " << empFive.empId << ", and Amount made: $" << empFive.yearTot << endl;
    }

    if ((qtrUno > qtrDos) && (qtrUno > qtrTres) && (qtrUno > qtrQuatro)) { 
        cout << "Max Sales by Quarter: 1" << ", Amoumt Made: $ " << qtrUno << endl;
    }
    else if ((qtrDos > qtrUno) && (qtrDos > qtrTres) && (qtrDos > qtrQuatro)) { 
        cout << "Max Sales by Quarter: 2" << ", Amount Made: $" << qtrDos << endl;
    }
    else if ((qtrTres > qtrUno) && (qtrTres > qtrDos) && (qtrTres > qtrQuatro)) { 
        cout << "Max Sales by Quarter: 3" << ", Amount Made: $" << qtrTres << endl;
    }
    else if ((qtrQuatro > qtrUno) && (qtrQuatro > qtrDos) && (qtrQuatro > qtrTres)) { 
        cout << "Max Sales by Quarter: 4" << ", Amount Made: $" << qtrQuatro << endl;
    }

    userRetryEnd();
}


void userRetryEnd() {
    char ch = 'n';
    cout << "--------------------" << endl;
    cout << "Do you want to input new IDs again? [Y/N]: "; 
    cin >> ch;
    if (ch == 'Y' || ch == 'y') { 
    return mainProg();
    }
    else {
     return;
    }
}