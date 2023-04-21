#include<iostream>
using namespace std;
class RBI{
    public:
    float rbirate = 0.05;
};
class SBI :public RBI{
    public:
    float sbirate = 0.02;
    float c;
    void getROI(float b){
        c = (b*rbirate) + (b*sbirate) + b;
        cout<<"Final amount (including RBI rate and SBI bank)is: "<<c<<endl;
    }
};
class BOB :public RBI{
    public:
    float bobrate = 0.19;
    float c;
    void getROI(float b){
        c = (b*rbirate) + (b*bobrate) + b;
        cout<<"Final amount (including RBI rate and BOB bank)is: "<<c<<endl;
    }
};
class ICICI :public RBI{
    public:
    float icicirate = 0.09;
    float c;
    void getROI(float b){
        c = (b*rbirate) + (b*icicirate) + b;
        cout<<"Final amount (including RBI rate and ICICI bank) is: "<<c<<endl;
    }
};

int main (){
    int a;
    cout<<"Enter amount:";
    cin>>a;
    SBI obj1;
    BOB obj2;
    ICICI obj3;
    obj1.getROI(a);
    obj2.getROI(a);
    obj3.getROI(a);
    return 0;
}
