#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;

class outline
{
private:
	string defineclo[12],p[12];
	int nc;
public:
	void readpreviousdata();
	void teacher_information(void);
	void course_outline(void);
  
};
void outline::readpreviousdata()
{
	cout<<endl;
	fstream readdata;
	string l;
	readdata.open("Previous Course outline");
	while(readdata.good())
	{
		getline(readdata,l);
		cout<<l<<endl;
	}
}	
void outline::teacher_information(void)
{

	cout<<"Plz assign the quantity of CLOs for this semester:";
	cin>>nc;
	cin.ignore();
	for(int i=1;i<=nc;i++)
	{
		cout<<"**********<< Plz Define CLO"<<i<<" >>***********"<<endl;
		getline(cin,defineclo[i]);
	}
	for(int i=1;i<=nc;i++)
	{
		cout<<"Plz enter the PLO number u map this clo"<<i<<":";
		getline(cin,p[i]);
	}
	cout<<endl<<endl;
}
void outline::course_outline(void)
{
   cout<<endl;
   fstream printdata;
   printdata.open("Previous Course outline",ios::app);
   cout<<endl;
   cout<<"                                 ===============*************************============="<<endl;
   printdata<<"                                 ===============*************************============="<<endl;
   cout<<"                                 ---------------<<Mapping CLOs and PLOs>>-------------"<<endl;
   printdata<<"                                 ---------------<<Mapping CLOs and PLOs>>-------------"<<endl;
   cout<<"                                 ===============*************************============="<<endl<<endl;
   printdata<<"                                 ===============*************************============="<<endl<<endl;
   for(int i=1;i<=nc;i++)
   {
    cout<<"                                 ------------------->>>>>CLO_"<<i<<"<<<<<-------------------"<<endl;
	printdata<<"                                 ------------------->>>>>CLO_"<<i<<"<<<<<-------------------"<<endl;
	cout<<"                                 ---------->>>>>Define of this CLO is:<<<<<-----------"<<endl;
	printdata<<"                                 ---------->>>>>Define of this CLO is:<<<<<-----------"<<endl;
	cout<<defineclo[i]<<endl;
	printdata<<defineclo[i]<<endl;
	cout<<"PLO u map this CLO is:"<<p[i]<<endl<<endl;
	printdata<<"PLO u map this CLO is:"<<p[i]<<endl<<endl;
   }  
   fstream writedata;
   writedata.open("Recent Course outline",ios::out);
   writedata<<"                                 ===============*************************============="<<endl;
   writedata<<"                                 ---------------<<Mapping CLOs and PLOs>>-------------"<<endl;
   writedata<<"                                 ===============*************************============="<<endl<<endl;
   for(int i=1;i<=nc;i++)
   {
	writedata<<"                                 ------------------->>>>>CLO_"<<i<<"<<<<<-------------------"<<endl;
	writedata<<"                                 ---------->>>>>Define of this CLO is:<<<<<-----------"<<endl;
	writedata<<defineclo[i]<<endl;
	writedata<<"PLO u map this CLO is:"<<p[i]<<endl<<endl;
   }  
	system("pause");
}