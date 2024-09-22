#include<iostream>
#include<string>
using namespace std;

bool isDigit(const string& str){
	int i=0;
	while(i<str.length()){
		if(str[i]< '0' || str[i] > '9'){
			return false;
		}
		i++;
	}
	return true;
}

int main(){
	string name, creditcardnumber;
	double balance=0.0;
	
	cout<<"Enter your Name :  ";
	cin>>name;
	cout<<"Enter credit card number (9-16 digits): ";
	cin>>creditcardnumber;
	
	while(creditcardnumber.length()< 9|| creditcardnumber.length()> 16|| !isDigit(creditcardnumber )){
		cout<<"Invalid credit card number! Please try again"<<endl;
		cin>>creditcardnumber;
	}
	cout<<"Credit card number is valid "<<endl;
	
	while(true){
		cout<<"1- Deposit cash: "<<endl;
			cout<<"2- Withdraw cash: "<<endl;
				cout<<"3- Check Balance: "<<endl;
					cout<<"4- Exit: "<<endl;
			int choice;
			cin>>choice;
			
		switch(choice){
			case 1:{
			  double amount;
                std::cout << "Enter amount to deposit: ";
                std::cin >> amount;
                balance += amount;
                std::cout << "Deposit successful!" << std::endl;
                break;
			}
			case 2:{
				 double amount;
                std::cout << "Enter amount to withdraw: ";
                std::cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    std::cout << "Withdrawal successful!" << std::endl;
                } else {
                    std::cout << "Insufficient balance!" << std::endl;
                }
				break;
			}
			case 3:{
				std::cout << "Your current balance is: " << balance << std::endl;
				break;
			}
			case 4:
				   return 0;
            default:
                std::cout << "Invalid choice!" << std::endl;
	}
	
}
}
