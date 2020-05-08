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
    int pnr,flag =0;
    char f_d[10],toja[7],tojd[7]; //protected members
    long int doj;
    int dayd, monthd, yeard;
    int choice,src,dest;
public://public member functions

    void d_pnr()
    {
        glob++; // increment variable
        pnr=glob;
    }
    int j_detail() // function declaration and definition for domestic journey
    {
        while (flag == 0) {
        cout << "\nEnter DateOfJourney(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin >> dayd >> monthd >> yeard;
        if(yeard>0)
       {
         if(monthd==1 || monthd==3 || monthd==5|| monthd==7|| monthd==8||monthd==10||monthd==12 && dayd>0 && dayd<=31){
         cout<<"Date is Valid" << endl;
         flag++;
         }
         else if(monthd==4 || monthd==6 || monthd==9|| monthd==11 && dayd>0 && dayd<=30){
            cout<<"Date is Valid" << endl;
            flag++;
         }
         else if(monthd==2){
               if((yeard%400==0 || (yeard%100!=0 && yeard%4==0)) && dayd>0 && dayd<=29)
                 cout<<"Date is Valid" << endl;
               else if(dayd>0 && dayd<=28){
                  cout<<"Date is Valid" << endl;
                  flag++;
               }
               else{
                  cout<<"Date is Invalid" << endl;
                  flag =0;
               }
            }
        else {
        cout<<"Date is Invalid" << endl;
        flag = 0;
        }
        }
        } 
        cout << "\1.Vilnus(1) \t\2.Kaunas(2) \t\3.Klaipeda(3) \t\4.Siauliai(4)" << endl << endl;
        cout << "\tEnter Origin" << endl;
        cin >> src;
        cout << "\tEnter Destination" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.WizzAir(1)\t08:00\t\t11:05\t\t€125\t\tRefundable\n";
            cout << "\2.Aeroflot(2)\t14:00\t\t17:05\t\t€250\t\tRefundable\n";
            cout << "\3.Ryanair(3)\t19:00\t\t22:05\t\t€80\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.WizzAir(1)\t08:00\t\t11:05\t\t€120\t\tRefundable\n";
            cout << "\2.Aeroflot(2)\t14:00\t\t17:05\t\t€150\t\tRefundable\n";
            cout << "\3.Ryanair(3)\t19:00\t\t22:05\t\t€60\t\tRefundable\n";
        }

        else if((src==1 && dest==4) || (src==4 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.WizzAir(1)\t08:00\t\t11:05\t\t€150\t\tRefundable\n";
            cout << "\2.Aeroflot(2)\t14:00\t\t17:05\t\t€110\t\tRefundable\n";
            cout << "\3.Ryanair(3)\t19:00\t\t22:05\t\t€210\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.WizzAir(1)\t08:00\t\t11:05\t\t€125\t\tRefundable\n";
            cout << "\2.Aeroflot(2)\t14:00\t\t17:05\t\t€210\t\tRefundable\n";
            cout << "\3.Ryanair(3)\t19:00\t\t22:05\t\t€65\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.WizzAir(1)\t08:00\t\t11:05\t\t€90\t\tRefundable\n";
            cout << "\2.Aeroflot(2)\t14:00\t\t17:05\t\t€145\t\tRefundable\n";
            cout << "\3.Ryanair(3)\t19:00\t\t22:05\t\t€45\t\tRefundable\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))//condition
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.WizzAir(1)\t08:00\t\t11:05\t\t€78\t\tRefundable\n";
            cout << "\2.Aeroflot(2)\t14:00\t\t17:05\t\t€98\t\tRefundable\n";
            cout << "\3.Ryanair(3)\t19:00\t\t22:05\t\t€65\t\tRefundable\n";
        }
        else if(src==dest)//condition
        {
            cout << "\nSource and destination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_flight() //function declaration and definition for selecting flight
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice) // switch case
        {
          case 1://condition
                cout << "\nFlight selected:"<<endl;
                cout << "WizzAir"<<endl;
                strcpy(f_d,"WizzAir");//copy to string
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00"); //copy to string
                strcpy(toja,"11:05");// copy to string
                break;
          case 2://condition
                cout << "\nFlight selected:"<<endl;
                cout << "Aeroflot"<<endl;
                strcpy(f_d,"Aeroflot");//copy to string
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");//copy to string
                strcpy(toja,"17:05");//copy to string
                break;
          case 3://condition
                cout << "\nFlight selected:" << endl;
                cout << "Ryanair" << endl;
                strcpy(f_d,"Ryanair");//copy to string
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");//copy to string
                strcpy(toja,"22:05");//copy to string
                break;
          default://condition
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
    }
};

#endif