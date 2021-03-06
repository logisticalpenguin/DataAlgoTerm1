#include <iostream> 
#include <string> 
#include <list> 
#include <limits>

using namespace std;

void mainProg(); 
void multTable();
void userRetry();
int unoInput, dosInput;
int num[100][100];
char ch;

int main() { 
    mainProg();
    return 0;
}

void mainProg() { 
    
    cout << "Input the row size:  " << endl;
    cin >> unoInput;
    cout << "Input the column size:  " << endl;
    cin >> dosInput; 
    
    while(1) { //will not read letters
        if(unoInput == ch || dosInput == ch) { 
            cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << "Please input a positive integer only. No negatives or Letters allowed. Try again!"<<endl;
            return mainProg();
        }
        if(!cin.fail())
        break;
    }
    multTable();
}

void multTable() { 
    
    for (int row = 1; row <= unoInput; row++) { 
        for (int col = 1; col <= dosInput; col++) { 
            num[row][col] = (row) * (col);
            cout << num[row][col] << "\t"; 

        }
        cout << endl;
    }

    userRetry();
}

void userRetry() {
    char ch = 'n';
    cout << "Do you want to try again? [Y/N]: "; 
    cin >> ch;
    if (ch == 'Y' || ch == 'y') { 
     return mainProg();
    }
    else {
     return;
    }

}


