//
//  Movie.cpp
//  Bookstore
//
//  Created by jintao on 14-10-23.
//
//

#include "Movie.h"

using namespace std;


Movie::Movie(string* title,int code)
{
    _title = title;
    _priceCode = code;
}

Movie::~Movie()
{
    
}

string* Movie::getTitle()
{
    return _title;
}

int Movie::getPriceCode()
{
    return _priceCode;
}