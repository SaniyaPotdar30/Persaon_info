#include<iostream>
#include<stdio.h>
using namespace std;

class person
{
	private:
		char nm[20],ct[20],add[20];
		int ph;
		
		public:
		void get_info()
		{
			cout<<"Name= ";
			cin>>nm;
			cout<<"City= ";
			cin>>ct;
			cout<<"Address= ";
			cin>>add;
			cout<<"Phone no.= ";
			cin>>ph;
		}	
		void show_info()
	{
		cout<<"\nThe information is..."<<endl;
		cout<<nm<<"\t"<<ct<<"\t"<<add<<"\t"<<ph<<endl;
	}
};
	int main()
    {
	person obj;
	obj.get_info();
	obj.show_info();
}
