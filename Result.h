#include "certificates.h"
#include <iostream>
#include <cstring>
using namespace std;
#pragma once
class Result {
private:
    char ResultID[10];
    double marks;
    char Grade[2];
    double GPA;
	  certificates* cert;
public:
    Result();
    Result(const char resultID[], double mrk, const char grade[], double gpa);
    void display();
   ~Result();
};