//
//  main.cpp
//  C++L3P1
//
//  Created by Tadeusz Potoniec on 23/01/2023.
//Based on https://www.youtube.com/watch?v=ErOzmh3BiXU&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo

#include <iostream>
#include <unistd.h> //The library used for countdown time

using namespace std;

int main() {
    for (int i=15;i>0;i--)
    {
        sleep(1);
        cout<<i<<endl;
    }
    cout<<"BOOM"<<endl;
    return 0;
}

//++ OR i=i+1 to increment
//for (int i=1;i<=10;i++)//What value i we start/when the loop should stop/what should happen with i after each loop
