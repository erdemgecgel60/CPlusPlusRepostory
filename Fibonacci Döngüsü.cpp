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
    
    
    int ilksayi = 1;
    int ikincsayi = 1;
    int piyonDegisken;

    int boyut;

    cout << "Boyut : ";

    cin >> boyut;

    for (int i = 0; i < boyut - 2; i++)
    {

        piyonDegisken = ikincsayi;

        ikincsayi += ilksayi;

        ilksayi = piyonDegisken;
        
    }

    cout << "Toplam : " << ikincsayi << endl;
    

    


    
}
