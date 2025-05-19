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
    
    int sayilar;
    int i = 0;
    int sayi;
    int toplam = 0;
  
    cout << "Aritmetik Ortalama Alacaginiz Toplam Sayi : ";

    cin >> sayilar;

    while(i < sayilar)
    {

        i++;

        cout << "Sayi : ";

        cin >> sayi;

        toplam += sayi;

    }

    cout << "Aritmetik Ortalamasi : " << toplam / sayilar << endl;
  
 

    
}
