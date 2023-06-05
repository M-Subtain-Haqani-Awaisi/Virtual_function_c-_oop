#include<iostream>
using namespace std;
class parent
{
	public:
	virtual void print()
	{
		cout<<"parent class called"<<endl;
		
	}
};
class child:public parent
{
	public:
	void print()
	{
		cout<<"Child class called"<<endl;
	}
	
};
class child1:public child
{
	public:
	void print()
	{
		cout<<"Child class Called"<<endl;
	}
};
int main()
{
	 child1 s1;
	 parent *sh1= &s1;
	 sh1->print();
	 return 0;
}
//#include <iostream>
//using namespace std;
//
//class Base {
//   public:
//   void print() {
//        cout << "Base Function" << endl;
//    }
//};
//
//class Derived : public Base {
//   public:
//    void print() {
//        cout << "Derived Function" << endl;
//    }
//};
//
//int main() {
//    Derived derived1;
//
//    // pointer of Base type that points to derived1
//    Base* base1 = &derived1;
//
//    // calls member function of Derived class
//    base1->print();
//
//    return 0;
//}
