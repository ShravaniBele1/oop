#include <iostream>
using namespace std;

class Bank{
  private:
    int total_balance;
  public:
    int Deposit(int x){
        int amount;
        int y;
        cout<<"Enter the amount for deposit:";
        cin>>amount;
        y=x+amount;
        return y;
    }
    int Withdraw(int x){
        int amount;
         int y;
        cout<<"Enter the amount for withdraw:";
        cin>>amount;
        y=x-amount;
        return y;
    }
    
};

int main(){
    int current_balance;
    int choice;
    char name[20];
    cout<<"Enter the name of customer:";
    cin>>name;
    cout<<"Enter the current balance:";
    cin>>current_balance;
    
        cout<<"1.Deposit amount"<<endl;
        cout<<"2.Withdraw amount"<<endl;
        cout<<"3.Check balance"<<endl; 
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice){
            case 1:Bank b1;
            int Deposited_amount;
            Deposited_amount=b1.Deposit(current_balance);
            cout<<"After Deposited Amount:"<<Deposited_amount<<endl;
            break;
        
            case 2:Bank b2;
            int withdraw_amount;
            withdraw_amount=b2.Withdraw(current_balance);
            cout<<"After withdraw Amount:"<<withdraw_amount<<endl;
            break;
            
            case 3:
            cout<<"available balance:"<<current_balance;
            break;
            
            default:
            cout<<"invalid chice";
            break;
        }
     return 0;
    }
    
