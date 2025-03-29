#include <iostream>
#include <Windows.h>
#include <unistd.h>
using namespace std;

void lockComp ();
bool l1Approval (int pin);
void l2Approval (int pin, int tot);
int amountCalc (int rate);

int main() {
	int supPin, flMgrPin, opt, opt2, opt3;
	int goldRt=320000, brentRt=20000, wtiRt=19500, usdRt=280;
	int goldPD=0, brentPD=0, wtiPD=0, usdPD=0;
	int total=0;
	bool execProg = true, check = true;
	cout <<"      STOCK TRADE APP      \n"
	<<"-------------------------------------\n"<<endl;
	do{
		cout << "Set 4 digits approval Pin for Supervisor (not starting with 0)"<<endl;
		cin >> supPin;
		if (supPin>999 && supPin<10000) {
			check=false;
		} else {
			cout <<"Incorrect Format\n";
		}
	} while (check);
	check = true;
	do {
		cout << "Set 4 digits approval Pin for Floor Manager (not starting with 0)"<<endl;
		cin >> flMgrPin;
		if (flMgrPin>999 && flMgrPin<10000){
			check=false;
		} else {
			cout <<"Incorrect Format\n";
		}
	} while (check);
	while (true) {
		cout <<"\nSelect any option (1-3)\n"
		<<"1) Update Stock Price\n"
		<<"2) Purchase Stock\n"
		<<"3) View Stock Price\n"
		<<"4) Quit the application\n";
		cin >> opt;
		switch (opt) {
			case 1: {
				do {
					check = false;
					int oldRt;
					cout <<"\nSelect Stock type to update its price (in PKR) (1-4)\n"
					<<"Commodities\n"
					<<"1) Gold\n"
					<<"2) Brent Crude\n"
					<<"3) WTI Crude\n"
					<<"Currency\n"
					<<"4) USD\n";
					cin >> opt2;
					switch (opt2) {
						case 1: {
							oldRt = goldRt;
							cout <<"Enter current Rate of Gold\n";
							cin >>goldRt;
							cout <<"Gold Rate updated successfully!\n";
							if ((0.8*oldRt)>=goldRt) {
								cout <<"System detected significient drop in price of Gold\n";
								goldPD++;
								cout <<"Price drops consecutively times " <<goldPD <<endl;
								sleep(30);
							} else {
								goldPD = 0;	
							}
							if (goldPD==3) {
								goldPD = 0;
								lockComp();
							}
							break;
						}
						case 2: {
							oldRt = brentRt;
							cout <<"Enter current Rate of Brent Crude\n";
							cin >>brentRt;
							cout <<"Brent Crude Rate updated successfully!";
							if ((0.8*oldRt)>=brentRt) {
								cout <<"System detected significient drop in price of Brent Crude\n";
								brentPD++;
								cout <<"Price drops consecutively times " <<brentPD <<endl;
								sleep(30);
							} else {
								brentPD = 0;	
							}
							if (brentPD==3) {
								brentPD = 0;
								lockComp();
							}
							break;
						}
						case 3: {
							oldRt = wtiRt;
							cout << "Enter current Rate of WTI Crude\n";
							cin >>wtiRt;
							cout << "WTI Crude Rate updated successfully!\n";
							if ((0.8*oldRt)>=wtiRt) {
								cout <<"System detected significient drop in price of WTI Crude\n";
								wtiPD++;
								cout <<"Price drops consecutively times " <<wtiPD <<endl;
								sleep(30);
							} else {
								wtiPD = 0;	
							}
							if (wtiPD==3) {
								wtiPD = 0;
								lockComp();
							}
							break;
						}
						case 4: {
							oldRt = usdRt;
							cout << "Enter current Rate of USD\n";
							cin >>usdRt;
							cout << "USD Rate updated successfully!\n";
							if ((0.8*oldRt)>=usdRt) {
								cout <<"System detected significient drop in price of USD\n";
								usdPD++;
								cout <<"Price drops consecutively times " <<usdPD <<endl;
								sleep(30);
							} else {
								usdPD = 0;	
							}
							if (usdPD==3) {
								usdPD=0;
								lockComp();
							}
							break;
						}
						default: {
							cout << "Select Valid option\n";
							check = true;
							break;
						}
					}
				} while (check);
				break;
			}
			case 2: {
				do {
					check = true;
					int oldRt;
					cout <<"\nSelect Stock type to purchase (1-5)\n"
					<<"Commodities\n"
					<<"1) Gold\n"
					<<"2) Brent Crude\n"
					<<"3) WTI Crude\n"
					<<"Currency\n"
					<<"4) USD\n"
					<<"5) Finish\n";
					cin >> opt3;
					switch (opt3) {
						case 1: {
							total+=amountCalc(goldRt);
							break;
						}
						case 2: {
							total+=amountCalc(brentRt);
							break;
						}
						case 3: {
							total+=amountCalc(wtiRt);
							break;
						}
						case 4: {
							total+=amountCalc(usdRt);
							break;
						}
						case 5: {
							check = false;
							break;
						}
						default: {
							cout << "Select Valid option\n";
							break;
						}
					}
				} while (check);
				if (total>=100000 && total<500000){
					bool appSt=l1Approval(supPin);
					if (appSt) {
						cout << "Congratulations! The stocks of amount " <<total << " have been purchased by you\n";
					} else {
						cout << "Sorry! The stocks of amount " <<total << " cannot be purchased by you as L1 not approved\n";
					}
					total = 0;
				} else if (total>=500000) {
					bool appSt2=l1Approval(supPin);
					if (appSt2) {
						l2Approval(flMgrPin, total);	
					} else {
						cout << "Sorry! The stocks of amount " <<total << " cannot be purchased by you as L1 not approved\n";
					}
					total = 0;
				} else {
					cout << "Congratulations! The stocks of amount " <<total << " have been purchased by you\n";
					total = 0;
				}
				break;
			}
			case 3: {
				cout <<"\nRate of Gold is: " << goldRt <<endl
				<<"Rate of Brent Crude is: " << brentRt <<endl
				<<"Rate of WTI Crude is: " << wtiRt <<endl
				<<"Rate of USD is: " << usdRt <<endl;
				break;
			}
			case 4: {
				execProg = false;
				break;
			}
			default: {
				cout << "Select Valid option\n";
				break;
			}	
		}
		if (!execProg) 
			break;
	}
}

void lockComp () {
	if (LockWorkStation()) {
        cout <<"Computer locked successfully!\n";
    } else {
        DWORD error = GetLastError();
        cout <<"Failed to lock computer. Error code: " <<error <<endl;
	}
}

bool l1Approval (int pin) {
	cout <<"L1 approval required (Approval from Supervisor)\n";
	int ite=1;
	while (true) {
		int supPinEn;
		cout <<"Enter Supervisor Pin to approve/reject\n";
		cin >>supPinEn;
		if (supPinEn==pin) {
			int approval;
			cout <<"Enter 0 to reject and 1 to approve\n";
			cin >> approval;
			if (approval) {
				cout <<"L1 approved!\n";
				return true;
				break;
			} else {
				cout <<"L1 not approved!\n";
				return false;
				break;
			}
		} else if (ite==2){
			ite=1;
			lockComp();
		} else {
			ite++;
			cout <<"Incorrect Pin entered, Pl enter valid Pin\n";
		}
	}
}

void l2Approval (int pin, int tot) {
	cout <<"L2 approval required (Approval from Floor Manager)\n";
	int ite=1;
	while (true) {
		int flMgrPinEn;
		cout <<"Enter Floor Manager Pin to approve/reject\n";
		cin >>flMgrPinEn;
		if (flMgrPinEn==pin) {
			int approval;
			cout <<"Enter 0 to reject and 1 to approve\n";
			cin >> approval;
			if (approval) {
				cout <<"L2 approved!\n";
				cout << "Congratulations! The stocks of amount " <<tot << " have been purchased by you";
				break;
			} else {
				cout <<"L2 not approved!\n";
				cout << "Sorry! The stocks of amount " <<tot << " cannot be purchased by you as L2 not approved\n";
				break;
			}
		} else if (ite==2){
			ite=1;
			lockComp();
		} else {
			ite++;
			cout <<"Incorrect Pin entered, Pl enter valid Pin\n";
		}
	}
}

int amountCalc (int rate) {
	int units;
	cout <<"Enter No. of units of stock\n";
	cin >> units;
	return units*rate;
}
