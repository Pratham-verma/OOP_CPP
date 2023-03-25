#include<iostream>
using namespace std;

class addDistance
{
    private:
    int feet;
    int inch;
public: 
void setDistance();
void getDistance();
addDistance addDistance(addDistance d);

};
void addDistance::setDistance()
{
   cout<<"feet :"; 
   cin>>feet;
   cout<<"inch :";
   cin>>inch;
}
void addDistance::getDistance()
{
    cout<<"the feet is "<<feet<<endl;
    cout<<"the inch is"<<inch<<endl; 
}
// funciton to add two distance
addDistance addDistance::addDistance(addDistance d){
    addDistance dist;

    dist.feet  = feet + d.feet;
    dist.inch  = inch + d.inch;
}
int main(){
  addDistance D;
  D.setDistance();
  D.getDistance();
    
    return 0;
}