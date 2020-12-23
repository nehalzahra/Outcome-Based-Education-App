#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class g{
	public:
		void info_OBE(){
			ifstream help("OBE_Help.txt");
			string data;
			while(!help.eof()){
				getline(help , data);
				cout<<data<<endl;
			}	
		}

};
