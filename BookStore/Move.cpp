//
//  Move.cpp
//  Bookstore
//
//  Created by jintao on 14-10-23.
//
//

#include "Move.h"

using namespace std;


Move::Move(string* title,int code)
{
    _title = title;
    _priceCode = code;
}

Move::~Move()
{

}

string* Move::getTitle()
{
    return _title;
}

int Move::getPriceCode()
{
    return _priceCode;
}