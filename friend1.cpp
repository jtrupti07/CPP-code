#include<iostream>
using namespace std;

class Demo
{
public:
	int i;

private:
    int j;
protected:
    int k;
public:
	Demo()
	{
		i=10;
		j=20;
		k=30;
	}
friend void fun();    	
};


void fun()  // Nacked function : defined outside the class
{
	Demo obj;
	cout<<obj.i<<"\n";  //Allowed cause public
	cout<<obj.j<<"\n"; // Not Allowed cause private
	cout<<obj.k<<"\n";  //Not Allowed cause protected

}




int main()
{
	fun();
	return 0;
}