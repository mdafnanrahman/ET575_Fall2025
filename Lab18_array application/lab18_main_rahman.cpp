/**
 * Md afnan rahman
 * Nov 11 2025
 * Lab 18
 */

#include<iostream>
#include "lab18_function_rahman.cpp"
using namespace std;

int main(){
    int a[5];
    int size = collectnumber(a);
    float avg = Averagenumber(a, size);
    int closest = Closestmean(a, size, avg);
    Printresult(avg, closest);

    return 0;
}
