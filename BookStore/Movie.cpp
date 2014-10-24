//
//  Movie.cpp
//  Bookstore
//
//  Created by jintao on 14-10-23.
//
//

#include "Movie.h"

using namespace std;


Movie::Movie(string title,int code)
{
    _title = title;
    _priceCode = code;
}

Movie::~Movie()
{
    
}

string Movie::getTitle()
{
    return _title;
}

int Movie::getPriceCode()
{
    return _priceCode;
}

double Movie::getCharge(int aDays)
{
    double result = 0.0;
    switch (getPriceCode()) {
        case REGULAR:
        {
            result+=2;
            if (aDays >2)
            {
                result+=(aDays-2)*1.5;
            }
            break;
        }
        case NEW_RELEASE:
        {
            result += aDays*3;
            break;
        }
        case CHILDRENS:
        {
            result+=1.5;
            if (aDays>3) {
                result += (aDays-3)*1.5;
            }
            break;
        }
        default:
            break;
    }
    return  result;

}