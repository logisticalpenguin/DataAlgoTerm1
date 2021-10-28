#include <iostream>
#include <iomanip>

using namespace std;


double tPG, tQ, tFE, totalGrade;
void Grade();
void EquivGrade();
char arr[] = { 'A','B','C','D','F' };
struct Info
{
	char First[100], Last[100], CC[5];
	int ID;
	double PG1, PG2, PG3, Q1, Q2, Q3, FE, tPG, tQ, tFE, totalGrade;
}; Info I[3];

int main()
{
	char again = 'Y';

	while (again == 'Y' || again == 'y')
	{
		system("CLS");
		for (int i = 0; i < 3; i++)
		{
		A:
			cout << "Record[" << i + 1 << "]";

			cout << "\nEnter your First Name: ";
			cin >> I[i].First;

			cout << "Enter your Last Name: ";
			cin >> I[i].Last;

			cout << "Enter your 4-digit ID: ";
			cin >> I[i].ID;
			if (I[i].ID > 9999 || I[i].ID < 1000)
			{
				system("CLS");
				cout << "Error, Wrong Input. Please Try Again\n\n";
				goto A;
			}
			else
			{
				goto B;
			}

		B:
			cout << "Enter Course: ";
			cin >> I[i].CC;

			cout << "Enter Program [1] Grade: ";
			cin >> I[i].PG1;

			cout << "Enter Program [2] Grade: ";
			cin >> I[i].PG2;

			cout << "Enter Program [3] Grade: ";
			cin >> I[i].PG3;

			cout << "Enter Quiz [1] Grade: ";
			cin >> I[i].Q1;

			cout << "Enter Quiz [2] Grade: ";
			cin >> I[i].Q2;

			cout << "Enter Quiz [3] Grade: ";
			cin >> I[i].Q3;

			cout << "Enter Final Exam Grade: ";
			cin >> I[i].FE;

			cout << endl << endl;

		}
		cout << setw(10);
		cout << "---Final Grades---" << endl;
		cout << fixed << setprecision(2);
		Grade();
		EquivGrade();

		cout << "\n\nTry Again?(y/n):";																//loop again
		cin >> again;

	}


}


//Functions
void Grade()
{
	for (int a = 0; a < 3; a++)
	{
		I[a].tPG = (I[a].PG1 + I[a].PG2 + I[a].PG3) / 3 * .3;
		I[a].tQ = (I[a].Q1 * .15) + (I[a].Q2 * .15) + (I[a].Q3 * .15);
		I[a].tFE = I[a].FE * .25;

		I[a].totalGrade = I[a].tPG + I[a].tQ + I[a].tFE;
	}
}

void EquivGrade()
{
	for (int b = 0; b < 3; b++)
	{
		if (I[b].totalGrade > 90)
		{

			cout << I[b].First << "" << I[b].Last << "\t" << I[b].totalGrade << "\t\t" << arr[0] << endl;
		}
		else if ((I[b].totalGrade < 90) && I[b].totalGrade >= 80)
		{

			cout << I[b].First << "" << I[b].Last << "\t" << I[b].totalGrade << "\t\t" << arr[1] << endl;
		}
		else if ((I[b].totalGrade < 80) && I[b].totalGrade >= 70)
		{

			cout << I[b].First << "" << I[b].Last << "\t" << I[b].totalGrade << "\t\t" << arr[2] << endl;
		}
		else if ((I[b].totalGrade < 70) && I[b].totalGrade >= 60)
		{

			cout << I[b].First << "" << I[b].Last << "\t" << I[b].totalGrade << "\t\t" << arr[3] << endl;
		}
		else if ((I[b].totalGrade < 60) && I[b].totalGrade >= 50)
		{

			cout << I[b].First << "" << I[b].Last << "\t" << I[b].totalGrade << "\t\t" << arr[4] << endl;
		}

	}
}

