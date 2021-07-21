#include<iostream>
using namespace std;


class Arithematic
{
public:                         // Access specifier
    int no1;                    // Charcteristics of class
    int no2;                    // Charcteristics of class
    Arithematic()           // Default Constructor
    {
        cout<<"Inside Default Constructor\n";
        no1 = 0;
        no2 = 0;
    }
    Arithematic(int i, int j)   // Parametrised Constructor
    {
        cout<<"Inside parametrised Constructor\n";
        no1 = i;
        no2 = j;
    }
   
Arithematic(Arithematic &ref)   // Copy Constructor
    {
        cout<<"Inside Copy constructor\n";
        this->no1=ref.no1;
        this->no2=ref.no2;        
    }
    ~Arithematic()                      // Destructor
    {
        cout<<"Inside Destructor\n";
        // Used to deallocate the resources
    }

int Add()                               // Behaviour of class
    {
        int result = 0;
        result = no1 + no2;
        return result;
    }
    int Sub()                               // Behaviour of class
    {
        int result = 0;
        result = no1 - no2;
        return result;
    }
};

int main()
{
    Arithematic obj1;  //Default constructor
    Arithematic obj2(50,30);   //Parametrised constructor
    Arithematic obj3(obj2);
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";
    cout<<obj3.no1<<"\t"<<obj3.no2<<"\n";
   cout<<"Addition is :"<<obj2.Add()<<"\n";
   cout<<"Subtraction is :"<<obj2.Sub()<<"\n";
   cout<<"Addition is :"<<obj3.Add()<<"\n";
   cout<<"Subtraction is :"<<obj3.Add()<<"\n";
    return 0;
}