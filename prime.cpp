

// Q.5] Write a program to check whether a number is Prime or Not


#include<iostream>

using namespace std;

int main()
{
	int n,i;
	bool isPrime = true;
	
	cout<<"Enter a positive integer:";
	cin>>n;
	
	for(i=2;i<=n/2;++i)
	{
		if(n%1==0)
		{
			isPrime = false;
			break;
		}
	}
	if(isPrime)
	  cout<<"This is Prime Number";
	
	else
	  cout<<"This is not a Prime Number";
	
	return 0;
}
