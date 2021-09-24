//
// Created by HN on 24.09.2021.
//

#include "customer.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

customer::customer(){
    pickName();
    this->balance = Source.generateBalance();
    this->acc_number = Source.generateAccountNumber();
}

customer::~customer(){

}

void customer::pickName(){
    int random = Source.generateName();
    ifstream nameslist;
    nameslist.open("C:/Users/HN/CLionProjects/password/example_name.txt");
    for(int i = 0; i <= random; i++)
    {
        getline(nameslist, this->name);
    }
    nameslist.close();
}
