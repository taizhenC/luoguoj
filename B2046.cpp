#include <iostream>
using namespace std;

int main(){
    int meter;
    double walk = 1.2;
    double bike = 3.0;
    cin >> meter;

    if(meter/walk == (meter/bike)+50) puts ("All");
    if(meter/walk > (meter/bike)+50) puts("Bike");
    if(meter/walk < (meter/bike)+50) puts("Walk");


}