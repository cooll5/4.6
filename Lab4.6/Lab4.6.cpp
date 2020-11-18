#include <iostream> #include <cmath> 

using namespace std;

int main() {
    double P, S;     
    int j, i;

    P = 1;     
    j = 1;     
    while (j <= 15) 
    { 
        S = 0;         
        i = j;         
        while (i <= pow(j, 2))
        { 
            S += i * i;
            i++; 
        }        
        P *= sqrt(S);         
        pow(j, 2)++; 
    }     
    cout << P << endl;

    P = 1;    
    i = j;  
    do { 
        S = 0;
        i = 1;     
        do { S += i * i;     
        i++; 
        } 
        while (i <= pow(j, 2));         
        P *= sqrt(S);
        i++
    }
    while (j <= 15);  
        cout << P << endl;

    P = 1;     
    for (j = 1; j <= 15; i++) 
  { S = 0;         
    for (i = 1; i <= j; i++) 
  { S += i * i; 
  }        
    P *= sqrt(S); 
  }    
    cout << P << endl;
    return 0;
}   