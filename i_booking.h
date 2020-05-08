#ifndef I_BOOKING
#define I_BOOKING

#include<iostream>
#include <string.h>
#include<fstream>
using namespace std;

extern int glob;
extern int global;

class i_booking//class for international booking
{
protected://protected members
    int pnri,flag = 0;
    char f_i[10],tojai[7],tojdi[7];
    long int doji;
    int srci,desti,choicei;
    int dayi, monthi, yeari;
public://public member functions
    void i_pnr()
    {
        global++;//increment variable
        pnri=global;
    }
    int j_detaili()// function declaration and definition for journey details
    {
        while (flag == 0) {
        cout << "\nEnter DateOfJourney(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin >> dayi >> monthi >> yeari;
        if(yeari>0)
       {
         if(monthi==1 || monthi==3 || monthi==5|| monthi==7|| monthi==8||monthi==10||monthi==12 && dayi>0 && dayi<=31){
         cout<<"Date is Valid" << endl;
         flag++;
         }
         else if(monthi==4 || monthi==6 || monthi==9|| monthi==11 && dayi>0 && dayi<=30){
            cout<<"Date is Valid" << endl;
            flag++;
         }
         else if(monthi==2){
               if((yeari%400==0 || (yeari%100!=0 && yeari%4==0)) && dayi>0 && dayi<=29)
                 cout<<"Date is Valid" << endl;
               else if(dayi>0 && dayi<=28){
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
        cout << "\1.Stockholm(1) \2.Helsinki(2) \3.Vienna(3) \4.Madrid(4) \5.Oslo(5) " << endl << endl;
        cout << "\tEnter Origin: " << endl;
        cin >> srci;
        cout << "\nEnter destination: " <<endl;
        cin >> desti;
        cout << "\t \t \tFlights Found" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Lufthasa(1)\t10:00\t\t14:05\t\t€650\tRefundable\n";
            cout << "\2.Aeroflot(2)\t14:00\t\t18:05\t\t€540\tRefundable\n";
            cout << "\3.Air France(3)\t18:00\t\t22:05\t\t€590\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Lufthasa(1)\t10:00\t\t14:05\t\t€478\tRefundable\n";
            cout << "\2.Aeroflot(2)\t14:00\t\t18:05\t\t€310\tRefundable\n";
            cout << "\3.Air France(3)\t18:00\t\t22:05\t\t€440\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Lufthasa(1)\t10:00\t\t14:05\t\t€560\tRefundable\n";
            cout << "\2.Aeroflot(2)\t14:00\t\t18:05\t\t€800\tRefundable\n";
            cout << "\3.Air France(3)\t18:00\t\t22:05\t\t€880\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Lufthasa(1)\t10:00\t\t14:05\t\t€480\tRefundable\n";
            cout << "\2.Aeroflot(2)\t14:00\t\t18:05\t\t€270\tRefundable\n";
            cout << "\3.Air France(3)\t18:00\t\t22:05\t\t€330\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Lufthasa(1)\t10:00\t\t14:05\t\t€499\tRefundable\n";
            cout << "\2.Aeroflot(2)\t14:00\t\t18:05\t\t€520\tRefundable\n";
            cout << "\3.Air France(3)\t18:00\t\t22:05\t\t€500\tRefundable\n";        }

        else if(srci==2 && desti==5 || (srci==5 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Lufthasa(1)\t10:00\t\t14:05\t\t€385\tRefundable\n";
            cout << "\2.Aeroflot(2)\t14:00\t\t18:05\t\t€320\tRefundable\n";
            cout << "\3.Air France(3)\t18:00\t\t22:05\t\t€349\tRefundable\n";

        }
        else if(srci==desti)//condition
        {
            cout << "Wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else//condition
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }

    int select_flighti()//function declaration and definition for selecting flight
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)//switch case
        {
        case 1://condition
            cout << "\nFlight selected:" <<endl;
            cout << "Lufthasa" << endl;
            strcpy(f_i,"Lufthasa");//copy to string
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");//copy to string
            strcpy(tojai,"14:05");//copy to string
            break;
        case 2://condition
               cout << "\nFlight selected:" << endl;
               cout << "Aeroflot" << endl;
               strcpy(f_i,"Aeroflot");//copy to string
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");//copy to string
                strcpy(tojai,"18:05");//copy to string
                break;
        case 3://condition
            cout << "\nFlight selected:" << endl;
            cout << "Air France" << endl;
            strcpy(f_i,"Air France");//copy to string
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");//copy to string
            strcpy(tojai,"22:05");//copy to string
            break;
        default://condition
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
};
#endif