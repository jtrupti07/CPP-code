#include<iostream>

using namespace std;



class Demo
{
public:
	int i;
	int j;
	//Constant variable should be initialized immidiately
	const int k=30;
   
    Demo()
    {
    	i=10;
    	j=20;
    	//k=30;    Error
    }

    void fun()
    {
    	i++;
    	j++;
    	//k++;  Not Allowed cause k is constant
    }

    void gun() const
    {
    	//i++; //we cannot change the characteristics inside constant function
    	//j++;  //we cannot change the characteristics inside constant function
    	//k++;  Not Allowed cause k is constant
    }	
};

int main()
{   
	//Non constant object
	Demo obj1;
	cout<<obj1.k<<"\n";
	//cout<<obj.k++<<"\n";   Not Allowed
	obj1.fun();//Non constant object can  call  non constant function
	obj1.gun();//non constant object can  call  constant function

	// constant object
	const Demo obj2;
	//obj2.fun();  //constant object can not call not constant function
	obj2.gun();  //constant object can  call  constant function
    //const int i;   //It generates error cause it should be initialized immidiately
	//const int i=20;  //Allowed
	return 0;
}