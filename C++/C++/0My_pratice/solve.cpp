#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //     string str = "This is the string str in  the construstor format";
    //     ofstream out("demo.txt");
    //     out << str;

    string str2;
    ifstream in("demo.txt");
    in >> str2;
    getline(in, str2);
    cout << str2;
}