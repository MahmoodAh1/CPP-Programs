#include <iostream>
using namespace std;

int main(int argc, char** argv)
 
{
	string subject[]={"english","urdu","islamiyat","oop","maths"};
	int marks[5];
	cout<<"\n Enter Your Marks: ";
	for (int i=0;i<5;i++)
	{
		
		cout<<"\n";
		cout<<"\n Enter Marks For "<<subject[i]<<":";
		cin>>marks[i];
	}
	cout<<"==========================================================";
	cout<<"\n";
	cout<<"==========================================================";
	int Total=0;
	int hi=0;
	
	for(int j=0; j<5;j++)
	{
		
		cout<<"\n Your Marks in "<<subject[j]<<" : "<<marks[j]<<endl;
		Total+=marks[j];
	}
	
	int Average=Total/5;
	cout<<"\n Total Marks: "<<Total<<endl;
	cout<<"\n Average Marks: "<<Average<<endl;
	return 0;
}