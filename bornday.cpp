#include<iostream>
using namespace std;
int ycode(int n)
{
	return (n+n/4)%7;
}
int ccode(int n)
{
	switch(n)
	{
		case 17: return 4;
		case 18: return 2;
		case 19: return 0;
		case 20: return 6;
		case 21: return 4;
		case 22: return 2;
		case 23: return 0;
	}
}
int mcode(int n)
{
	switch(n)
	{
		case 1: return 0;
		case 2: return 3;
		case 3: return 3;
		case 4: return 6;
		case 5: return 1;
		case 6: return 4;
		case 7: return 6;
		case 8: return 2;
		case 9: return 5;
		case 10: return 0;
		case 11: return 3;
		case 12: return 5;
	}
}
int lyear(int n)
{
	if(n%400==0)
	return 1;
	else if(n%4==0&&n%100!=0)
	return 1;
	else
	return 0;
}
void display(int n)
{
	switch(n)
	{
		case 0: cout<<"Sunday\n"; break;
		case 1: cout<<"Monday\n";break;
		case 2: cout<<"Tuesday\n";break;
		case 3: cout<<"Wednesday\n";break;
		case 4: cout<<"Thursday\n";break;
		case 5: cout<<"Friday\n";break;
		case 6: cout<<"Saturday\n";break;
	}
}

int main()
{
	int d,m,y;
	cout<<"Enter dd-mm-yyyy\n";
	cin>>d>>m>>y;
	int s=0;
	s=ycode(y%100)+ccode(y/100)+mcode(m)+d%7;
	if(m==1||m==2)
		display((s+7-lyear(y))%7);
	else
		display(s%7);
	
	return 0;
}
