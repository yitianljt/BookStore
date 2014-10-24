//
//  Rental.h
//  BookStore
//
//  Created by jintao on 14-10-23.
//  Copyright (c) 2014年 jintao. All rights reserved.
//

#ifndef __BookStore__Rental__
#define __BookStore__Rental__

#include <stdio.h>
#include "Movie.h"

class Rental {
public:
    Rental(Movie* movie ,int daysRented);
    ~Rental();
    
    int getDaysRented();
    Movie* getMovie();
    double getCharge();

    
private:
    Movie* _movie;
    int  _daysRental;
};

#endif /* defined(__BookStore__Rental__) */
