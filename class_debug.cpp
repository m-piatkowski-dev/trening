#include <iostream>
#include<string>

class Tank
{
    public:
        float Tcaliber=0.0f;
        float f_Tarmour=0.0f;

        Tank () = default;
        Tank(const float& caliber,const float& f_armour) :
                Tcaliber(caliber), f_Tarmour(f_armour)  {};

        void Print()
        {
            std::cout<<"Tank caliber = "<<Tcaliber<<"\nTank armour = "<<f_Tarmour<<std::endl;
        }

};

int main()
{
    Tank tank;
    tank.Print();
    Tank tank1(152.0f, 200.0f);
    tank1.Print();


}