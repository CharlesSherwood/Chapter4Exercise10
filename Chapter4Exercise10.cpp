/*FileName:Chapter4Exercis10.cpp
Progrmmer:Charles Sherwood
Date:2/25
Requirments:Ask the user for a day and month 
and tell the mhow many days are the that
month from that year.
*/




#include<iomanip>
#include<cmath>
#include <iostream>
using namespace std;

int main()
{
  
	int month, year;
	//Get User Input
	cout << "Please Enter A Month:";
	cin >> month;
	cout << "Please Enter A Year:";
	cin >> year;

	//Cheack if It would be a leap year or not, As well as checking other months with days
	if ((month == 2) && ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))) 
		cout << "Number of days is 29";
	
		else if (month == 2) 
			cout << "Number of days is 28";
		
			else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) 
				cout << "Number of days is 31";
	
				else if (month == 4 || month == 6 || month == 9 || month == 11) 
					cout << "Number of days is 30";
				//IF none of those have been inputed correctly you have and invalid month
					else cout << "You Have Entered An Invalid Month";

	return 0;
	
	
	
	
	
	
}

