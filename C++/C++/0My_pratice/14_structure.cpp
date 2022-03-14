#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char letter;
    float salary;
};
union soap
{
    int value;
    char name;
    float code;
};

int main()
{
    struct Employee harry;
    harry.id = 45;
    harry.letter = 'd';
    harry.salary = 142.25;

    // cout << harry.salary << endl;
    // cout << harry.letter << endl;
    // cout << harry.id << endl;

    union soap santoor;

    santoor.name = 's';
    // santoor.value = 46;
    // santoor.code = 12;

    cout << santoor.name << endl;
    // cout << santoor.value << endl;


cout<<"enum starts from here"<<endl;

enum disco{ dance ,party , competition};

cout<<competition<<endl;

disco d1 = party;
if(d1==0)
{
    cout<<"This is true condition"<<endl;
}
else 
{
    cout<<"no one match found"<<endl;
}

    cout << "this is the pratice" << endl;
    return 0;
}