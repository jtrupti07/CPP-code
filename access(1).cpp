#include<iostream>
using namespace std;



class demo{

    public:
    int i;
    void fun()   // Any one can access
    {
        cout<<"Inside public fun"<<"\n";
    }
     
     //Abstraction 100%
    private:  //  No one can access outside the class
    int j;
    void gun()
    {
        cout<<"Inside private gun"<<"\n";
    }

     //Abstraction not 100%
    protected:  // No one can access outside the class except the immidiate derived class
    int k;
    void sun()
    {
        cout<<"Inside protected sun"<<"\n";
    }
};


  class hello
  {
  	int i;
  	void moon()
  	{
  		cout<<"Inside function moon"<<"\n";
  	}

  };

int main()
{
    demo obj;
   
    cout<<sizeof(obj)<<"\n";  //12 byte
    
    obj.fun();      //Allowed
    cout<<obj.i<<"\n";   //Allowed
   // obj.gun();  declare privatly
   //cout<<obj.j<<"\n";   //Not Allowed
   // obj.sun();  declare in protected mode
  //cout<<obj.k<<"\n";   //Not Allowed

    /*    by default declare as private hence not accesible
    cout<<hobj.i<<"\n";
    hobj.moon();
    return 0;*/
}



/*

public       Any one can access

private      No one can access outside the class

protected    No one can access outside the class except the immidiate derived class

*/



