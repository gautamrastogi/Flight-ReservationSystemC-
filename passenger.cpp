#include<iostream>
#include <string.h>
#include<fstream>
#include "d_booking.h"
#include "i_booking.h"
#include "passenger.h"
#include <regex>

using namespace std;

extern int glob;
extern int global;

    void passenger:: p_detail(int x)//function declaration and definition
    {   if(x==1)//if else for domestic and international booking selection
        { journeyDetail();//function call
          flightSelection();//function call
        }
          else
          {  journeyDetailInt();//function call1353
             flightSelectionInt();//function call
          }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }

    int passenger:: gender_check()//to check gender input as valid
    {
        cout << "\nGender:\nMale-press:1::\nFemale-press:2::";
        cin >> gender;
        if(gender>2)//condition
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();//function call
        }
    }
    bool passenger:: Email(string email)
    {
    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email,pattern);
    }
       void passenger:: more_details()//to take more details of the passenger
       {
        cout << "Age:";
        cin >> age;
        cout<<"Enter any E-Mail ID - ";
        getline(cin,str_email);
        if(Email(str_email)) {
            cout<< "Emailvalid. You can proceed.";
        }
        else {
            cout<<"Email Invalid.Please Enter a valid Email";
        }
        cout << "Contact no.(6 digits):";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;      //displaying details
        cout << "Age:" << age << endl;
        cout << "Email id:" << str_email << endl;
        cout << "Contact No.:" << c_no << endl;
    }


     int passenger:: getpnr()//function to get pnr for domestic booking
        {
            return pnr;
        }

     int passenger:: getpnri()//function to get pnr for international booking
     {
         return pnri;
     }

     void passenger:: disp()//function to display details for domestic booking
     {
         cout<<"PNR:" << pnr << endl;
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doj << endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
     }

      void passenger:: dispi()//function to display details for international booking
     {
         cout<<"PNR:" << pnri << endl;
         cout<<"Flight:" << f_i << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doji << endl;
         cout<<"Departure Time:" << tojdi << endl;
         cout<<"Arrival Time:" << tojai;
     }
