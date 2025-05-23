#include<iostream>

using namespace std;

void  findMaxBattery(int batteryLevel[3][3]){
	
cout<<"Enter battery percentage between 0 - 100(inclusive) \n";
int max_val=-1,row=0,col=0,val=0;

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<"Enter value at "<<i<<","<<j<<": ";
		cin>>val;
		if (val>=0 && val<=100){
			batteryLevel[i][j]=val;
			if(val>max_val){   // find maximum value along with taking input
				max_val=val;
				row=i;
				col=j;
			}
		}
		else{
			cout<<"Invalid! try value between 1 to 100. \n";
			j--;
		}
	}
}

cout<<"Robot at position ("<<row<<","<<col<<") has the highest battery level: "<<max_val<<"%";

}


int main(){

int batteryLevel[3][3];  // size fixed acc: to given requirement

findMaxBattery(batteryLevel);

}
