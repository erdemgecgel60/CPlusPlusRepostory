#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <time.h>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <vector>
#include <math.h> 
using namespace std;
int main()
{    

     int sayi;

     int hane = 0;

     cout << "Sayi : ";

     cin >> sayi;

    do
    {

        sayi = sayi / 10;

        hane++;

    } while (sayi > 0);

    cout << "Toplam Hane Sayisi : " << hane << endl;
     
    
     



}
