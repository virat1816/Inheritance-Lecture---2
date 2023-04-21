#include<iostream>
using namespace std;
class A1{
	public:
	int a;
	 A1(){
	 	cout<<"Enter value 1 : ";
	 	cin>>a;
	}
};
class B2 : public A1{
	public:
		int b;
	 B2(){
	 	cout<<"Enter value 2 : ";
	 	cin>>b;
	}
};
class C3  {
	public:
		int c;
	 C3(){
	 	cout<<"Enter value 3 : ";
	 	cin>>c;
	}
};
class D4:public B2 , public C3{
	public:
		int d,e;
	 D4(){
	 	cout<<"Enter value 4 : ";
	 	cin>>d;
        e = a+b+c+d;
		cout<<endl<<"Addition of all 4 value is = "<<e;
	}
};
int main(){
      D4 obj;	
	return 0;
}
