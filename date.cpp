#include "date.h"
#include<iostream>
#include<fstream>

ostream& operator<<(ostream& print, const date& DATE){
    print<<DATE.getMonth()<<"/"<<DATE.getDay()<<"/"<<DATE.getYear();
    return print;
}

date::date(int m,int d,int y){
    setMonth(m);
    setDay(d);
    setYear(y);
}

void setYear(int a){
    //year = a;
}

void setMonth(int b){
   // month=b;
}

void setDay(int c){
    //day=c;
}

int date::getYear()const{
    return year;
}

int date::getDay()const{
    return day;
}

int date::getMonth()const{
    return month;
}

