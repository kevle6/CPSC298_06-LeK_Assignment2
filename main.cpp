/* Full Name: Kevin T Le

Student ID: 2406054

Chapman Email: kevle@chapman.edu

Course Number and Section: CPSC 298-06

Programming Assignment 2

Purpose: This program takes in names, salaries, and years of experience
of every employee. Once all employees are entered, their bonuses will be
calculated and displayed. */

#include <iostream>
#include <string>
#include <vector>
#include "salary.h"

using namespace std;

int main() {
  vector<string> nameVector; // Vector of strings that holds names.
  vector<double> salaryVector; // Vector of doubles that holds salaries.
  vector<int> experienceVector; // Vector of ints that holds years of experience.
  vector<double> bonusVector; // Vector of doubles that holds bonuses.

  string nameString; // Variables used to append to vectors.
  double salaryDouble;
  int experienceInt;
  double bonusDouble;

  while (true) { // Continues prompting for Employee Statistics until user inputs DONE.

    cout << "Enter DONE to exit." << endl;
    cout << "Enter Employee Name: ";
    cin >> nameString;
    if (nameString == "DONE") {
      break;
    }
    nameVector.push_back(nameString); // Appends to nameVector.

    cout << "Enter Salary: ";
    cin >> salaryDouble;
    salaryVector.push_back(salaryDouble); // Appends to salaryVector.

    cout << "Enter Years of Experience: ";
    cin >> experienceInt;
    experienceVector.push_back(experienceInt); // Appends to experienceVector.

    bonusDouble = calcBonus(salaryDouble, experienceInt); // Calculates Employee's bonus.
    bonusVector.push_back(bonusDouble); // Appends to bonusVector.

  }

  cout << endl << "Here are the Statistics of the Employees: " << endl << endl;

  for (int nameIndex = 0; nameIndex < nameVector.size(); ++nameIndex) { // Iterates through all Employees for printing.

    cout << "Employee Name: " << nameVector.at(nameIndex) << "\t";
    cout << "Salary: " << salaryVector.at(nameIndex) << "\t";
    cout << "Years of Experience: " << experienceVector.at(nameIndex) << "    "; // "\t" did not work the third time.
    cout << "Bonus: " << bonusVector.at(nameIndex) << endl;

  }

  cout << endl;

  return 0;
}
