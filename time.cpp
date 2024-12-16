/*
Andrew Sinha
Time and Date Lab
12.12.2024
Extra:
*/

#include <iostream>
#include <ctime>
using namespace std;

int toff;
int ans;
//Q1: If it is 10AM in London. What time is it in Tokyo? What is the UTC offset?
//A: It will be 7PM in Tokyo due to the UTC offset being UTC+9.

//Q2: What is the UTC offset for Mountain Standard Time?
//A: The UTC offset is UTC-7

int main(){

    //Problem 1
    time_t now = time(nullptr);
    cout << "Current time: " << ctime(&now);
    
    
    //Problem 2
    cout << "Enter a timezone offset from UTC (focus on hours)" << endl;
    cin >> toff;

    time_t current = time(nullptr);
    //3600 due to seconds and minuteds (60*60)
    current += (toff * 3600);
    //convert
    tm* timeZoneTime = gmtime(&current);
    //make readable
    cout << "The time in that timezone is: " << asctime(timeZoneTime) << endl; 

    //Problem 3
    cout << "what is 1 + 1?" << endl;
    time_t start = time(nullptr);
    cin >> ans;

    cout << "It took you approximately " << time(nullptr) - start << " Seconds to answer this question." << endl;
    return 0;   
}
