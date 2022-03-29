// PrimeNumberGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Heather Johnson
//This program produces all the prime numbers between two given numbers.

#include <iostream>
using namespace std;

int main()
{
    int userFrom, userTo, i;
    bool primeNum = true;
    
    //obtain range from user
    cout << "Please enter beginning number:";
        cin >> userFrom;
    cout << "Please enter ending number:";
        cin >> userTo;
    //sort based on whether or not primeNum is true or false
    while (userFrom < userTo) {
        primeNum = true;

        if (userFrom == 0 || userFrom == 1) {
            primeNum = false;
        }
        for (i = 2; i <= userFrom / 2; ++i) {
            if (userFrom % i == 0) {
                primeNum = false;
                break;
            }
        }
        if (primeNum) {
            cout << userFrom << ", ";
        }
        ++userFrom;
    }
        return 0;

}


