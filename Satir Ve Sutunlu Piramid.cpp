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
    
    
    int satir;
    int sutun;

    cout << "Satir : ";

    cin >> satir;

    cout << "Sutun : ";

    cin >> sutun;


    for (int i = 0; i < satir; i++)
    {

        for (int j = 0; j < sutun; j++)
        {

            cout << "*";
             
        }
        
        cout << endl;
      
    }
    


    
}
