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

    int boyut;
   
     cout << "Boyut : " ;

     cin >> boyut;


     for (int i = boyut; i > 0; i--)
     {


      for (int j = 1; j <= i; j++)
      {

        cout << "*" ;

      }

      cout << endl;
      
        
    
     }
     



}
