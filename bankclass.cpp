#include <bits/stdc++.h>
using namespace std;

class Bank{   
    string dep_name;
    long long int accno;
    string acc_type;
    float acc_balance;
    
    public:
    Bank(string name,long long int acc_no,string type,float bal){
        dep_name=name;
        accno=acc_no;
        acc_type=type;
        acc_balance=bal;
    }
    
    void deposit(){
        float amt;
        cout << "Enter deposit amount: ";
        cin >> amt;
        cout<<"Balance before deposit : "<<acc_balance<<endl;
        acc_balance = acc_balance+amt;
        cout<<"Total balance after deposit : "<<acc_balance<<endl;
    }
    
    void withdraw(){
        float amt;
        cout << "Enter withdraw amount : ";
        cin >> amt;
        cout<<"Balance before withdraw : "<<acc_balance<<endl;
        if(amt<=(acc_balance)){
            acc_balance = acc_balance-amt;
            cout<<"Total balance after withdraw : "<<acc_balance<<endl;
        }
        else{
            cout<<"Not sufficient balance."<<endl;
        }
    }
    
    void display(){
        cout<<"Account holder Name : "<<dep_name<<endl;
        cout<<"Account balance : "<<acc_balance<<endl;
    }
};

int main(){
    long long int acno;
    float accb;
    string acc_n,acc_t;
    
    cout<<"Enter details --- "<<endl;
    cout<<"\nAccount holder name : ";
    cin>>acc_n;
    cout<<"\nAccount number : ";
    cin>>acno;
    cout<<"\nAccount type : ";
    cin>>acc_t;
    cout<<"\nBalance : ";
    cin>>accb;
    Bank b1(acc_n,acno,acc_t,accb);
    cout<<endl;
    cout<<"**Deposit**"<<endl;
    b1.deposit();
    cout << endl;
    cout<<"**Withdrawl**"<<endl;
    b1.withdraw();
    cout<<endl;
    cout<<"**Display**"<<endl;
    b1.display();
    cout<<endl;
    cout<<"Name -> Pooja"<<endl;
    cout<<"Branch & Sec -> CSE B"<<endl;
    cout<<"Roll no. -> 71"<<endl;
    return 0;
}