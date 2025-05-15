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
    

    int toplam = 1;
    cout << "Sayi : ";

    cin >> sayi;

    for (sayi; sayi > 0; sayi--)
    {


       toplam *= sayi;

         
    }
    
    cout << "Toplam : " << toplam << endl;
 


}
