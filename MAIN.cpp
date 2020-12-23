#include<iostream>
#include<conio.h>
#include"accounts.h"
#include"guest.h"
#include<string>
#include<Windows.h>
using namespace std;
void welcome();
void new_function();


void welcome(){
	int i;
		char wel[50]={'W','E','L','C','O','M','E','T','O','O','U','T','C','O','M','E','B','A','S','E','D','E','D','U','C','A','T','I','O','N','S','O','F','T','W','A','R','E'};
	cout<<"                   ";
	for(i=0;i<7;i++)
	{
		Sleep(100);
		cout<<wel[i];                         
	}
	cout<<" ";
	for(i=7;i<9;i++)
	{	
		Sleep(100);
		cout<<wel[i];                         
	}
	cout<<" ";
	for(i=9;i<16;i++)
	{	
		Sleep(100);
		cout<<wel[i];                         
	}
	cout<<" ";
	for(i=16;i<21;i++)
	{	
		Sleep(100);
		cout<<wel[i];                         
	}
	cout<<" ";
	for(i=21;i<30;i++)
	{	
		Sleep(100);
		cout<<wel[i];                         
	}
	cout<<" ";
	for(i=30;i<38;i++)
	{	
		Sleep(100);
		cout<<wel[i];                         
	}
	cout<<" ";

	/*for(i=37;i<47;i++)
	{	
		Sleep(100);
		cout<<wel[i];                         
	}*/
	cout<<" ";
	cout<<endl<<endl;

	
	
}
void new_fuction(){

	string  a,b;
	int ab;
	int i;
	cout<<endl<<"                                        _________________________"<<endl;
	cout<<endl<<"                                          1   Login As a Guest"<<endl;
	cout<<endl<<"                                       |________________________|"<<endl;
	cout<<endl<<"                                          2   Login to your Account"<<endl;
	cout<<endl<<"                                       |___________________________|"<<endl;

	
	cin>>ab;
	if(ab==1)
	{
		int n;
		Guest o;
		cout<<endl<<"                            You have been loged in as a guest                           "<<endl;
		cout<<endl<<"                             1 ->> Do you want to see information about Outcome Based Education System "<<endl;
		cin>>n;
		if(n==1){
			o.info_OBE();
		}
	}
	else{
	
	student s1("cpe172001","student1");
	student s2("cpe172002","student2");
	t obj1("teacher1","zainabsaleem");
	t obj2("teacher2","muhammadkamran");
    CPE_HOD h1("hod1","cpen");
    EE_HOD h2("hod2","elen");
cout<<endl<<"   ->>   USER-NAME"<<endl;
cout<<endl<<"________________________"<<endl;
	cin>>a;
	cout<<endl<<"________________________"<<endl;
	cout<<endl<<"   ->>   PASSWORD"<<endl;
	cout<<endl<<"________________________"<<endl;
	cin>>b;
	cout<<endl<<"________________________"<<endl;
	//cout<<"Press 1 to enter as guest"<<endl;

	if(a==s1.username&&b==s1.password)
	{
		s1.print();
	}
	else{
		if(a==s2.username&&b==s2.password)
	{
		s2.print();
	}
		else{
	if(a==obj1.username&&b==obj1.password)
	{
		obj1.teacher_f();
		int j;


		char weltech[50]={'W','E','L','C','O','M','E','T','O','O','B','E','E','n','g','r','Z','A','I','N','A','B','S','A','L', 'E','E','M'};
	cout<<"                   ";
	for(int i=0;i<7;i++)    //WELCOME
	{
		Sleep(100);
		cout<<weltech[i];                         
	}
	cout<<" ";
	for(int i=7;i<9;i++)   //TO
	{	
		Sleep(100);
		cout<<weltech[i];                         
	}
	cout<<" ";
	for(int i=9;i<12;i++)  //OBE
	{	
		Sleep(100);
		cout<<weltech[i];                         
	}
	cout<<" ";
	for(int i=12;i<16;i++)  //Engr
	{	
		Sleep(100);
		cout<<weltech[i];                         
	}
	cout<<" ";
	for(i=16;i<22;i++)  //ZAINAB
	{	
		Sleep(100);
		cout<<weltech[i];                         
	}
	cout<<" ";
	for(i=22;i<28;i++)  //SALEEM
	{	
		Sleep(100);
		cout<<weltech[i];                         
	}
	cout<<" ";
	/*for(i=37;i<47;i++)
	{	
		Sleep(100);
		cout<<wel[i];                         
	}*/
	cout<<" ";
	cout<<endl<<endl;

	
	string ch;
	cout<<"     1 >> Want to Map CLO's and PLO's"<<endl;
	cout<<"     2 >> Previous defined CLO's and PLO's"<<endl;
	cin>>ch;
	cout<<endl<<endl;
	if(ch=="YES" || ch=="yes" || ch=="1")
	{
	  obj1.teacher_information();
	  cout<<"                                  ------------>>  Here is the detail of your previous defined CLO's  <<-----------"<<endl<<endl;
	  obj1.readpreviousdata();
	  cout<<endl<<"                        ----------->> Here is the detail of your recently defined CLO's  <<-----------"<<endl;
	  obj1.course_outline();
	  obj1.clo_achive();
	}
	else
	{
	   cout<<"                                  ------------<<<Ur previous define CLO's>>>-----------"<<endl<<endl;
	   obj1.readpreviousdata();
	   obj1.clo_achive();
	}
	


}
		if(a==obj2.username&&b==s2.password)
	{
		obj2.teacher_f();

		char weltech1[50]={'W','E','L','C','O','M','E','T','O','O','B','E','E','n','g','r','M','U','H','A','M','M','A','D','K', 'A','M','R','A','N'};
	cout<<"                   ";
	for(i=0;i<7;i++)    //WELCOME
	{
		Sleep(100);
		cout<<weltech1[i];                         
	}
	cout<<" ";
	for(i=7;i<9;i++)   //TO
	{	
		Sleep(100);
		cout<<weltech1[i];                         
	}
	cout<<" ";
	for(i=9;i<12;i++)  //OBE
	{	
		Sleep(100);
		cout<<weltech1[i];                         
	}
	cout<<" ";
	for(i=12;i<16;i++)  //Engr
	{	
		Sleep(100);
		cout<<weltech1[i];                         
	}
	cout<<" ";
	for(i=16;i<24;i++)  //MUHAMMAD
	{	
		Sleep(100);
		cout<<weltech1[i];                         
	}
	cout<<" ";
	for(i=24;i<30;i++)  //KAMRAN
	{	
		Sleep(100);
		cout<<weltech1[i];                         
	}
	cout<<" ";
	/*for(i=37;i<47;i++)
	{	
		Sleep(100);
		cout<<wel[i];                         
	}*/
	cout<<" ";
	cout<<endl<<endl;

	
	string ch;
	cout<<"Plz enter Yes if u want to map a CLO's and PLO's"<<endl;
	cout<<"Plz enter No if u not want to map a CLO's and PLO's"<<endl;
	cin>>ch;
	cout<<endl<<endl;
	if(ch=="YES" || ch=="yes")
	{
	  obj2.teacher_information();
	  cout<<"                                  ------------<<<Ur previous define CLO's>>>-----------"<<endl<<endl;
	  obj2.readpreviousdata();
	  cout<<endl<<"                                 ------------<<<Ur recently define CLO's>>>-----------"<<endl;
	  obj2.course_outline();
	  obj2.clo_achive();
	}
	else
	{
	   cout<<"                                  ------------<<<Ur previous define CLO's>>>-----------"<<endl<<endl;
	   obj2.readpreviousdata();
	   obj2.clo_achive();
	}
	}





		else{
		if(a==h1.username&&b==h1.password)
		{
			char welcpe[50]={'W','E','L','C','O','M','E','T','O','O','B','E','H','O','D','O','F','C','O','M','P','U','T','E','R','E','N','G','I','N','E','E','R','I','N','G'};
	cout<<"                   ";
	for(i=0;i<7;i++) //WELCOME
	{
		Sleep(100);
		cout<<welcpe[i];                         
	}
	cout<<" ";
	for(i=7;i<9;i++)  //TO
	{	
		Sleep(100);
		cout<<welcpe[i];                         
	}
	cout<<" ";
	for(i=9;i<12;i++)  //OBE
	{	
		Sleep(100);
		cout<<welcpe[i];                         
	}
	cout<<" ";
	for(i=12;i<15;i++) //HOD
	{	
		Sleep(100);
		cout<<welcpe[i];                         
	}
	cout<<" ";
	for(i=15;i<17;i++) //OF
	{	
		Sleep(100);
		cout<<welcpe[i];                         
	}
	cout<<" ";
	for(i=17;i<25;i++)//COMPUTER
	{	
		Sleep(100);
		cout<<welcpe[i];                         
	}
	cout<<" ";
	for(i=25;i<36;i++) //ENGINEERING
	{	
		Sleep(100);
		cout<<welcpe[i];                         
	}
	cout<<" ";
	cout<<endl<<endl;
			//h1.hodd_f();
			h1.list();
			
		}
		else{
		if(a==h2.username&&b==h2.password)
		{
			char welee[50]={'W','E','L','C','O','M','E','T','O','O','B','E','H','O','D','O','F','E','L','E','C','T','R','I','C','A','L','E','I','N','G','I','N','E','E','R','I','N','G'};
	cout<<"                   ";
	for(i=0;i<7;i++)
	{
		Sleep(100);
		cout<<welee[i];                         
	}
	cout<<" ";
	for(i=7;i<9;i++)
	{	
		Sleep(100);
		cout<<welee[i];                         
	}
	cout<<" ";
	for(i=9;i<12;i++)
	{	
		Sleep(100);
		cout<<welee[i];                         
	}
	cout<<" ";
	for(i=12;i<15;i++)
	{	
		Sleep(100);
		cout<<welee[i];                         
	}
	cout<<" ";
	for(i=15;i<17;i++)
	{	
		Sleep(100);
		cout<<welee[i];                         
	}
	cout<<" ";
	for(i=17;i<27;i++)
	{	
		Sleep(100);
		cout<<welee[i];                         
	}
	cout<<" ";
	for(i=27;i<38;i++)
	{	
		Sleep(100);
		cout<<welee[i];                         
	}
	cout<<" ";
	cout<<endl<<endl;
			//h2.hodd_f();
			h2.list();
		}
		else{
			cout<<endl<<" >>Incorrect Entery!!"<<endl;
			cout<<endl<<" >>Kindly Login Ahain"<<endl;
			cout<<endl<<" >>You're now again moving to home screen from where you can log in again."<<endl;
			cout<<endl<<"            Thank you!......"<<endl;

		}
	}
}
	}
	}
	}
	}
int main()
{
	system("color F1");
	welcome();
	while(1){
		new_fuction();
}
    getch();
	return 0;
	}
