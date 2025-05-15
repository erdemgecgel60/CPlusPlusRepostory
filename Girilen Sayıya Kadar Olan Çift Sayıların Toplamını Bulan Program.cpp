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

    for (int i = 1; i < sayi; i++)
    {


        if (i % 2 == 1)
        {

            continue;
           
        }

        toplam += i;
         
        

         
    }
    
    cout << "Toplam : " << toplam << endl;
 


}
