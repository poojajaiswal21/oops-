#include<iostream>
using namespace std;

class binary{
    int real,imag;
    public:
    binary(){
        real=0;
        imag=0;
    }
    binary(int r,int i){
        this->real=r;
        this->imag=i;
    }

    void display();

    binary operator+(binary& c);
};
void binary:: display(){
    cout<<real<<"+i"<<imag<<endl;
}

binary binary::operator+(binary& c){
    binary temp;
    temp.real= c.real+real;
    temp.imag= imag+c.imag;
    return temp;
}

int main(){
    binary b1;
    binary b2(3,4);
    binary b3(2,1);

    b1=b2+b3;
    b1.display();
}