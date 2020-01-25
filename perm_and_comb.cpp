#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	 if(r>0)
	return n*permutation(n-1 , r-1);
	
	else
  return 1;
}

int combination(int n, int r)
{
	
	if(r>0)
   return((n)*combination(n-1, r-1))/r;
   else
  return 1;
}

int main()
{
		int n,r;
cout<<"This function calculates permutations and combinations. "<<endl;
cout<<"Enter total number of objects. -> " <<endl;
cin>>n;
cout<<"Enter number of objects to be selected. -> "<<endl;
cin>>r;
try
{
	if(n<0||r<0)
	throw (100);
	
	else
	{
	  int resultp = permutation(n,r);
      int resultc= combination(n,r);
       cout<<"permutations- "<<resultp<<endl;
        cout<<"Combinations- "<<resultc<<endl;	
	}
}
catch(int a)
{
	cout<<"You entered an negative number.";
}
  return 0;
}
