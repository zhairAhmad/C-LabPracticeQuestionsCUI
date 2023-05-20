#include <iostream>
using namespace std; 
class Distance {
    private: 
    int feet; 
    float inches; 
    public: 
    Distance():feet(0), inches(0.0){};
    Distance(int fee, float inche):feet(fee), inches(inche){}; 
   void display(){
    cout<< "\n Display \n"; 
    cout<<"Feet :"<<feet; 
    cout<<" Inches: "<<inches; 
   }
   void get(){
     cout<<"\nEnter Feets: "; 
     cin>>feet; 
     cout<<"\nEnter Inches: "; 
     cin>>inches; 
   }
   void add(Distance); 
};
void Distance::add (Distance d){
    int TotalFeet = feet + d.feet; 
    float TotalInches = inches + d.inches; 
    if(TotalInches >= 12){
        TotalFeet++; 
        TotalInches = 0; 
    }

    cout<<"Feet :"<<TotalFeet; 
    cout<<" Inches: "<<TotalInches;    
}
int main(){
    Distance d1(12, 4.5); 
    Distance d2(2, 8);
    cout<<endl;
    d2.display(); 
    cout<<endl;
    d1.add(d2);  
}