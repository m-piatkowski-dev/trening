#include <iostream>

void func(int, int);
static int nowa_zmiana = 10;

int main()
{
    int a = 5;
    int b = 2;
    func(a,b);
    func(10,12);
    func(100,200);
    func(-2,-10);
}

    void func(int a, int b)
    {
        a=a;
        b=b;
        static int c = 10;
        c++;
        static int d = 20;
        d+=10;
        std::cout<<"a ="<<a<<","<<"b= "<<b<<", "<<"c= "<<c<<","<<"d= "<<d<<std::endl;
    }
