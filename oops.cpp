#include<iostream.h>
#include<conio.h>
#include<string.h>
class IceCream
{
    public:
    int price;
    int quantity;
    double wt;
    char color[20];
    
    void melt()
    {
        cout<<"It Melts at room temperature"<<endl;
    }
    
    void sales()
    {
        cout<<"Sale of icecream is high in summer"<<endl;
    }
    int billamt()
    {
        return price*quantity;
    }
};
void main()
{
    IceCream Vanilla;
    Vanilla.price=20;
    Vanilla.quantity=500;
    Vanilla.wt=45.5;
    
    cout<<"Price of vanilla="<<Vanilla.price<<endl;
    cout<<"Quantity of vanilla="<<Vanilla.quantity<<endl;
    cout<<"Weight of Vanilla="<<Vanilla.wt<<endl;
    cout<<"Color of Vanilla="<<strcpy(Vanilla.color,"white");
    Vanilla.melt();
    Vanilla.sales();
    cout<<"Bill Amount="<<Vanilla.billamt();
}
