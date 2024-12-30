//Develop an ATM system with classes like Account, ATM, and Transaction.
//Include functionalities like balance inquiry, cash withdrawal, and deposit.
#include<iostream>
using namespace std;
class account{
private:
	string accountholdername;
	int balance;
	public:
		account(string n,int b){
	accountholdername=n;
    balance=b;		
		}
	int getbalance(){
		return balance;
	}	
		
	void deposit(int amount)	{
	
		 if(balance>0){
			balance+=amount;
			cout<<"your amount is being added to your account!"<<balance<<endl;
		}
		else{
			cout<<"sorry invalid amount!"<<endl;
			
		}		
	}
	void withdraw(int amount){
		
		if(amount>0&&amount<=balance){
			balance-=amount;
			cout<<"sucessfully withdraw!"<<endl;		
		}
	else if(amount>balance)	{
		cout<<"must enter amount less than or equal to your balance!"<<endl;
	}
		
	else{
		cout<<"invalid transaction!"<<endl;
	}	
		
	}		
void displaybalance(){
	cout<<" your balance is Rs.: "<<balance<<endl;
}	
	
	
	
};

class atm{
	public:
		int choice;
		void menu(){
			cout<<"1.balance inquiry:"<<endl;
			cout<<"2.amount deposit:"<<endl;
			cout<<"3.amount withdraw:"<<endl;
			cout<<"4.exit"<<endl;
		}
					};
int main(){
	account a1("john",10000);

	atm t;
	int choice;
	int amount;
		
	do{
    t.menu();
		cout<<"enter choice:"<<endl;
		cin>>choice;
	switch(choice){
		case 1:
			a1.displaybalance();
			break;
	case 2:
			cout<<"how much money you want to add?"<<endl;
		cin>>amount;
		
		a1.deposit(amount);
		break;	
	case 3:
	 	cout<<"how much money you want to withdraw?"<<endl;
		cin>>amount;	
	a1.withdraw(amount);		
		break;	
		case 4:
		cout<<"thank you for visiting here!"<<endl;	
		break;
		default:
		cout<<"invalid choice!"	<<endl;	
	 }
          } while (choice != 4);

    return 0;
}
	      
		
	

















































