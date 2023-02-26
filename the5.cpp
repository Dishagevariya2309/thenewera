#include<iostream>
using namespace std;
class employe
{
	public:
		int id;
		char name[100],add[100],post[100];
	private:
		int salary;
};
int main()
{
	employe e1,e2;
	cout<<"Enter  id:-";
	cin>>e1.id;
	cout<<"Enter  name:-";
	cin>>e1.name;
	cout<<"Enter  post:-";
	cin>>e1.post;
	cout<<"Enter  add:-";
	cin>>e1.add;
	cout<<"Enter salary:-";
	cin>>e1.salary;
	
	cout<<" id:-"<<e1.id<<endl;
	cout<<" name:-"<<e1.name<<endl;	
	cout<<" post:-"<<e1.post<<endl;	
	cout<<" add:-"<<e1.add<<endl;
	cout<<" salary:-"<<e1.salary<<endl;	

	cout<<"Enter  id:-";
	cin>>e2.id;
	cout<<"Enter  name:-";
	cin>>e2.name;
	cout<<"Enter  post:-";
	cin>>e2.post;
	cout<<"Enter  add:-";
	cin>>e2.add;
	cout<<"Enter salary:-";
	cin>>e2.salary;
	
	cout<<" id:-"<<e2.id<<endl;
	cout<<" name:-"<<e2.name<<endl;	
	cout<<" post:-"<<e2.post<<endl;	
	cout<<" add:-"<<e2.add<<endl;
	cout<<" salary:-"<<e2.salary<<endl;	
	return 0;
	
	
}
