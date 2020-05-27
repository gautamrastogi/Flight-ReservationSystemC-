#ifndef D_BOOKING
#define D_BOOKING

#include <iostream>

#include <string.h>

#include <fstream>

using namespace std;

extern int glob;
extern int global;

class d_booking //class  for domestic booking
{
  protected:
  int pnr, flag = 0;
  char f_d[10], toja[7], tojd[7]; //protected members
  long int doj;
  int dayd, monthd, yeard; 
  int choice, src, dest;
  public: //public member functions
    //void flightDetails();


void flightNum_d();

 virtual int journeyDetail(); // function declaration for domestic journey

 virtual int flightSelection(); //function declaration for selecting flight

};

#endif