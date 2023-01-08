// This program is add patients into a data.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
int addPatient();

void displayPatients();

struct PatientData
{
	string name;
	string contact;
} ;

PatientData patients[1000];

int main()
{
	int num = 0;


	while (num != 3)
	{
		cout << "Welcome to Baby Life. Please select an option:" << endl;
		cout << "(1) Add Patient" << endl;
		cout << "(2) Display patient" << endl;
		cout << "(3) Exit" << endl;
		cin >> num;


		if (num == 1)
		{
			addPatient();
		}
		else if (num == 2)
		{
			displayPatients();
		}
	}

	return 0;
}



int addPatient()
{
	int num;


	cout << "Enter the number of patients you are adding: ";
	cin >> num;
	cout << endl;

	// CLear memory
	for (int i = 0; i < 1000; i++)
	{
		patients[i].name = "";
		patients[i].contact = "";
	}

	if (num > 1000)
	{
		cout << "Please enter an amount under 1000 /n";
		return 0;
	}


	for (int i = 0; i < num; i++)
	{
		cout << "Enter patents name: ";
		cin >> patients[i].name;

		cout << "Enter patients contact details: ";
		cin >> patients[i].contact;
	}
	return num;
}

void displayPatients()
{
	for (int i = 0; i < 1000; i++)
	{
		if (patients[i].name != "")
		{
			cout << "Name = " << patients[i].name << "\t\t Contact = " << patients[i].contact << endl;
		}
	}
}