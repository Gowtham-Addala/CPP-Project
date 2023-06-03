#include<bits/stdc++.h>
using namespace std;
int main()
{
	char winner;
	char b[3][3];
	char a[2]={'X','O'};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			b[i][j]=' ';
		}
	}
	int flag=0;
	for(int i=0;i<9;i++)
	{
		if(flag==0)
		{
			for(int j=0;j<3;j++)
			{
				for(int z=0;z<3;z++)
				{
					cout<<b[j][z];
					if(z!=2)
					cout<<" | ";
				}
				cout<<endl;
				if(j<2)
				{
					cout<<"---------"<<endl;
				}
			}
			int pos;
			cout<<endl;
			if(i%2==0)
			cout<<"it's player 1 turn "<<endl;
			else
			cout<<"it's player 2 turn "<<endl;
			cout<<"enter the position for your mark : ";
			cin>>pos;
			cout<<endl;
			while(b[pos/3][pos%3]!=' ')
			{
				cout<<"you cannot place there , give another position : ";
				cin>>pos;
				cout<<endl;
			}
			b[pos/3][pos%3]=a[i%2];
			if(i>3)
			{
				for(int p=0;p<3;p++)
				{
					if(b[p][0]==b[p][1]&&b[p][0]==b[p][2]&&b[p][0]!=' ')
					{
						flag=1;
						winner=b[p][0];
					}
					else if(b[0][p]==b[1][p]&&b[0][p]==b[2][p]&&b[0][p]!=' ')
					{
						flag=1;
						winner=b[0][p];
					}
				}
				if(b[0][0]==b[1][1]&&b[1][1]==b[2][2]&&b[2][2]!=' ')
				{
					flag=1;
					winner=b[1][1];
				}
				else if(b[0][2]==b[1][1]&&b[1][1]==b[2][0]&&b[2][0]!=0)
				{
					flag=1;
					winner=b[1][1];
				}
			}
			
		}
		if(flag==1)
		{
			for(int j=0;j<3;j++)
			{
				for(int z=0;z<3;z++)
				{
					cout<<b[j][z];
					if(z!=2)
					cout<<" | ";
				}
				cout<<endl;
				if(j<2)
				{
					cout<<"---------"<<endl;
				}
			}
			cout<<endl;
			if(winner=='X')
			cout<<"WINNER is player 1 ";
			else if(winner=='O')
			cout<<"WINNER is player 2 ";
			break;
		}
	}
	if(flag==0)
	cout<<"match draw";
}