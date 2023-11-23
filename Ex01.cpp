// Example of Parameterized constructors
#include <iostream>
#include <conio.h>
using namespace std;
class number
{
private:
    int a;
    int b;

public:
    number(int x, int y);//Declaration of the parameterized
    void show();
};
number::number(int x,int y)//Definition of the Parameterized constructor outside the class
{
    a = x;
    b = y;
}
void number::show()
{
    cout << "The value of the a is=" << a << endl;
    cout << "The value of the b is=" << b << endl;
}
int main()
{
    //BY CALLING THE CONSTRUCTOR EXPLICITLY
    number n1=number(100,200);
    //BY CALLING THE CONSTRUCTOR IMPLICITLY
    number n1(100,200);
    n1.show();
    getch();
    return 0;
}