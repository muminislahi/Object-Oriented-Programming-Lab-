#include <iostream>
using namespace std;

class Interest {
    float principal,rate,time,interest;
public:
     Interest(float p, float r, float t)
     {
        principal=p;
        rate=r;
        time=t;
     }

       void calculateSimpleInterest()
       {
          interest=(principal*rate*time)/100;
          cout<<"SIMPLE INTEREST: "<<interest<<endl;
       }
      
      
   };

 int main ()
 {
    float p,r,t;

    cout<<"ENTER PRINCIPAL: ";
    cin>>p;

    cout<<"ENTER RATE: ";
    cin>>r;

    cout<<"ENTER TIME: ";
    cin>>t;

    Interest obj(p,r,t);
    obj.calculateSimpleInterest();
      return 0;
   
 }


   

    