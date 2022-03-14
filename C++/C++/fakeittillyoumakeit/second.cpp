#include <iostream>
using namespace std;

class math
{
private:
    int a, b;
    friend math complexsum(math m1, math m2);

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void getData()
    {
        cout << "The value of complex number is " << a << " + " << b << "i" << endl;
    }
};
math complexsum(math m1, math m2)
{
    math o3;
    o3.setdata((m1.a + m2.a), (m1.b + m2.b));
    return o3;
}

int main()
{
    math num1, num2, sum;

    num1.setdata(5, 3);
    num1.getData();

    num2.setdata(50, 30);
    num2.getData();

    sum = complexsum(num1, num2);
    sum.getData();

    return 0;
}