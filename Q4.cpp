#include <iostream>
using namespace std; 
class Array{
  private: 
  enum{size=5};
  int arr[size];
  public: 
  Array(){
    for(int i=0; i<size; i++){
        arr[i] = -1; 
    }
  }
  void input(){
    cout<<"\nEnter Values---"; 
    for(int i=0; i<size; i++){
        cout<<"\nEnter "<<i+1<<" value: "; 
        int value ; 
        cin>>value; 
        arr[i] = value; 
    }
  }
  void display(){
    cout<<"\n Display---"; 
    cout<<"\n ["; 
    for(int i=0; i<size; i++){
       cout<<arr[i]<<", "; 
    }
    cout<<"]"; 
  }
  bool operator ==(Array a){
    for(int i=0; i<size; i++){
     if( arr[i] != a.arr[i]){
        return 0; 
     } 
    }
    return 1; 
  }

}; 
int main(){
    Array a1, a2; 
    a1.input(); 
    a2.input(); 

    a1.display(); 
    a2.display(); 
   
   if(a1==a2){
    cout<<"\n Both arrays are same: "; 
   } else {
    cout<<"\n Arrays are not equal to each other "; 
   }
}