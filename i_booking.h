#ifndef I_BOOKING
#define I_BOOKING

#include<iostream>

#include <string.h>

#include<fstream>

using namespace std;

extern int glob;
extern int global;

class i_booking //class for international booking
{
  protected: //protected members
    int pnri, flag = 0;
  char f_i[10], tojai[7], tojdi[7];
  long int doji;
  int srci, desti, choicei;
  int dayi, monthi, yeari;
  public: //public member functions

  void flightNum_i();

  //void flightDetails();

  int journeyDetailInt(); // function declaration and definition for journey details

  int flightSelectionInt(); //function declaration and definition for selecting flight

};

#endif