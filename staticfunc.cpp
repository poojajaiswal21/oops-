#include <iostream>
using namespace std;

class student{
    int roll;
    char name[10];
    public:
    static int ctr;
    
    void get_data(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter roll no. : ";
        cin>>roll;
        ctr++;
        
    } 
    static int func(){
        return ctr;
    }
};
int student::ctr;
int main(){
    int choice;
    while(1){
        cout<<"\n1.Add details.\n2.exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
            student s;
            s.get_data();
            break;

            case 2:
            cout<<"\nNumber of students : "<<student::func()<<endl;
            cout<<endl;
            cout<<"Name -> Pooja"<<endl;
            cout<<"Branch & Sec -> CSE B"<<endl;
            cout<<"Roll no. -> 71"<<endl;
            exit(0);
            break;

            default:
            cout<<"Enter valid choice : ";
        }
    }


    
}