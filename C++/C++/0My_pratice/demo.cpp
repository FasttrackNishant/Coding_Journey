#include <iostream>
#include <math.h>
using namespace std;

class ordinate
{
    int a, b;
    friend ordinate  distance(int a ,int b );

public:
    ordinate(int, int);

    void printpt(int, int)
    {
        cout << "The co-ordinates of the function are (" << a << "," << b << ")" << endl;
    }
    int distance(int, int);
};

ordinate ::ordinate(int x, int y)
{
    a = x;
    b = y;
    printpt(a, b);
    distance(a,b);
}

int   ordinate :: distance (int a,int b )

{  int x1,x2;
    x1 = a;
    x2 = b;
    // y1 = x;
    // y2 = y;
    int r1 = (x2 - x1) * (x2 - x1);
    // int r2 = (2 - y1) * (y2 - y1);
    // int sum = sqrt(r1 + r2);
    int arr ={};

    cout << "The distance between two point is  " << r1<<endl;
  
    return 0;
}

int main()
{

    ordinate first(1, 3);
    ordinate second(1, 2);

    

  
    
   

    return 0;
}