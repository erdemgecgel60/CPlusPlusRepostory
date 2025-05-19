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


    int ay;
    int gun;

    cout << "Doğdunuz Ayi Giriniz : ";

    cin >> ay;

    

    switch (ay)
    {
    case 1:

        cout << "Doğdunuz Gunu Giriniz : ";

        cin >> gun;

   
       if (gun < 0 || gun > 31)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 21)
       {

        printf("Oğlak Burcu");

       }

       else 
       {

         printf("Kova Burcu");

       }

       break;

    case 2:

         cout << "Doğdunuz Gunu Giriniz : ";

         cin >> gun;

       if (gun < 0 || gun > 29)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 19)
       {

        printf("Kova Burcu");

       }

       else 
       {

         printf("Balik Burcu");

       }

        break;

    case 3:

      cout << "Doğdunuz Gunu Giriniz : ";

         cin >> gun;

       if (gun < 0 || gun > 31)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 20)
       {

        printf("Balik Burcu");

       }

       else 
       {

         printf("Koç Burcu");

       }

        break;

    case 4:

        cout << "Doğdunuz Gunu Giriniz : ";

         cin >> gun;
       if (gun < 0 || gun > 30)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 20)
       {

        printf("Koç Burcu");

       }

       else 
       {

         printf("Boğa Burcu");

       }

        break;

    case 5:
     
    cout << "Doğdunuz Gunu Giriniz : ";

         cin >> gun;

       if (gun < 0 || gun > 31)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 21)
       {

        printf("Boğa Burcu");

       }

       else 
       {

         printf("İkizler Burcu");

       }

        break;

    case 6:

        cout << "Doğdunuz Gunu Giriniz : ";

         cin >> gun;

       if (gun < 0 || gun > 30)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 22)
       {

        printf("İkizler Burcu");

       }

       else 
       {

         printf("Yengeç Burcu");

       }

        break;

    case 7:

       cout << "Doğdunuz Gunu Giriniz : ";

         cin >> gun;

       if (gun < 0 || gun > 31)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 22)
       {

        printf("Yengeç Burcu");

       }

       else 
       {

         printf("Aslan Burcu");

       }

        break;

    case 8:

      cout << "Doğdunuz Gunu Giriniz : ";

         cin >> gun;

       if (gun < 0 || gun > 31)
       {

        printf("Hatali Secim");
        
       }

       else if (gun <= 23)
       {

        printf("Aslan Burcu");

       }

       else 
       {

         printf("Başak Burcu");

       }

        break;

    case 9:

      cout << "Doğdunuz Gunu Giriniz : ";

         cin >> gun;

       if (gun < 0 || gun > 30)
       {

       cout << "Hatali Secim";
        
       }

       else if (gun <= 22)
       {

        cout << "Başak Burcu";

       }

       else 
       {

         cout << "Terazi Burcu";

       }

        break;

    case 10:

       cout << "Doğdunuz Gunu Giriniz : ";

         cin >> gun;

       if (gun < 0 || gun > 31)
       {

        cout << "Hatali Secim";
        
       }

       else if (gun <= 22)
       {

        cout << "Terazi Burcu";

       }

       else 
       {

         cout << "Akrep Burcu";

       }

        break;

    case 11:

    cout << "Doğdunuz Gunu Giriniz : ";

         cin >> gun;

       if (gun < 0 || gun > 30)
       {

        cout << "Hatali Secim";
        
       }

       else if (gun <= 21)
       {

         cout << "Akrep Burcu" << endl;

       }

       else 
       {

         cout << "Yay Burcu" << endl;

       }

        break;

    case 12:

       cout << "Doğdunuz Gunu Giriniz : ";

         cin >> gun;

       if (gun < 0 || gun > 31)
       {

        cout << "Hatali Secim";
        
       }

       else if (gun <= 21)
       {

        cout <<  "Yay Burcu";

       }

       else 
       {

         cout <<  "Oğlak Burcu";

       }

        break;
     
    default:


     cout << "Hatali Secim!";
        break;
    }
    

 
}
