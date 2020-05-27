#ifndef PAYMENT
#define PAYMENT

#include <iostream>

#include <string.h>

#include <fstream>

using namespace std;

extern int glob;
extern int global;

class payment //class for payment
{
  protected: //protected members
    long int choice1, bank, date, cvv, user_id;
    string card;
    int flag = 0;
    char password[10];
  public: //public members functions

    int isNumberString(const string & s); //function declaration

    void pay_detail(); //function declaration 
};

#endif