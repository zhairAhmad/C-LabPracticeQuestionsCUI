#include <iostream>
using namespace std; 
class Time{
  private:
   int hours; 
   int minutes; 
   int seconds; 
  public:
  Time(): hours(0), minutes(0), seconds(0){}; 
  Time(int hours, int minutes, int seconds): hours(hours), minutes(minutes), seconds(seconds){};
  void display(){
    cout<<"Current Time: "<<hours<<":"<<minutes<<":"<<seconds; 
  }
  Time operator ++(){
     minutes++;
     if(minutes >= 60){
        hours++; 
        minutes =0; 
     }
     return Time(hours, minutes, seconds); 
  }

  Time operator --(){
     minutes--;
     if(minutes <= 0){
        hours--; 
        minutes =59; 
     }
     return Time(hours, minutes, seconds); 
  }
}; 
int main(){
    Time t1(8, 59, 50); 
    t1.display(); 
    cout<<" \n++ by 1 min\n"; 
    ++t1; 
    t1.display(); 
    cout<<" \n-- by 1 min\n"; 
    --t1; 
    t1.display(); 

}
