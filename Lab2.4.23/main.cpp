/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tmiller
 *
 * Created on September 6, 2017, 1:52 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    unsigned long bitMask = 1;
    int inputNumber;
    int total = 0;
    std::cout << "Enter a number" << std::endl;
    cin >> inputNumber;
    
    while(bitMask != 0)
    {
       if(inputNumber & bitMask)
       {
           total = total + 1;
       }
       bitMask = bitMask << 1;
    }
    
    std::cout << total << std::endl;
    
    return 0;
}

