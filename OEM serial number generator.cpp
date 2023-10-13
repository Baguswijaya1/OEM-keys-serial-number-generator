//read README.md file for explanation

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void date(int day, int month, int year){
	int date;
	bool bissextile;
	if (year % 400 == 0){
		bissextile = true;
	} else if ((year % 400 != 0) && (year % 4 == 0) && (year % 100!=0)){
		bissextile = true;
	} else {
		bissextile = false;
	}
	if (bissextile == true){
		switch (month){
		case 1 : date = 0 + day; break;
		case 2 : date = 31 + day; break;
		case 3 : date = 60 + day; break;
		case 4 : date = 91 + day; break;
		case 5 : date = 121 + day; break;
		case 6 : date = 152 + day; break;
		case 7 : date = 182 + day;break;
		case 8 : date = 213 + day;break;
		case 9 : date = 244 + day;break;
		case 10: date = 274 + day;break;
		case 11: date = 305 + day;break;
		case 12: date = 335 + day;break;
	}
	} else if (bissextile == false){
		switch (month){
		case 1 : date = 0 + day;break;
		case 2 : date = 31 + day;break;
		case 3 : date = 59 + day;break;
		case 4 : date = 90 + day;break;
		case 5 : date = 120 + day;break;
		case 6 : date = 151 + day;break;
		case 7 : date = 181 + day;break;
		case 8 : date = 212 + day;break;
		case 9 : date = 243 + day;break;
		case 10: date = 273 + day;break;
		case 11: date = 304 + day;break;
		case 12: date = 334 + day;break;
	}
	}
	
	cout<<setfill('0')<<setw(3)<<date<<year%100;
	
}

void OEM(){
	cout<<"OEM";
}

void mod7(){
	int mod7[7];
	int sum;
	bool done;
	
	do{
		sum = 0;
		mod7[0] = 0;
		for (int i = 1; i<7; i++){
			mod7[i] = rand () % 9;
			sum +=mod7[i];
		}
		if (sum % 7 != 0){
			done = false;
		} else if (sum % 6 == 0){
			done = true;
		}
	} while (done == false);
	
	for (int i = 0; i<7; i++){
		cout<<mod7[i];
	}
}
	

void serial_number(){
	int serialnum = 0 + rand() % 99999;
	cout<<setfill('0')<<setw(5)<<serialnum;
}

int main(){
	int day, month, year;
	srand(time(0));
	cout<<"day \t: "; cin>>day;
	cout<<"month \t:"; cin>>month;
	cout<<"year \t:"; cin>>year;
	
	date(day, month, year); cout<<"-";
	OEM(); cout<<"-";
	mod7(); cout<<"-";
	serial_number(); cout<<endl;
	
	return 0;
}
