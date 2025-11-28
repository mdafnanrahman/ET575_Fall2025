/**
 * Md afnan rahman
 * Nov 11 2025
 * Lab 18
 */

#include<iostream>
using namespace std;

int collectnumber(int a[]){
    int num;
    int count = 0;
    do{
        cout<<"Enter a non-zero number (0 to stop): ";
        cin>>num;
        if(num != 0){
            a[count] = num;
            count++;
        }
    }while(num != 0 && count < 5);
    return count;
}

float Averagenumber(int a[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += a[i];
    }
    return (float)sum / size;
}

int Closestmean(int a[], int size, float avg){
    float mindiff = abs(a[0] - avg);
    int closest = a[0];

    for(int i = 1; i < size; i++){
        float diff = abs(a[i] - avg);

        if(diff < mindiff){
            mindiff = diff;
            closest = a[i];
        }
    }

    return closest;
}

void Printresult(float avg, int closest){
    cout<<"The closest number to average "<<avg<<" is "<<closest<<"."<<endl;
}
