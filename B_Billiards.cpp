#include<bits/stdc++.h>

using namespace std;


int main()
{
    double sx, gx, sy, gy;
    cin>> sx>> sy>>  gx>> gy;

    double xdif= gx-sx;

    cout<< setprecision(10)<< fixed<< sx+(sy*xdif)/(gy+sy)<< "\n";
}