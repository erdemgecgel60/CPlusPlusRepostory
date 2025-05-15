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

    cout << "Sayi : " ;

    cin >> sayi;

    bool asal = true;

    for (int i = 2; i < sayi; i++)
    {

        if (sayi % i == 0)
        {

            asal = false;

            break;
            
        }
        
       
    }

    if (asal) 
    {

        cout << "Sayi Asaldir!" << endl;

    }
    
    else
    {

        cout << "Sayi Asal Degildir!" << endl;

    }
     
    
     



}
