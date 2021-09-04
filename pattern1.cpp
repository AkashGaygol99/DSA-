

// Q.6] Print this pattern using loops (For n=5)


#include<iostream>

using namespace std;

int main()
{
	int i,j,n=5;
	
	
	for(i=1;i<=n;i++)
	{
		for(int k=n-i;k>0;k--)
		    cout<<" ";
	    for(j=1;j<=i;j++)
		
			cout<<"* ";
		    cout<<endl;
	}
}
