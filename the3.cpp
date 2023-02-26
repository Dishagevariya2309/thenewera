#include<iostream>
using namespace std;
class Time
	{
		public:
			int hour,min,sec;
	};
main()
{
	Time t1;
	cout<<"Enter a second:==";
	cin>>t1.sec;
	t1.hour=(t1.sec/3600);
	t1.min=(t1.sec-(3600*t1.hour))/60;
	t1.sec=(t1.sec-(3600*t1.hour))-(t1.min*60);
	cout<<"hour:- "<<t1.hour<<" min:- "<<t1.min<<" second:- "<<t1.sec;
}
