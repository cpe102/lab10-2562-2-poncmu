// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <string.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    int i=0;
       cout<<"Press Enter 3 times to reveal your future."<<endl;
    while(i<3)
    {
   
     cin.get();
        i++;
    }
    int x=rand()%9+1;
    cout<<"You will get ";
    switch(x)
    {
        case 1 : cout<<"A"; break;
        case 2 : cout<<"B+"; break;
        case 3 : cout<<"B"; break;
        case 4 : cout<<"C+"; break;
        case 5 : cout<<"C"; break;
        case 6 : cout<<"D+"; break;
        case 7 : cout<<"D"; break;
        case 8  : cout<<"F"; break;
        case 9 : cout<<"w"; break;
    }
    cout<<" in this 261102";
}