//constructor

#include<iostream.h>
#include<conio.h>
class Rectangle
{
    public:
    int l;
    int b;
    
    Rectangle(int x,int y)
    {
        l=x;
        b=y;
    }
    void dispvals()
    {
        cout<<"Length="<<l;
        cout<<"Breadth="<<b;
        
    }
    int carea()
    {
        return l*b;
    }
};
    void main()
    {
        Rectangle R(5,3);
        R.dispvals();
        cout<<"Area="<<R.carea();
    }
