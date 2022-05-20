#include "Result.h"
#include <iostream>
#include <cstring>

using namespace std;

Result::Result(){
    strcpy(ResultID, "");
    marks = 0;
    strcpy(Grade, "");
    GPA = 0;
}

Result::Result(const char resultID[], double mrk, const char grade[], double gpa){
    strcpy(ResultID, resultID);
    marks = mrk;
    strcpy(Grade, grade);
    GPA = gpa;
}

void Result::display(){
  cout << "Result ID: " << ResultID << endl;
  cout << "Marks: " << marks << endl;
  cout << "Grade: " << Grade << endl;
  cout << "GPA: " << GPA << endl;
}

Result::~Result(){
  cout << "Result delete" << endl;
}