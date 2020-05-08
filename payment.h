#ifndef PAYMENT
#define PAYMENT

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

extern int glob;
extern int global;


class payment//class for payment
{
protected://protected members
    long int choice1,bank,date,cvv,user_id;
    string card;
    int flag = 0;
    char password[10];
public://public members functions
int isNumberString(const string& s) {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] < '0' || s[i] > '9')
            flag =0;
    }
    flag++;
} 

    void pay_detail()//function declaration and definition for payment method
    {    
        cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n\1.Debit Card(1) \n\2.Credit Card(2) \n\3.Net Banking(3)";
        cout << "\n\nEnter your choice";
        cin >> choice1;
        switch(choice1)//switch case
        {
        case 1://condition
            while (flag == 0) {
            cout << "\nEnter valid card no.:";
            cin >> card;
            if (!isNumberString(card)) {
            cout << "Bad input! Input a Vaild card number. ";
            flag =0;
            }
            int len = card.length();
            int doubleEvenSum = 0;

            for (int i = len - 2; i >= 0; i = i - 2) {
            int dbl = ((card[i] - 48) * 2);
            if (dbl > 9) {
                dbl = (dbl / 10) + (dbl % 10);
            }
                doubleEvenSum += dbl;
            }

            for (int i = len - 1; i >= 0; i = i - 2) {
                doubleEvenSum += (card[i] - 48);
            }

            if(doubleEvenSum % 10 == 0){
                cout<< "Card is Valid!"<< endl;
                flag++;
            }
            else {
                 cout <<"Invalid! Card. Input a Vaild card number" << endl;
            flag = 0;
            }   
            }
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2://condition
            while (flag == 0) {
            cout << "\nEnter valid card no.:";
            cin >> card;
            if (!isNumberString(card)) {
            cout << "Bad input! Input a Vaild card number. ";
            flag =0;
            }
            int len = card.length();
            int doubleEvenSum = 0;

            for (int i = len - 2; i >= 0; i = i - 2) {
            int dbl = ((card[i] - 48) * 2);
            if (dbl > 9) {
                dbl = (dbl / 10) + (dbl % 10);
            }
                doubleEvenSum += dbl;
            }

            for (int i = len - 1; i >= 0; i = i - 2) {
                doubleEvenSum += (card[i] - 48);
            }

            if(doubleEvenSum % 10 == 0){
                cout<< "Card is Valid!"<< endl;
                flag++;
            }
            else {
                 cout <<"Invalid! Card. Input a Vaild card number" << endl;
            flag = 0;
            }   
            }
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3://condition
            cout << "Banks Available: \1.SEB(1) \2.Danske Bank(2) \3.Swebank(3) \4.Luminor Bank(4) \5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default://condition
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }

};

#endif