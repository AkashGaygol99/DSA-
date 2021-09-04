
// Q.3] Write a program to check whether a year entered by a user is Leap year or not.


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int year;
	cout<<"Enter year:";
	cin>>year;
	
	if(year%400==0 || year%100!=0 && year%4==0)
	{
		cout<<" It is Leap year";
	}
	else
	{
		cout<<"Non Leap year";
	}
	getch();
}
