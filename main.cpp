#include <iostream>
#include <iomanip>

using namespace std;

#include "Time.h"

//void square(int&);

int main(){
    /*
    int age;
    string colour;
    
    std::cout<<"Hello World!"<<std::endl;
    cout<<"Your age and colour"<<endl;
    cin>>age>>colour;
    cout<<"Age: "<<setfill('x')<<setw(10)<<fixed<<setprecision(3)<<age<<endl;
    cout<<"Colour: "<<setw(10)<<colour<<endl;
    square(age);
    cout<<age<<endl;
    */
    
    struct Time t1,t2,t3;
    cout<<"What time was it?";
    getTime(t1);
    cout<<"What time is it now?";
    getTime(t2);
    t3=subtract(t2,t1); //t3=t2-t1
    cout<<"Time diff is ";
    display(t3);
}

void square(int &x){
    x*=x;
}
