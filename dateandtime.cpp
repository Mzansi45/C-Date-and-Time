#include "dateandtime.h"

DateAndTime::DateAndTime()
{
    //ctor

}

DateAndTime::~DateAndTime()
{
    //dtor
}

DateAndTime::DateAndTime(const DateAndTime& other)
{
    //copy ctor
}

string DateAndTime::GetTime()
{
    time_t now = time(0);
    //char* dt = ctime(&now);
    tm *gmtm = gmtime(&now);
    //dt = asctime(gmtm);

    return to_string(gmtm->tm_hour +2) +":"+ to_string(gmtm->tm_min);

}
string DateAndTime::GetDay()
{
    time_t now = time(0);
    //char* dt = ctime(&now);
    tm *gmtm = gmtime(&now);
    //dt = asctime(gmtm);

    string day;
    switch(gmtm->tm_wday)
    {
    case 1:
        day = "Monday";
        break;
    case 2:
        day = "Tuesday";
        break;
    case 3:
        day = "Wednesday";
        break;
    case 4:
        day = "Thursday";
        break;
    case 5:
        day = "Friday";
        break;
    case 6:
        day = "Saturday";
        break;
    case 0:
        day = "Sunday";
        break;
    }
    return day;
}
string DateAndTime::GetMonth()
{
    time_t now = time(0);
    //char* dt = ctime(&now);
    tm *gmtm = gmtime(&now);
    //dt = asctime(gmtm);

    string month;
    switch(gmtm->tm_mon)
    {
    case 0:
        month = "January";
        break;
    case 1:
        month = "February";
        break;
    case 2:
        month = "March";
        break;
    case 3:
        month = "April";
        break;
    case 4:
        month = "May";
        break;
    case 5:
        month = "June";
        break;
    case 6:
        month = "July";
        break;
    case 7:
        month = "August";
        break;
    case 8:
        month = "September";
        break;
    case 9:
        month = "October";
        break;
    case 10:
        month = "November";
        break;
    case 11:
        month = "December";
        break;
    }
    return month;
}
int DateAndTime::GetDate()
{
    time_t now = time(0);
    //char* dt = ctime(&now);
    tm *gmtm = gmtime(&now);
    //dt = asctime(gmtm);

    return gmtm->tm_mday;
}
int DateAndTime::GetYear()
{
    time_t now = time(0);
    //char* dt = ctime(&now);
    tm *gmtm = gmtime(&now);
    //dt = asctime(gmtm);

    return 1900+
    gmtm->tm_year;
}
int DateAndTime::GetDayOfYear()
{
    time_t now = time(0);
    //char* dt = ctime(&now);
    tm *gmtm = gmtime(&now);
    //dt = asctime(gmtm);

    return gmtm->tm_yday;
}

char* DateAndTime::GetDateAndTime()
{
    time_t now = time(0);
    char* dt = ctime(&now);

    return dt;
}
