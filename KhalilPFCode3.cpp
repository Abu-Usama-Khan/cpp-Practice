#include<iostream>
using namespace std;

void weeklyStatistics(int* cowsID,int totalCows,float* milkSum){
	cout<<"\nWeekly Statistics...\n\n";
	int maxMilk=-1,cowID;
	for(int i=0;i<totalCows;i++){
		if(milkSum[i]>=maxMilk){
		maxMilk=milkSum[i];
		cowID=cowsID[i];
		}
		cout<<"Cow ID "<< cowsID[i]<<" Total Milk is "<<milkSum[i]<<endl;
		}
	cout<<"\nAvergae Milk for each cow\n\n";
	
	for(int i=0;i<totalCows;i++)
		cout<<"Cow ID "<< cowsID[i]<<" Average Milk is "<<(milkSum[i])/7<<endl;
	
	cout<<"\ne highest total milk yield is "<<cowID<<" that is "<<maxMilk;	
}

void milkYield(int* cowsID,int totalCows){
	float** cowsStatistics=new float*[totalCows];
	float* milkSum=new float[totalCows];
	for(int i=0;i<totalCows;i++)
		cowsStatistics[i]=new float[7];
	
	cout<<"Enter milk yield after the morning milking and evening milking: \n";
	
	for(int i=0;i<totalCows;i++){
		int sum=0;
		cout<<"For cow ID "<<cowsID[i]<<endl;
		for(int j=0;j<7;j++){
			cout<<"Day "<<j+1<<": ";
			cin>>cowsStatistics[i][j];
			sum+=cowsStatistics[i][j];
			
		}
		milkSum[i]=sum;	
	}
	
	weeklyStatistics(cowsID,totalCows,milkSum);


}

int main(){
	int totalCows,id;
	cout<<"How many cows are there: ";
	cin>>totalCows;
	
	int* cowsID=new int[totalCows];
	
	cout<<"Enter Unique 3 Digit ID number: \n";
	for(int i=0; i<totalCows;i++){
		cout<<"Enter "<<i+1<<" Cow ID: ";
		cin>>id;
		bool found=false;
		for(int j=0;j<i;j++)
			if(id==cowsID[j]){
				cout<<"Warning! Enter Unique ID. "<<id<<" is already exist. \n";
				found=true;
				i--;
				break;
			}
		if(!found){
			cowsID[i]=id;
		}
			
	}
	cout<<"\nRecord entered Successfully...\n\n";
	
	milkYield(cowsID,totalCows);

}
