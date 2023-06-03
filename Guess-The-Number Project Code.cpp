#include<bits/stdc++.h>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int number;
	int range;
	cout<<"enter the max number in the range : ";
	cin>>range;
	cout<<endl;
	int guess1=rand();
	int guess=guess1%range +1;
	do{
		cout<<"enter a number (range 1-"<<range<<" ) : ";
		cin>>number;
		if(number>guess)
		cout<<"guess lower "<<endl;
		else if(number<guess)
		cout<<"guess higher "<<endl;
	}while(number!=guess);
	cout<<"YOU ARE CORRECT";
	return guess1+1;
}