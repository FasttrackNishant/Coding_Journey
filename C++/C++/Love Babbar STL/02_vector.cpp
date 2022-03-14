#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> vict(3, 1);

    vict.push_back(4);

    for (int i : vict)
    {
        cout << i << " " << endl;
    }
    cout << "The size of vector is " << vict.size() << " ";
    cout << "The capacity of vector is " << vict.capacity();

    return 0;
}