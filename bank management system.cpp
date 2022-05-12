#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class bank{
    char name[100],father[100],addr[100],type[10];
    float balance;
    public:
     void open_account();
     void deposit_money();
     void withdraw_money();
     void display_account();
};
void bank::open_account()
{
    cout<<"\n Enter your name:" <<endl;
    cin.ignore();
    cin.getline(name,100);
    cout<<"\n Enter your Father Name:" <<endl;
    cin.ignore();
    cin.getline(father,100);
    cout<<"\n Enter your address: " <<endl;
    cin.ignore();
    cin.getline(addr,100);
    cout<<"\n Type of Account you want to open:"<<endl;
    cin.ignore();
    cin.getline(type,100);
    cout<<"\n Enter your Deposit amount:"<<endl;
    cin>>balance;
    cout<<"\n Account created successfully!"<<endl;
}
void bank::deposit_money()
{
    int=d;
    cout<<"\n Enter amount you want to deposit:"<<endl;
    cin>>d;
    balance = d + balance;
    cout<<"\n Total balance is "<<balance<<endl;
}
void bank::withdraw_money()
{
    float w;
    cout<<"\n Enter amount you want to withdraw:"<<endl;
    cin>>w;
    balance=balance-w;
    cout<<"\n Your new balance is "<<balance<<endl;
}
void bank::display_account()
{
    cout<<"\n Your name is "<<name<<endl;
    cout<<"\n Your fathers name is "<<father<<endl;
    cout<<"\n Your address is "<<addr<<endl;
    cout<<"\n Type of accout "<<type<<endl;
    cout<<"\n Total balance: "<<balance<<endl;
}

int main()
{
    bank obj;
    int ch;
    cout<<"\n---------------------------------------------"<<endl;
    cout<<"\n---------------Kariene Bank------------------"<<endl;
    cout<<"\n---------------------------------------------"<<endl;

    cout<<"\n1.) Open Account:"<<endl;
    cout<<"\n2.) Deposit money:"<<endl;
    cout<<"\n3.) Withdraw money:"<<endl;
    cout<<"\n4.) Display account:"<<endl;
    cout<<"\n5.) Exit-->"<<endl;

    cin>>ch;
    swich(ch)
    {
    case 1:
        cout<<"\n1.) Open Account:"<<endl;
        obj.open_account();
        break;
    case 2:
        cout<<"\n2.) Deposit money:"<<endl;
        obj.deposit_money();
        break;
    case 3:
        cout<<"\n3.) Withdraw money:"<<endl;
        obj.withdraw_money();
        break;
    case 4:
        cout<<"\n4.) Display account:"<<endl;
        obl.display_account();
        break;
    case 5:
        if (ch==5)
        {
            exit(1)
        }
    default:
        cout<<"\n Please Try again!"<<endl;
        break;

    }
    return 0;
}