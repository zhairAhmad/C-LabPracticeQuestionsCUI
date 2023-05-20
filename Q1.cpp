#include <iostream>
#include <conio.h>
using namespace std; 
class toolbooth{
private: 
unsigned int cars; 
double payments; 
public: 
toolbooth(): cars(0), payments(0.0){}; 
void payingCar(){
cout<<" \n Paying Car \n"; 
cars++; 
payments +=0.50; 
}

void nopayCar(){
    cout<<"\n No pay Car \n"; 
    cars++; 
}
void display() const{
    cout<<" \n RResutls  \n"; 
    cout<<"Cars :"<<cars; 
    cout<<"\n Ammount :"<<payments; 
}


}; 
int main(){
    toolbooth record; 
 char input;
cout<<" Press p for paying cars \n Press n for paying car \n Press ESc to exit and show record \n"; 
 do{
    cout<<"Input "; 
    input = _getch();
    cout<<input<<" "; 
   switch (input)
   {
   case 'p':
 record.payingCar(); 
    break;
   case 'n': 
  record.nopayCar(); 
   break;

   case 27: 
 record.display(); 
   cout<<"\nExisting....\n"; 
   break;
   default:
   cout<<"Invalid Input \n"; 
    break;
   }
 } while(input !=27);

}