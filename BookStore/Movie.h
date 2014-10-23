//
//  Movie.h
//  Bookstore
//
//  Created by jintao on 14-10-23.
//
//

#ifndef __Bookstore__Movie__
#define __Bookstore__Movie__

#include <stdio.h>
#include <string>

enum{
    CHILDRENS=2,
    REGULAR = 0,
    NEW_RELEASE = 1
};

class Movie{
public:
    Movie(std::string* title,int code);
    ~Movie();
    
    std::string* getTitle();
    int getPriceCode();
    
private:
    std::string* _title;
    int _priceCode;
    
};
#endif /* defined(__Bookstore__Movie__) */
