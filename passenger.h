#ifndef PASSENGER
#define PASSENGER

#include<iostream>
#include <string.h>
#include<fstream>
#include "d_booking.h"
#include "i_booking.h"
#include <regex>

using namespace std;

extern int glob;
extern int global;

class passenger: public d_booking,public i_booking//class passenger publicly inherited from class d_booking and i_booking
{
protected://protected members
    char f_name[20],l_name[20];
    string str_email;
    int age,gender;
    long int c_no;
public://public member functions
    void p_detail(int x); //function declaration 
    
    int gender_check();//to check gender input as valid

    bool Email(string email);

    void more_details();//to take more details of the passenger

    int getpnr();//function to get pnr for domestic booking

    int getpnri();//function to get pnr for international booking

    void disp();//function to display details for domestic booking

    void dispi();//function to display details for international booking

};
#endif