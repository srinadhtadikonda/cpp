#include<iostream.h>
#include<conio.h>
class MyCalci
{
    public:
    static int x;
    static int y;
    
    static void shwvals()
    {
        cout<<"Value of x="<<x<<"\n";
        cout<<"Value of y="<<y;
    }
    static int mysum()
    {
        return x+y;
    }
};
// Static member initialization outside the class
int MyCalci::x = 5;
int MyCalci::y = 3;
void main()
{
    MyCalci::shwvals();
    cout<<"\nSum="<<MyCalci::mysum();
}

