//
//  Customer.cpp
//  BookStore
//
//  Created by jintao on 14-10-23.
//  Copyright (c) 2014年 jintao. All rights reserved.
//

#include "Customer.h"
#include <stdio.h>
using namespace std;

Customer::Customer(string name)
{
    _vecRental = new vector<Rental*>;
    _name = name;
}

void Customer::addRental(Rental* arg)
{
    _vecRental->push_back(arg);
}

string Customer::getName()
{
    return _name;
}

string Customer::statement()
{
    //
    double totalAmount = 0;
    int frequentRenterPoints = 0;
    for (vector<Rental*>::iterator it = _vecRental->begin(); it != _vecRental->end(); it++) {
        double thisAmount = 0;
        Rental* rental = (Rental*)*it;
        switch (rental->getMovie()->getPriceCode()) {
            case REGULAR:
            {
                thisAmount+=2;
                if (rental->getDaysRented() >2)
                {
                    thisAmount+=(rental->getDaysRented()-2)*1.5;
                }
                break;
            }
            case NEW_RELEASE:
            {
                thisAmount += rental->getDaysRented()*3;
                break;
            }
            case CHILDRENS:
            {
                thisAmount+=1.5;
                if (rental->getDaysRented()>3) {
                    thisAmount += (rental->getDaysRented()-3)*1.5;
                }
                break;
            }
            default:
                break;
        }
        
        frequentRenterPoints++;
        if (rental->getMovie()->getPriceCode()==NEW_RELEASE &&
            rental->getDaysRented()>1) {
            frequentRenterPoints++;
        }
        
        totalAmount += thisAmount;
        printf("thisAmount = %f",thisAmount);
    }
    char buff[100];
    sprintf(buff,"Total:%f", totalAmount);
    string result =buff;
    
    
    return result;
}
