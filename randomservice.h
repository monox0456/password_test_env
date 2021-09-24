//
// Created by HN on 24.09.2021.
//

#ifndef PASSWORD_RANDOMSERVICE_H
#define PASSWORD_RANDOMSERVICE_H


class randomservice{
private:
    int random;
    int subservice(int, int);
public:
    randomservice();
    ~randomservice();
    int generateBalance();
    int generateName();
    int generateAccountNumber();
};


#endif //PASSWORD_RANDOMSERVICE_H
