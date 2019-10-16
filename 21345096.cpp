#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int a,b,c,d,w[4],i,j;
	cin>>a;
	cin>>b;
	c=a-b;
	if(c<=9)
	{
	
    if(c==9)
	{
	    c=c-1;
	    cout<<c<<endl;
	}
	else
	{
	    c=c+1;
	    cout<<c<<endl;
	}
	}
	else
	{
	    i=0;
	    while(c!=0)
	    {
	        d=c%10;
	        w[i]=d;
	        
	        i++;
	        c=c/10;
	    }
	    if(w[i-1]==9)
	    {
	        w[i-1]=4;
	        for(j=i-1;j>=0;j--)
	        {
	            cout<<w[j];
	        }
	        cout<<endl;
	    }
	    else
	    {
	        w[i-1]=9;
	        for(j=i-1;j>=0;j--)
	        {
	            cout<<w[j];
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
