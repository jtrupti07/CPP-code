#include<iostream>
using namespace std;


class Base
{
public:
    int i,j;    // 8 Bytes
    Base(){i = 10; j = 20;}
    
    void fun(){ cout<<"Base fun\n"; }   // 1000
    virtual void gun() {cout<<"Base gun\n"; }   // 2000
    virtual void run() {cout<<"Base run\n"; }   // 3000
    virtual void mun() {cout<<"Base mun\n"; }   // 4000
};
class Derived : public Base
{
public:
    int x,y;    // 8 Bytes (8+8)
    Derived(){x = 50; y = 60;}
    
    void fun() {cout<<"Derived fun\n"; }    // 5000
    void sun() { cout<<"Derived sun\n"; }   // 6000
    void gun() {cout<<"Derived gun\n"; }    // 7000
    virtual void run() {cout<<"Derived run\n"; }    // 8000
    virtual void bun() {cout<<"Derived bun\n"; }    // 9000
};
int main()
{
    cout<<"Size of base class is : "<<sizeof(Base)<<"\n";        //(16 bytes)12 bytes according to my compiler it varies according to compiler
    cout<<"Size of derived class is : "<<sizeof(Derived)<<"\n";  //(24 bytes)20 bytes bytes according to my compiler it varies according to compiler
    
    Base *bp2 = new Derived;    // Upcasting
    
    bp2->fun();
    bp2->gun();
  //  bp2->sun();
    bp2->mun();
    bp2->run();
    //bp2->bun();
    
    return 0;
}