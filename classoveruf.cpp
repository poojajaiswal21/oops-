#include<iostream>
using namespace std;

class unary{
    int a,b;
    public:
    void getdata(){
        cout<<"Enter two numbers : "<<endl;
        cin>>a>>b;
    }
    void putdata(){
        cout<<a<<"\t"<<b<<endl;
    }

    friend void operator-(unary& c);
};

void operator-(unary& c){
    c.a=-c.a;
    c.b=-c.b;
}

int main(){
    unary u;
    u.getdata();
    u.putdata();
    -u;
    u.putdata();
}