//
//  main.m
//  BookStore
//
//  Created by jintao on 14-10-23.
//  Copyright (c) 2014年 jintao. All rights reserved.
//

#include <iostream>
#include "Customer.h"
#include "Rental.h"
#include "Movie.h"


using namespace std;
int main()
{
    cout << "Hello Mac!" << endl;
    Customer* customer = new Customer("Tom");
    Movie* movie = new Movie("Code",CHILDRENS);
    Rental* rent = new Rental(movie,5);
    customer->addRental(rent);
    cout << customer->statement()<< endl;

    ;
    return 0;
}

