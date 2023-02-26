#include<iostream>
using namespace std;
class house
{
	public:
		int fno,rooms,mem;
		char add[100];
};
int main()
{
	house e1,e2,e3,e4;
	cout<<"Enter  flate no.:-";
	cin>>e1.fno;
	cout<<"Enter  address:-";
	cin>>e1.add;
	cout<<"how many rooms?:-";
	cin>>e1.rooms;
	cout<<"hoe many members :-";
	cin>>e1.mem;
	
	cout<<" flate no.:-"<<e1.fno<<endl;
	cout<<" address:-"<<e1.add<<endl;	
	cout<<" rooms:-"<<e1.rooms<<endl;	
	cout<<" members:-"<<e1.mem<<endl;
}
