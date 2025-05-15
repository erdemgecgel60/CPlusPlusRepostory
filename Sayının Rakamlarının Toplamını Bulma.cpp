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

     int toplam = 0;

     cout << "Sayi : ";

     cin >> sayi;

    do
    {

        toplam += sayi % 10;

        sayi = sayi / 10;
        
    } while (sayi > 0);

    cout << "Rakamlarin Toplami : " << toplam << endl;
    
     



}
