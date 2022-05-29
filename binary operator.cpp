#include<iostream>
using namespace std;

class Distance{
        private:
        int meter;
        int centimeter;

        public:
            Distance(int m = 0 ,int c = 0){
                meter = m;
                centimeter = c;
              //  cout<<meter<<" "<<centimeter<<endl;
              }

              Distance operator+(Distance obj){
                          meter = meter + obj.meter;
                          centimeter = centimeter + obj.centimeter;
                        //  cout<<meter<<" "<<centimeter<<endl;
                          Distance D(meter,centimeter);
                          return D;
              }

         void simplify()
         {
             meter = meter + centimeter/100;
             centimeter%= 100;
         }

        void Display()
        {
            cout<<"Meter:  "<<meter<<" "<<"Centimeter: "<<centimeter<<endl;
        }

};

int main()
{
    Distance D1(70,200);
    Distance D2(20,50);

    Distance D3 = D1+D2;
    D3.Display();
    D3.simplify();
    D3.Display();
}
