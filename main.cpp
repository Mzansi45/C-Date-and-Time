#include <iostream>
#include <ctime>

#include "dateandtime.h"

using namespace std;

int main()
{
    DateAndTime temp;
    cout << "Date: "<<temp.GetDate()<< endl;
    cout << "Year: "<<temp.GetYear() << endl;
    cout << "Month: "<< temp.GetMonth()<< endl;
    cout << "Time: " << temp.GetTime()<< endl;
    cout << "Day: "<< temp.GetDay()<< endl;
    cout << temp.GetDateAndTime()<< endl;

    return 0;
}
