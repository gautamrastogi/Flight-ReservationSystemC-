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
    unsigned long int c_no;
    int flag = 0;
public://public member functions
    void p_detail(int x)//function declaration and definition
    {   if(x==1)//if else for domestic and international booking selection
        { j_detail();//function call
          select_flight();//function call
        }
          else
          {  j_detaili();
             select_flighti();//function call
          }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }
    int gender_check()//to check gender input as valid
    {
        cout << "\nGender:\nMale-press:1::\nFemale-press:2::";
        cin >> gender;
        if(gender>2)//condition
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();//function call
        }
    }
    bool Email(string email)
    {
    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email,pattern);
    }
       void more_details()//to take more details of the passenger
       {
        cout << "Age:";
        cin >> age;
      /* if (age < 12) {
            cout<< "Minimum Age for Flight Travel is 12." << endl;
            return;
         */
        while(flag == 0) {
        cout<<"Enter any E-Mail ID - ";
        cin>>str_email;
        if(Email(str_email)) {
            cout<< "Email valid. You can proceed." <<endl;
            flag++;
        }           
        else {
            cout<<"Email Invalid.Please Enter a valid Email." << endl;
            flag =0;
        }
        }
        cout << "Contact no.(8 digits):";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;      //displaying details
        cout << "Age:" << age << endl;
        cout << "Email id:" << str_email << endl;
        cout << "Contact No.:" << c_no << endl;
    }


     int getpnr()//function to get pnr for domestic booking
        {
            return pnr;
        }

     int getpnri()//function to get pnr for international booking
     {
         return pnri;
     }

     void disp()//function to display details for domestic booking
     {
         cout<<"PNR:" << pnr << endl;
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << dayd << monthd << yeard << endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
     }

      void dispi()//function to display details for international booking
     {
         cout<<"PNR:" << pnri << endl;
         cout<<"Flight:" << f_i << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << dayi << monthi << yeari << endl;
         cout<<"Departure Time:" << tojdi << endl;
         cout<<"Arrival Time:" << tojai;
     }
};
#endif