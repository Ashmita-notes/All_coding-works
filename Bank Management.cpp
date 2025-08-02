#include<iostream>
#include<string>

using namespace std;

class BankAccount{      //Classes & Object 
	private:
	int accno;
	string name;	
	int amount;
	
	public:
	void create_acc(int id){    //function 
			accno=id;
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter initial amount: ";
			cin>>amount;				
		}
		
		void deposit(){
			int damount;
			cout << "Enter the amount to deposit :";
			cin >> damount;					
			amount += damount;
			cout << "Successfully Deposited..." << endl;
			cout << "\nYour updated balance is : " << amount;
		}
			
		void withdraw(){
			int wamount;
			cout << "Enter the amount to withdraw :";
			cin >> wamount;	
			if (wamount > amount)	
			{
				cout << "Insufficient balance, transaction failed" << endl;
				return;
			}			
			amount -= wamount;
			cout << "Successfully Withdrawn..." << endl;
			cout << "\nYour updated balance is : " << amount;
		}
			
		void balance(){
				cout<<"The bank balance of " << name << " having the the account " << accno << " is " << amount << endl;
		}	
		
		int getaccno()
		{
			return accno;
		}				
};

//Inheritance -(hirarecial Inheritance)
class Post{                   //base class
	private:
		string name;
		string post;
	public:
		Post(){                    //NULL constructor
		}
		Post(string n, string p){ //parametric constructor
			name = n;
			post = p;
		}
	
	void display_a(){
		cout<<"Name:"<<name<<endl;
		cout<<"Post:"<<post<<endl;
	}
};		

class Junior_Position: public Post {         //derived class
public:                       
	int salary;
	public:
		Junior_Position(string n, string p, int s):Post(n, p){
		    salary=s;
		}
		void display_b(){
		display_a();
		cout<<"Salary"<<salary<<endl;
	}	
	};
	
class Data_Analyst: public Post{            //derived class
	public:                       
	int salary;
	public:
		Data_Analyst(string n, string p, int s):Post(n, p){
		    salary=s;
		}
		void display_c(){
		display_a();
		cout<<"Salary"<<salary<<endl;
	}	
};

class Associate: public Post{                 //derived class
	public:                       
	int salary;
	public:
		Associate(string n, string p, int s):Post(n, p){
		    salary=s;
		}
		void display_d(){
		display_a();
		cout<<"Salary"<<salary<<endl;
	}	
};



class Interest{  
      private:
      	double principle;
      	double rate;
      	double time;
      	double interest;
      public:
      	Interest(double pri, double r, double y){ // parametric constructor 
      		principle = pri;
      		rate = r;
      		time = y;
      		interest = 0;
		  }
		  void Calculate(){
		  	interest = principle*rate*time;
		  }

		  double getInterest(){
		  	return interest;
		  }
};    



int main(){  //main function
	BankAccount a[10];
	int id=0;
	int p=0;
	int choice;
	int found=0;
	double pri,r,y;
	Interest i(pri,r,y);
	int interest;
	do{
			//Menu Driven
	cout<<"\n1. Create a new account"<<endl<<"2. Deposit"<<endl<<"3. Withdraw"<< endl << 
	"4. Show bank balance"<<endl<<"5. Employees post"<<endl<<"6. Interest"<<endl<<"Enter your choice : " << endl;
	cin>>choice;
	switch(choice){
		case 1:
			id++;
			a[p].create_acc(id);		
			p++;
			cout << "Account crated successfully and the customer id of the customer is : " << id;	
			break;
		case 2:
			cout<<"Enter your id:"<<endl;
			cin>>id;			
			for (int i=0;i<p;i++)
			{
				if (a[i].getaccno() == id)
				{
					found=1;
					a[i].deposit();					
				}
			}
			if (found == 0)
				cout << "Invalid Employee id entered...";
			found=0;
			break;	
		case 3:
			cout<<"Enter your id:"<<endl;
			cin>>id;			
			for (int i=0;i<p;i++)
			{
				if (a[i].getaccno() == id)
				{
					found=1;
					a[i].withdraw();					
				}
			}
			if (found == 0)
				cout << "Invalid Employee id entered...";
			found=0;
			break;	
		case 4:
			cout<<"Enter your id:"<<endl;
			cin>>id;			
			for (int i=0;i<p;i++)
			{
				if (a[i].getaccno() == id)
				{
					found=1;
					a[i].balance();					
				}
			}
			if (found == 0)
				cout << "Invalid Employee id entered...";
			found=0;
			break;	
	    case 5:{
			
	    	cout<<"Employees Post Records "<<endl;
	    	Junior_Position JP("Ram","Junior Position",120000);
	        JP.display_b();
	        Data_Analyst DA("Sam","Data Analyst",240000);
	        DA.display_c();
	        Associate A("Mark","Associate", 340000);
	        A.display_d();
	    	
	    }
	    	break;
	    
	    case 6:{
	    	cout<<"enter the principle"<<endl;
	    	cin>>p;
	    	cout<<"enter the rate"<<endl;
	    	cin>>r;
	    	cout<<"enter the time"<<endl;
	    	cin>>y;
	    	Interest i(pri,r,y);
	    	i.Calculate();
	    	i.getInterest();
	    	cout<<"the total interest: "<<interest<<endl;
	    }
	    	break;
	    } 

	}while(choice!=7);
	return 0;
}
