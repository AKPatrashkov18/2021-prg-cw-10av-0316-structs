#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;



int main()
{
    STUDENT student = { 1, "Aleksander", "Patrashkov", 17, 4 };
    cout << student.getFullName();
}
