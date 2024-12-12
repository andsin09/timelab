/*
Andrew Sinha
Time and Date Lab
12.12.2024
Extra:
*/

#include <iostream>
#include <ctime>
using namespace std;


//Q1: If it is 10AM in London. What time is it in Tokyo? What is the UTC offset?
//A: It will be 7PM in Tokyo due to the UTC offset being UTC+9.

//Q2: What is the UTC offset for Mountain Standard Time?
//A: The UTC offset is UTC-7

int main(){
    time_t now = time(nullptr);
    cout << "Current time: " << ctime(&now);
    return 0;    
}