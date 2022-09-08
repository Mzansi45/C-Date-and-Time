#ifndef DATEANDTIME_H
#define DATEANDTIME_H

#include <iostream>
#include <ctime>

using namespace std;

class DateAndTime
{
    public:
        DateAndTime();
        virtual ~DateAndTime();
        DateAndTime(const DateAndTime& other);
        string GetTime();
        string GetDay();
        string GetMonth();
        int GetDate();
        int GetYear();
        int GetDayOfYear();
        char* GetDateAndTime();


    private:
};

#endif // DATEANDTIME_H
