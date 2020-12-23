#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
class person
{
	public:
	string username;
	string  password;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Guest{
private:
	string data;
	public:
		void info_OBE(){
			ifstream help("OBE_Help.txt");
			while(!help.eof()){
				getline(help , data);
				cout<<data<<endl;
			}	
		}

};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



class CPE_Data{
protected:
	void List_of_Courses(){
		//fstream File("Semester.csv",ios::out);
		int i=0;
		string csvItem;
		cout<<endl<<endl;
		cout<<"````````````````````````````````````````````````````````````````````````````````````````````````"<<endl;
		cout<<"                                 Here is the list of all Courses avalible in BS Computer Engineering             "<<endl;
		fstream myfile;
		int lineA=3;
		int lineNumber=0;
		myfile.open("Excel.csv");
		
		while(myfile.good()){
			string line1;
			getline(myfile,line1,',');
			cout<<line1;
		} 
		myfile.close();
	}
	void List_of_Faculty_Members(){
		
		fstream faculty;
		cout<<endl<<endl;
		cout<<"````````````````````````````````````````````````````````````````````````````````````````````````"<<endl;
		cout<<"                                 Here is the list of faculty members of BS Computer Engineering             "<<endl;
		faculty.open("Facultydata.csv");
		while(faculty.good()){
			string line2;
			getline(faculty,line2,',');
			cout<<line2;
		}
		faculty.close();
	}

};
class CPE_HOD :public CPE_Data , public Guest , public person{
	public:
	CPE_HOD(string a, string b)
	{
		username=a;
		password=b;
	}
private:
	string a;
		int arr[30];
		int brr[30];
		int sem , n1;
		int Sub , Lab;
		string lab[50];
		string sub[50];
		string L1;
public:
	void list(){
		cout<<"_____________________________________________"<<endl;
		cout<<"   ->> Press -> 1 : To check List of Courses"<<endl;
		cout<<"_____________________________________________"<<endl;
		cout<<"   ->> Press -> 2 : To check List of Faculty Members"<<endl;
		cout<<"____________________________________________________"<<endl;
		cout<<"  ->>  Press -> 3 : To Add  New Semester's Data"<<endl;
		cout<<"________________________________________________"<<endl;
		cout<<"  ->>  Press -> 4 : To Assign courses to teachers"<<endl;
		cout<<"_________________________________________________"<<endl;
		cout<<"  ->>  Press -> 5 : To get details about Outcome based Education"<<endl;
		cout<<"________________________________________________________________"<<endl;
		cin>>a;
		if(a=="1"){
			List_of_Courses();
		}
		if(a=="2"){
			List_of_Faculty_Members();
		}
		if(a=="3"){
			fstream File("Semester.csv",ios::app);
			cout<<"  ->>  Do you want to add Data for Spring Semester or for Fall Semester ?"<<endl;
			cout<<"  ->>  Press -> 1 : To Add Data for Spring Semester :"<<endl;
			cout<<"_____________________________________________________"<<endl;
			cout<<"  ->>  Press -> 2 : To Add Data for Fall Semester :"<<endl;
			cout<<"___________________________________________________"<<endl;
			cin>>n1;
			if(n1 ==1 || n1==2)
			{
		cout<<"  ->>  Select Semester :"<<endl;
		cin>>sem;
		File<<"          Semester          "<<sem<<endl;
		cout<<"_______________________________Data is required for________________________"<<sem<<"________Semester________________"<<endl;
		cout<<"  ->> How Many subjects you want to add in Semester"<<" "<<sem<<" :";
		cin>>Sub;
		cout<<"  ->> How many labs you want to add in" <<sem<<" Semester"<<endl;
		cin>>Lab;
		cout<<"  ->> Do you want to see list of all subjects :"<<endl;
		cout<<"   ->> 1 : Yes"<<endl;
		cout<<"_______________"<<endl;
		cout<<"   ->> 2 : No"<<endl;
		cout<<"_______________"<<endl;
		cin>>L1;
		if(L1=="Yes" || L1=="yes" || L1=="1" || L1=="2"){
          List_of_Courses();
		}
		
		cout<<"  ->>  Enter Subjects for"<<sem<<" Semester";
		for(int a=0 ; a<Sub ; a++){
			 getline(cin,sub[a]);
			 File<<" "<<sub[a]<<endl;
		
		}
		 cout<<"  ->>  Enter Labs for "<<sem<<"  Semester"<<endl;
		 for(int i=0; i<Lab ; i++){
			 getline(cin,lab[i]);
			 File<<" "<<lab[i]<<endl;
		 }
		 File.close();
			
			}
		}
		
		if(a=="4"){
			fstream Tech("Teachers.csv");
			string st , mm , teacher[30], department[30] ,Subj[30] , Semester[30] , s1 , LINE;
			int t1;

			cout<<"   ->>  1) List of Semesters you have added yet."<<endl;
			cout<<"________________________________________________"<<endl;
			cout<<"   ->>  2) List of Teachers you have assigned for courses."<<endl;
			cout<<"__________________________________________________________"<<endl;
			cout<<"   ->>  3) Add teacher for course "<<endl;
			cout<<"__________________________________"<<endl;
			cin>>s1;
			if(s1=="1"){
            cout<<" ->   The semester you have added yet are :"<<endl;
			fstream Semester_Data("Semester.csv");
			string L;
			Semester_Data.is_open();
			while(Semester_Data.good()){
			getline(Semester_Data,L,',');
			cout<<L;
			}
			Semester_Data.close();
			}
			if(s1=="2"){
				cout<<" ->>  Previous data of teachers you have assigned is :"<<endl;
				while(Tech.good()){
					getline(Tech,LINE,',');
					cout<<LINE;
				}
			}
			if(s1=="3"){
				cout<<"  -->>  How many teachers you want to add :"<<endl;
				cin>>t1;
				for(int a=0 ; a<t1 ; a++){
				cin.ignore();
				Tech<<"                ( "<<a+1<<" )              "<<endl;
				cout<<" ->> Enter Name of the teacher :"<<endl;
				getline(cin,teacher[a]);
				Tech<<" "<<teacher[a]<<endl;
				cout<<" ->>  Enter Department :"<<endl;
				getline(cin,department[a]);
				Tech<<" "<<department[a]<<endl;
				cout<<" ->>  Enter Subject :"<<endl;
				getline(cin,Subj[a]);
				Tech<<" "<<Subj[a]<<endl;
				cout<<" ->>  Enter Semester in which you're enrolling teacher"<<endl;
				getline(cin,Semester[a]);
				Tech<<" "<<Semester[a]<<endl;
				cout<<"_________________________________________"<<endl;
				cout<<"       Successfully Added   "<<endl;
				}
			
			}
		}
		if ( a=="5"){
			info_OBE();
		}
		}
		
	   
};

class EE_Data{
protected:
	void List_of_Courses(){
		//fstream File("Semester.csv",ios::out);
		int i=0;
		string csvItem;
		cout<<endl<<endl;
		cout<<"````````````````````````````````````````````````````````````````````````````````````````````````"<<endl;
		cout<<"                                 Here is the list of all Courses avalible in BS Computer Engineering             "<<endl;
		fstream myfile;
		int lineA=3;
		int lineNumber=0;
		myfile.open("Excel1.csv");
		
		while(myfile.good()){
			string line1;
			getline(myfile,line1,',');
			cout<<line1;
		} 
		myfile.close();
		
	}
	void List_of_Faculty_Members(){
		
		fstream faculty;
		cout<<endl<<endl;
		cout<<"````````````````````````````````````````````````````````````````````````````````````````````````"<<endl;
		cout<<"                                 Here is the list of faculty members of BS Computer Engineering             "<<endl;
		faculty.open("Facultydata1.csv");
		while(faculty.good()){
			string line2;
			getline(faculty,line2,',');
			cout<<line2;
		}
		faculty.close();
	}

};
class EE_HOD :public EE_Data , public Guest , public person{
public:
	EE_HOD(string A, string B)
	{
		username=A;
		password=B;
	}
private:
	string a;
		int arr[30];
		int brr[30];
		int sem , n1;
		int Sub , Lab;
		string lab[50];
		string sub[50];
		string L1;
public:
	void list(){
		cout<<"   >>  Press -> 1 : To check List of Courses"<<endl;
		cout<<"____________________________________"<<endl;
		cout<<"   >>  Press -> 2 : To check List of Faculty Members"<<endl;
		cout<<"____________________________________"<<endl;
		cout<<"   >>  Press -> 3 : To Add  New Semester's Data"<<endl;
		cout<<"____________________________________"<<endl;
		cout<<"   >>  Press -> 4 : To Assign courses to teachers"<<endl;
		cout<<"____________________________________"<<endl;
		cout<<"  ->>  Press -> 5 : To get details about Outcome based Education"<<endl;
		cout<<"________________________________________________________________"<<endl;
		cin>>a;
		if(a=="1"){
			List_of_Courses();
		}
		if(a=="2"){
			List_of_Faculty_Members();
		}
		if(a=="3"){
			fstream File("Semester1.csv",ios::app);
			cout<<"  ->>  Do you want to add Data for Spring Semester or for Fall Semester ?"<<endl;
			cout<<"  >>  Press -> 1 : To Add Data for Spring Semester :"<<endl;
			cout<<"______________________________________________"<<endl;
			cout<<"  >>  Press -> 2 : To Add Data for Fall Semester :"<<endl;
			cout<<"______________________________________________"<<endl;
			cin>>n1;
			if(n1 ==1 || n1==2)
			{
		cout<<"Select Semester :"<<endl;
		cin>>sem;
		File<<"          Semester          "<<sem<<endl;
		cout<<"_______________________________Data is required for________________________"<<sem<<"________Semester________________"<<endl;
		cout<<"  ->>  How Many subjects you want to add in Semester"<<" "<<sem<<" :";
		cin>>Sub;
		cout<<"  ->>  How many labs you want to add in" <<sem<<" Semester"<<endl;
		cin>>Lab;
		cout<<"  ->>  Do you want to see list of all subjects :"<<endl;
		cout<<"    -> 1 : Yes"<<endl;
		cout<<"    -> 2 : No"<<endl;
		cin>>L1;
		if(L1=="Yes" || L1=="yes" || L1=="1" || L1=="2"){
          List_of_Courses();
		}
		
		cout<<"  ->>  Enter Subjects for"<<sem<<" Semester";
		for(int a=0 ; a<Sub ; a++){
			 getline(cin,sub[a]);
			 File<<" "<<sub[a]<<endl;
		
		}
		 cout<<"  ->>  Enter Labs for"<<sem<<"Semester"<<endl;
		 for(int i=0; i<Lab ; i++){
			 getline(cin,lab[i]);
			 File<<" "<<lab[i]<<endl;
		 } 
		
		 File.close();
			
			}
		}
		
		if(a=="4"){
			fstream Tech("Teachers1.csv" );
			string st , mm , teacher[30], department[30] ,Subj[30] , Semester[30] , s1 , LINE;
			int t1;

			cout<<" ->>  1) List of Semesters you have added yet."<<endl;
			cout<<"______________________________________________"<<endl;
			cout<<" ->>  2) List of Teachers you have assigned for courses."<<endl;
			cout<<"________________________________________________________"<<endl;
			cout<<" ->>  3) Add teacher for course "<<endl;
			cout<<"________________________________"<<endl;
			cin>>s1;
			if(s1=="1"){
            cout<<"  ->>  The semester you have added yet are :"<<endl;
			fstream Semester_Data("Semester1.csv");
			string L;
			Semester_Data.is_open();
			while(Semester_Data.good()){
			getline(Semester_Data,L,',');
			cout<<L;
			}
			Semester_Data.close();
			}
			if(s1=="2"){
				cout<<"  ->>  Previous data of teachers you have assigned is :"<<endl;
				while(Tech.good()){
					getline(Tech,LINE,',');
					cout<<LINE;
				}
			}
			if(s1=="3"){
				cout<<"  ->>  How many teachers you want to add :"<<endl;
				cin>>t1;
				for(int a=0 ; a<t1 ; a++){
				cin.ignore();
				Tech<<"                ( "<<a+1<<" )              "<<endl;
				cout<<"  ->>  Enter Name of the teacher :"<<endl;
				getline(cin,teacher[a]);
				Tech<<" "<<teacher[a]<<endl;
				cout<<"  ->>  Enter Department :"<<endl;
				getline(cin,department[a]);
				Tech<<" "<<department[a]<<endl;
				cout<<"  ->>  Enter Subject :"<<endl;
				getline(cin,Subj[a]);
				Tech<<" "<<Subj[a]<<endl;
				cout<<"  ->>  Enter Semester in which you're enrolling teacher"<<endl;
				getline(cin,Semester[a]);
				Tech<<" "<<Semester[a]<<endl;
				cout<<"_________________________________________"<<endl;
				cout<<"          Successfully Added       "<<endl;
				}
			
			}
		}
		if ( a=="5"){
			info_OBE();
		}
		}
		
	   
};








  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  class student: public person
{
public:
		student(string a, string b)
	{
		username=a;
		password=b;
	}

		student()
	{
		cout<<"welcome to student accont"<<endl;
	}
	void print()
	{
		
		cout<<"Sr. no";
		cout<<"			                  	";
		cout<<" "<<" "<<"PLO1"<<" "<<"PLO2"<<" "<<"PLO3"<<" "<<"PLO4"<<" "<<"PLO5"<<" "<<"PLO6"<<" "<<"PLO7"<<" "<<"PLO8"<<" "<<"PL09"<<" "<<"PLO10"<<" "<<"PL011"<<" "<<"PL012"<<endl;
		cout<<"Smester 1"<<endl;
	  //a<<"1"<<","<<"ISLS-1112"<<","<<"Islamic Studies"<<"PLO1"<<","<<"PLO2"<<","<<"PLO3"<<","<<"PLO4"<<","<<"PLO5"<<","<<"PLO6"<<","<<"PLO7"<<","<<"PLO8"<<","<<"PL09"<<","<<"PLO10"<<","<<"PL011"<<","<<"PL012"<<endl;
		cout<<"1"<<" "<<"ISLS-1112"<<" "<<"Islamic Studies"<<"			                                             	"<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"1"<<" "<<"1"<<" "<<" "<<"1"<<endl;
		cout<<"2"<<" "<<"ENGL-1118"<<" "<<"Functional English"<<"		                                       		"<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"1"<<" "<<"1"<<" "<<" "<<"1"<<endl;
		cout<<"3"<<" "<<"MATH-1101"<<" "<<"Calculus - I"<<"				                                           "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"1"<<" "<<"1"<<" "<<" "<<"1"<<endl;
		cout<<"4"<<" "<<"PHYS-1121"<<" "<<"Applied Physics"<<"			                                      	"<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"1"<<" "<<"1"<<" "<<" "<<"1"<<endl;
		cout<<"5"<<" "<<"PHYS-1221"<<" "<<"Applied Physics Lab"<<"		                                    		"<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"1"<<" "<<"1"<<" "<<" "<<"1"<<endl;
		cout<<"6"<<" "<<"CPEN-1110"<<" "<<"Introduction to Computing"<<"	                            			"<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"1"<<" "<<"1"<<" "<<" "<<"1"<<endl;
		cout<<"7"<<" "<<"CPEN-1210"<<" "<<"Introduction to Computing Lab"<<"      	                             	"<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"1"<<" "<<"1"<<" "<<" "<<"1"<<endl;
		cout<<"8"<<" "<<"MEEN-1212"<<" "<<"Workshop Practice"<<"				                                  "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"1"<<" "<<"1"<<" "<<" "<<"1"<<endl;
		
		//a.close();
	}
	void save()
	{
		fstream a("f2.csv", ios::out);
		a<<"Sr. no";
		a<<","<<","<<",";
		a<<","<<","<<"PLO1"<<","<<"PLO2"<<","<<"PLO3"<<","<<"PLO4"<<","<<"PLO5"<<","<<"PLO6"<<","<<"PLO7"<<","<<"PLO8"<<","<<"PL09"<<","<<"PLO10"<<","<<"PL011"<<","<<"PL012"<<endl;
		a<<"Smester 1"<<endl;
	  //a<<"1"<<","<<"ISLS-1112"<<","<<"Islamic Studies"<<"PLO1"<<","<<"PLO2"<<","<<"PLO3"<<","<<"PLO4"<<","<<"PLO5"<<","<<"PLO6"<<","<<"PLO7"<<","<<"PLO8"<<","<<"PL09"<<","<<"PLO10"<<","<<"PL011"<<","<<"PL012"<<endl;
		a<<"1"<<","<<"ISLS-1112"<<","<<"Islamic Studies"<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<"1"<<","<<"1"<<","<<","<<"1"<<endl;
		a<<"2"<<","<<"ENGL-1118"<<","<<"Functional English"<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<"1"<<","<<"1"<<","<<","<<"1"<<endl;
		a<<"3"<<","<<"MATH-1101"<<","<<"Calculus - I"<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<"1"<<","<<"1"<<","<<","<<"1"<<endl;
		a<<"4"<<","<<"PHYS-1121"<<","<<"Applied Physics"<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<"1"<<","<<"1"<<","<<","<<"1"<<endl;
		a<<"5"<<","<<"PHYS-1221"<<","<<"Applied Physics Lab"<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<"1"<<","<<"1"<<","<<","<<"1"<<endl;
		a<<"6"<<","<<"CPEN-1110"<<","<<"Introduction to Computing"<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<"1"<<","<<"1"<<","<<","<<"1"<<endl;
		a<<"7"<<","<<"CPEN-1210"<<","<<"Introduction to Computing Lab"<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<"1"<<","<<"1"<<","<<","<<"1"<<endl;
		a<<"8"<<","<<"MEEN-1212"<<","<<"Workshop Practice"<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<","<<"1"<<","<<"1"<<","<<","<<"1"<<endl;

		a.close();
	}
	/*
ofstream MyExcelFile;
MyExcelFile.open("C:\\test.csv");

MyExcelFile << "First Name, Last Name, Middle Initial" << endl;

MyExcelFile << "Michael, Jackson, B." << endl;

MyExcelFile.close();
*/
};








///////////////////////////////////////////////////////////////////////////////////////////////







class t: public person
{
private:
	string s1,s2;
	int nc,p1,p2,p3,p4,p5,Q,A,m1,m2,m3,m4,m5;
	float M1,M2,M3,M4,M5;
	string defineclo[12],p[12];
	//int nc;
public:
//	void readpreviousdata();
	//void teacher_information(void);
//	void course_outline(void);
  	t(string x, string y)
	{
		username=x;
		password=y;
	}

void readpreviousdata()
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
void teacher_information(void)
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
void course_outline(void)
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

	
	void teacher_f()
	{
		cout<<"hey "<<username<<endl;
	}
	
void clo_achive()
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
};















