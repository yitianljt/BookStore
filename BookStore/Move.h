//
//  Move.h
//  Bookstore
//
//  Created by jintao on 14-10-23.
//
//

#ifndef __Bookstore__Move__
#define __Bookstore__Move__

#include <stdio.h>
#include <string>

class Move{
public:
    Move(std::string* title,int code);
    ~Move();
    
    std::string* getTitle();
    int getPriceCode();
    
private:
    std::string* _title;
    int _priceCode;
    
};
#endif /* defined(__Bookstore__Move__) */
