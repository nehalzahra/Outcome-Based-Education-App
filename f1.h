#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class CLOs
{
private:
	string s1,s2;
	int nc,p1,p2,p3,p4,p5,Q,A,m1,m2,m3,m4,m5;
	float M1,M2,M3,M4,M5;
public:
	
	void clo_achive(void);
};
void CLOs::clo_achive(void)
{
	double sum=0,sump=0;
	cout<<endl<<endl<<"                                 ======<<Plz enter ur choice for select semester>>====="<<endl<<endl<<endl<<"------------------->>>>>Semester:";
	cin>>s1;
//	cout<<"Plz enter any subject related to this semester "<<s1<<"=";
//	cin>>s2;
	cout<<"Plz assign the quantity of CLOs for this semester=";
	cin>>nc;
	cout<<endl;
	cout<<"How many quizes u assign in this subject=";
    cin>>Q;
	cout<<"How many assignments u assign in this subject=";
	cin>>A;
	cout<<endl;
    cout<<"Plz assign the total marks of quizes related to this clo=";
	cin>>m1;
	cout<<"Plz assign the total marks of assignments related to this clo=";
	cin>>m2;
	cout<<"Plz assign the total marks of midterm related to this clo=";
	cin>>m3;
	cout<<"Plz assign the total marks of finalterm related to this clo=";
	cin>>m4;
	cout<<"Plz assign the total marks of project question related to this clo=";
	cin>>m5;
	cout<<endl;
	for(int i=1;i<=nc;i++)
	{
	     cout<<endl<<endl;
		 cout<<"************<<CLO-"<<i<<">>************"<<endl;
		 cout<<endl<<endl;
	     cout<<"Plz assign the percentage of CLOs and u remaimber the total percentage is 100 in the given sanarios if u not assign"<<endl; 
		 cout<<"the some or complete percentage of any sanario so u enter zero"<<endl;
		 cout<<"Plz assign the % of quizes=";
		 cin>>p1;
		 cout<<"Plz u assign the % of assignments=";
		 cin>>p2;
		 cout<<"Plz u assign the % of midterm_exam=";
		 cin>>p3;
		 cout<<"Plz u assign the % of finalterm_exam=";
		 cin>>p4;
		 cout<<"Plz u assign the % of project=";
		 cin>>p5;
		 cout<<endl;
		 sum=p1+p2+p3+p4+p5;
	if(sum==100)
	{
		cout<<endl<<"**********<Plz assign marks>***********"<<endl;
		if(p1>0)
		{		
			cout<<"Plz enter the obtained quizes marks of student in this subject=";
		    cin>>M1;
			sump=sump+(M1*p1/m1);
		}
		if(p2>0)
		 {
		   cout<<"Plz enter the obtained assignment marks of student in this subject=";
	       cin>>M2;
		   sump=sump+(M2*p2/m2);
	    }
		if(p3>0)
		{
          cout<<"Plz enter the obtained midterm marks of student in this subject=";
		  cin>>M3;
		  sump=sump+(M3*p3/m3);
		}
		if(p4>0)
		{
	    	cout<<"Plz enter the obtained finalterm marks of student in this subject=";
			cin>>M4;
			sump=sump+(M4*p4/m4);
		}
		if(p5>0)
		{
		   cout<<"Plz enter the obtained project marks of student in this subject=";
		   cin>>M5;
		   sump=sump+(M5*p5/m4);
		}
		cout<<endl;
		if(sump>=45)
		{
			cout<<endl<<endl;
			cout<<"=0=0=0=0=0=0=0=0(( sheet CLO-"<<i<<" ))=0=0=0=0=0=0=0=0="<<endl;
			cout<<"Sanario            Assign Percentage     Student gain marks     Each subject percentage     Achivement of this CLO"<<endl;
			if(p1>0)
				cout<<"Quizes                 "<<p1<<"                       "<<M1<<"                 "<<sump<<"                      YES"<<endl;  
			if(p2>0)
				cout<<"Assignments            "<<p2<<"                       "<<M2<<"                 "<<sump<<"                      YES"<<endl;
			if(p3>0) 
				cout<<"Mid_term               "<<p3<<"                       "<<M3<<"                 "<<sump<<"                      YES"<<endl;
			if(p4>0)
				cout<<"Final_term             "<<p4<<"                       "<<M4<<"                 "<<sump<<"                      YES"<<endl;
			if(p5>0)
				cout<<"Project                "<<p5<<"                       "<<M5<<"                 "<<sump<<"                      YES"<<endl;
			cout<<endl;
			cout<<"Total Percentage of student gain in CLO"<<i<<" is="<<sump<<endl;
			cout<<"Student achive CLO"<<i<<" successfully"<<endl;
		}
		else
		{
			cout<<"=0=0=0=0=0=0=0=0(( sheet CLO-"<<i<<" ))=0=0=0=0=0=0=0=0="<<endl;
			cout<<"Sanario            Assign Percentage     Student gain marks     Each subject percentage     Achivement of this CLO"<<endl;
			if(p1>0)
				cout<<"Quizes                 "<<p1<<"                       "<<M1<<"                 "<<sump<<"                        NO"<<endl;  
			if(p2>0)
				cout<<"Assignments            "<<p2<<"                       "<<M2<<"                 "<<sump<<"                        NO"<<endl;
			if(p3>0) 
				cout<<"Mid_term               "<<p3<<"                       "<<M3<<"                 "<<sump<<"                        NO"<<endl;
			if(p4>0)
				cout<<"Final_term             "<<p4<<"                       "<<M4<<"                 "<<sump<<"                        NO"<<endl;
			if(p5>0)
				cout<<"Project                "<<p5<<"                       "<<M5<<"                 "<<sump<<"                        NO"<<endl;
			cout<<endl;
			cout<<"Total Percentage of student gain in CLO"<<i<<" is="<<sump<<endl;
			cout<<"Student not achive CLO"<<i<<" successfully"<<endl;
		}
		if(i!=nc)
		{
		    cout<<endl<<"                                 *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*="<<endl;
		    cout<<"                                 *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*="<<endl<<endl;
		}
		else
		{
			cout<<endl<<"                                 *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
			cout<<endl<<"                                 *=*=*=*=*=*=*=* This portion is ennded *=*=*=*=*=*=*=*=*"<<endl;
		    cout<<endl<<"                                 *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
		}
	 }
	 else
	   {
	   	 i=i-1;
		 cout<<endl<<"U not assign 100% CLOs percentage so u try again"<<endl; 
       }
    }
}