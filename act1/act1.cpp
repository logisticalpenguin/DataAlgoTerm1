#include <iostream>
#include <limits>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout << "--- Input 10 Integers ---\n" ;
	
	int userInputArr[10];
	int userArrSize = sizeof(userInputArr) / sizeof(userInputArr[0]);
	int firstNum = -1, lastNum = -1;

	for (int i = 0; i < userArrSize ; i++) // loops the printing of requesting for user input
	{
		cout << "index[" << i << "] : ";
		cin >> userInputArr[i];
		cout << endl;
		
			while(1) // checks whether userInput is int or not
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"Please input integers only!"<<endl;
				cout << "index[" << i << "] : ";
				cin>>userInputArr[i];
			}
			if(!cin.fail())
		break;
		}
	}
	
	for (int i = 0; i < userArrSize ; i++) // checks if the user input is the number 8
	{
		if (userInputArr[i] == 8)
		{
			if(firstNum == -1)
			{
				firstNum = i;
			}
			lastNum = i;
		}
	}
	
	if (firstNum != -1) // if else statements that prints the end of the program depending if the user inputted the number 8.
	{
		if (firstNum == lastNum)
		{
			cout << "First and last occurrence of no. 8 is in index [" << firstNum << "]";
		}
		else
		{
			cout << "First Occurence of no. 8 is at index[" << firstNum << "]\n";
			cout << "Last Occurence of no.8 is at index[" << lastNum << "]";			
		}
	}
	else
	{
		cout << "Number 8 is NOT in the array!";
	}
	
	return 0;
}