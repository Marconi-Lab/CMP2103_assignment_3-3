#ifndef MAIN_H
#define MAIN_H
#include<string>
#include<cmath>
#include <iostream>
#include<bits/stdc++.h>

//using namespace std;

int count_digits(double num){
int wh_num = static_cast<int>(num);
std::string val = std::to_string(wh_num);
return val.length();
}


int extract_decimal(double num){
    double d = num - static_cast<int>(num);

    d = d*100 + 0.1;

    return static_cast<int>(d);
}

int sum_of_digits(int numb){
    int sum=0;
while(numb>0){
    int m = numb%10;
    sum = sum + m;
    numb = numb/10;
}
return sum;
}

bool is_valid(double value){
    int digits_count = count_digits(value);
    int decimal_value = extract_decimal(value);
    int digits_sum = sum_of_digits(decimal_value);

    return digits_sum == digits_count;
}
#endif // MAIN_H
