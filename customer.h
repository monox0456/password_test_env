//
// Created by HN on 24.09.2021.
//
#ifndef PASSWORD_CUSTOMER_H
#define PASSWORD_CUSTOMER_H

#include <string>
#include "randomservice.h"
using namespace std;

class customer{
private:
    string name;
    string password;
    float balance;
    int acc_number;
    randomservice Source;
    void pickName();
public:
    customer();
    ~customer();

};


#endif //PASSWORD_CUSTOMER_H
