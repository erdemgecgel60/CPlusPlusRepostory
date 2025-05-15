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

  
     int kenar1,kenar2;

     cout << "1.Kenar : " ;

     cin >> kenar1;

     cout << "2.Kenar : ";

     cin >> kenar2;

     float total = (kenar1 * kenar1) + (kenar2 * kenar2);

     float total2 = sqrt(total);

     cout << "Hipotenus : " << total2 << endl;     
     
    
     



}
