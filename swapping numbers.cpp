#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
class nins{ 
	public:
		int x,y,z; 
		void twovarswapping(); 
		void threevarswapping(); 
};

int main() {
	nins call;
	call.twovarswapping();
	call.threevarswapping();
	return 0;
}

void nins::twovarswapping() 
{
	cout<<"TWO VARIABLES"<<endl<<"ENTER X:"; 
	cin>>x; 
	cout<<"ENTER Y:";
	cin>>y; 
	y=x+y; 
	x=y-x;
	y=y-x;
	cout<<"SWAP"<<endl<<"X:"<<x<<endl<<"Y:"<<y<<endl; 


void hazel::threevarswapping()
{
	cout<<endl<<"THREE VARIABLES"<<endl<<"ENTER X:";
	cin>>x; 
	cout<<"ENTER Y:";
	cin>>y; 
	cout<<"ENTER Z:";
	cin>>z;
	x=x+y+z; 
	y=x-y-z; 
	z=x-y-z;
	x=x-(y+z);
	cout<<"SWAP"<<endl<<"X:"<<x<<endl<<"Y:"<<y<<endl<<"Z:"<<z; 
}

