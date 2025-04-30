#include<iostream>
using namespace std;

class BankAccount{
	private:
		string holderName;
		double balance;
		
	public:
		
		BankAccount(string name="\0", double bal=0) : holderName(name) , balance(bal){
			cout <<"Creating Account for " <<holderName <<" with Initial Deposit: " <<balance <<endl <<endl;
		}
		
		void deposit(double amount){
			if(amount > 0){
				this->balance+= amount;
				cout <<"Depositing "<<amount <<" into " <<this->holderName <<" Account" <<endl <<endl;
			}
		}
		
		void withdraw(double amount){
			try{
				if (amount > this->balance)
					throw this->balance;
				this->balance-= amount;
				cout <<"Withdrawing "<<amount <<" from " <<this->holderName <<" Account" <<endl <<endl;
			}
			
			catch(double bal){
				cout <<"Error : Insufficient Funds Exception" <<endl <<"Balance :" <<bal <<endl <<endl;
			}
		}
		
		void transfer(BankAccount &to, double amount){
			try{
				if (amount > this->balance)
					throw this->balance;
				this->balance-= amount;
				to.balance+= amount;
				cout <<"Transfering "<<amount <<" from " <<this->holderName <<" to " <<to.holderName <<" Account" <<endl <<endl;
				cout <<"New Balance of " <<this->holderName <<":" <<this->balance <<endl;
				cout <<"New Balance of " <<to.holderName <<":" <<to.balance <<endl <<endl;
			}
			
			catch(double bal){
				cout <<"Error : Insufficient Funds Exception" <<endl <<"Balance :" <<bal <<endl <<endl;
			}
		}
		
		void divideBalance(double div){
			try{
				if(div == 0)
					throw div;
				this->balance/=div;
			}
			
			catch(double div){
				cout <<"Error : Divide By Zero Exception" <<endl <<"Divisor :" <<div <<endl <<endl;
			}
		}
		
		void display(){
			cout <<"Account Details" <<endl;
			cout <<"Holder Name:" <<this->holderName <<endl;
			cout <<"Balance    :" <<this->balance <<endl <<endl;
		}
};

int main(){
	
	BankAccount a1("Prasanjit Kamble",3000);
	BankAccount a2("Shriyash Jadhav",2000);
	
	a1.deposit(5000);
	a1.withdraw(2000);
	a1.transfer(a2,2000);
	a1.divideBalance(0);
	
	a1.display();
	a2.display();
}


