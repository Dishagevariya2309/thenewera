#include<iostream>
using namespace std;
class Distance 
{
	public:
    int feet;
    float inch;
};
int main() 
{
	int f2;
	Distance f1;
    cout<<"Enter 1st feet:";
    cin>>f1.feet;
    cout<<"Enter 1st inch:";
    cin>>f1.inch;
    if(f1.inch>12) 
	{
        f2=f1.inch/ 12;
        f1.feet+=f2;
        f1.inch-=(f2*12);
    }
	cout<<endl<<"Sum of distances="<<f1.feet<<"feet   "<<f1.inch<<"inches";
}
