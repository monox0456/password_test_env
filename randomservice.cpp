//
// Created by HN on 24.09.2021.
//

#include <random>
#include <iostream>
#include "randomservice.h"

using namespace std;

randomservice::randomservice(){

}

randomservice::~randomservice(){

}

int randomservice::generateAccountNumber(){
    int min = 1;
    int max = 9999;
    int res = subservice(min, max);

    return res;
}

int randomservice::generateBalance(){
    int min = 1;
    int max = 999999;
    int res = subservice(min, max);

    return res;
}

int randomservice::generateName(){
    int min = 0;
    int max = 49;
    int res = subservice(min, max);

    return res;
}

int randomservice::subservice(int min, int max){
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(min,max);
    int rand = dist6(rng);

    return rand;
}