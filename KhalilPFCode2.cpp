#include<iostream>
using namespace std;

void customerProfile(int* uniqueID,int* balance,int record){
	int id,bal;
	cout<<"\nEnter unique ID and Balance differentiate by space. both must be integer. \n";
	for(int i=0; i<record;i++){
		cout<<"Enter "<<i+1<<" Customer Info: ";
		cin>>id>>bal;
		bool found=false;
		for(int j=0;j<i;j++)
			if(id==uniqueID[j]){
				cout<<"Warning! Enter Unique ID. "<<id<<" is already exist. \n";
				found=true;
				i--;
				break;
			}
		if(!found){
			uniqueID[i]=id;
			balance[i]=bal;
		}
			
	}
	cout<<"\nRecord entered Successfully...\n\n";
	
}

void depositeMoney(int* uniqueID, int* balance,int record){
	int id,bal,id_index;
	bool found =false;
	while(true){
		cout<<endl<<"Enter ID:";
		cin>>id;
		for(int j=0;j<record;j++)
			if(id==uniqueID[j]){
				id_index=j;
				found=true;
			}
		if(!found)
			cout<<"ID. "<<id<<" doesn't exist. try again\n";
		
		else{
			cout<<"Enter desposit balance. ";
			cin>>bal;
			balance[id_index]+=bal;
			cout<<"Successfully depsoited. ";
			break;
		}
	}	

	cout<<"\nYour new Balance is "<<balance[id_index];
	cout<<endl;

}

void travel(int* uniqueID, int* balance,int record){
	int stop,id_index,charge=0;
	if(record==0)
		cout<<"\nNo any Record of customer. ADD customers record first. \n\n";
	else{
		while(true){
			cout<<"How many stops u want to go? (Max-10) ";
			cin>>stop;
			if (stop>10 || stop<1){
				cout<<"Warning! Enter correct value. \n";
			}
			else{
				while(true){
					bool found=false;
					int id;
					cout<<"Enter your ID for payment. ";
					cin>>id;
						cout<<endl<<endl;
						
					for(int j=0;j<record;j++)
						if(id==uniqueID[j]){
							id_index=j;
							found=true;
						}
					if(!found)
						cout<<"ID. "<<id<<" doesn't exist. try again\n";
					else{
						if(stop<=2)
							charge=20;
						else{
							charge=20;
							for(int i=3;i<=stop;i++){
								charge+=12;
							}
						}
						break;
					}
				}
				if(charge<=balance[id_index]){
					balance[id_index]-=charge;
					cout<<"You r good to go.... Your remaining balance is "<<balance[id_index]<<endl;
				}
				else
					cout<<"Insufficient balance! \n";
				
				break;
			}
		}
	}
}

int main(){
	
int record=0,choice;
int* balance;
int* uniqueID;
bool exist=false;
while(true){

cout<<"*********************Green Bus Card Payment System*********************\n";
cout<<"1. Enter Records\n";
cout<<"2. Deposit Money\n";
cout<<"3. Wants to Travel\n";
cout<<"0. Exist\n";

cout<<"Select your choice. ";
cin>>choice;
switch(choice){
	case 1:{
		while(true){
			cout<<"How many customer's record u want to enter: ";
			cin>>record;
			if (record>10)
				cout<<"Error! Record Must be maximum 10. \n";
			else{
				break;
			}
		}
		
		uniqueID=new int[record];
		balance =new int[record];
		customerProfile(uniqueID,balance,record);
		break;
	}
	case 2:{
		depositeMoney(uniqueID,balance,record);
		break;
	}
	
	case 3:{
		
		travel(uniqueID,balance,record);
		break;
	}
	
	case 0:{
		cout<<"=======Thanks for using our service=======";
		exist=true;
		break;
	}
	default:{
		cout<<"Warning! Enter right choice from given options. \n";
	} 
	
}

	if (exist)
		break;
}



}
