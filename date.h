#ifndef DATE_H
#define DATE_H

using namespace std;

class date{

friend ostream& operator<<(ostream& print, const date& DATE);

private:
int month;
int day;
int year;;

public:
date(int,int,int);
void setDate(int,int,int);
void setMonth(int);
void setDay(int);
void setYear(int);
int getMonth()const;
int getDay()const;
int getYear()const;

};
#endif