#include <iostream>
//#include<stdio.h>
//#include<ios> 
#include<limits>

using namespace std;

void mainProg ();
void recursionNumber(int userInteger);
void userRetry();
int userInteger;

int main() {
	mainProg();
	return 0;
}

void mainProg() { 
    
    cout << "Enter a positive integer: ";
    cin >> userInteger;
    
    while(1) { //will not read letters
        if(cin.fail()) { 
            cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"Please input a positive integer only. No negatives or Letters allowed. Try again!"<<"\n";
			return mainProg();
        }
        if(!cin.fail())
        break;
    }
    recursionNumber(userInteger);
}

//factorial will only do up until 10, anything above will break.
void recursionNumber(int userInteger) {
    if (userInteger < 0) { //if user inputted below 0, it will not be read and user will input another integer again.
        cout << "Please input a positive integer. " << "\n";
        return mainProg();
    }
    else if (userInteger == 0 || userInteger == 1) { //user inputs 0 or 1 and it will equal to 1
        cout << "Factorial: "<< userInteger << " = 1" << "\n";
    }

    else if (userInteger > 10) {
        cout << "This is currently too big! Please enter again." << "\n";
        return mainProg();
    }

    else { 
        //original code: return (userInteger >= 1) userInteger*recursionNumber(userInteger-1);
        int number = 1;
		int factorialNo = userInteger;
		
		while(userInteger > 1) //code will continue here if greater than 1
		{
			number *= userInteger;
			userInteger--;
		}
		cout << "Factorial: " << factorialNo << " = " << number << "\n";
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