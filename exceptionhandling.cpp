#include<iostream>
using namespace std;

int main(){

    int age =25;
   
   try
   {
       if (age>=24){

        cout<<"you are eligible to dirnk a alcohol";
       }
       else{
        throw(age);
       }
   }
   catch(int age)
   {
    cout<<"you are not eligible to dirnk a alcohol";
   }
   
    
    return 0;
}