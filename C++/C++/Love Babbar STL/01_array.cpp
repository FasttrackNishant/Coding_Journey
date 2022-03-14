#include <iostream>
#include <array>
using namespace std;
int main()
{
    int arr[10] = {54, 6, 7, 4, 7, 5};

    array<int, 5> ar = {454, 65, 678, 5, 78};

    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }

    cout << "Element at index " << ar.at(3) << endl;

    cout << ar.back();
}