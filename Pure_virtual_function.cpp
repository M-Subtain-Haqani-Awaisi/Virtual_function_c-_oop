// notvirt.cpp
// normal functions accessed from pointer
#include<iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Base //base class
{
public:
 virtual void show() = 0; //normal function
//{ cout << "Base\n"; }
};
////////////////////////////////////////////////////////////////
class Derv1 : public Base //derived class 1
{
public:
void show()
{ cout << "Derv1\n"; }
};
////////////////////////////////////////////////////////////////
class Derv2 : public Base //derived class 2
{
public:
void show()
{ cout << "Derv2\n"; }
};
////////////////////////////////////////////////////////////////
int main()
{
//	Base bad;
	Base* arr[2];
Derv1 dv1; //object of derived class 1
Derv2 dv2; //object of derived class 2

arr[0] = &dv1; //put address of dv1 in pointer
arr[1] = &dv2;
arr[0]->show();
arr[1]->show();
 //execute show()
return 0;
}
