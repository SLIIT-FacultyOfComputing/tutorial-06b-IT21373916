#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sNo, char sName[]) {
  studentID = sNo;

  strcpy(name, sName);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID is " << studentID << endl;
  cout << "Student name is " << name << endl;
}
