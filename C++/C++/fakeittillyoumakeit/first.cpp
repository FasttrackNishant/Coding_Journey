#include <iostream>
using namespace std;

class Binary
{
    string str;
    void chk_bin();

public:
    void setbin();
    void printbin();
    void onecompli();
};

void Binary ::setbin()
{

    cout << "enter the binary number " << endl;
    cin >> str;
    chk_bin();
}
void Binary ::chk_bin()
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '0' && str.at(i) != '1')
        {
            cout << "Invalid Binary Number " << endl;
            exit(0);
        }
    }
}
void Binary ::printbin()
{
    cout << "Your binary number is " << str << endl;
}

void Binary ::onecompli()
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == '1')
        {
            str.at(i) = '0';
        }
        else
        {
            str.at(i) = '1';
        }
    }
    
        cout << "Complemention done "<< endl;
    }

    int main()
    {
        Binary harry;
        harry.setbin();
        harry.printbin();
        harry.onecompli();
        harry.printbin();

        return 0;
    }