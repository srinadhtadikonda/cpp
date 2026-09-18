//constructor

#include<iostream.h>
#include<conio.h>
class Rectangle
{
    public:
    int l;
    int b;
    
    Rectangle()
    {
        l=20;
        b=10;
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
        Rectangle R;
        R.dispvals();
        cout<<"Area="<<R.carea();
    }
