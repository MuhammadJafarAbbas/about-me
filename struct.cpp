/*#include<iostream>
using namespace std;
struct houseType{
	string oldhouse;
	string newhouse;
	string story;
	int numbadrooms;
	int garage;
	int built;
	double area;
	double price;
	void old(){
    story="2 story";
    garage=9;
    built=1999;
    area=400;
    price=15800;
}
void dis(){
	cout<<"stroy: "<<story<<endl;
	cout<<"number of garages: "<<garage<<endl;
	cout<<"built in year: "<<built<<endl;
	cout<<"area in canal: "<<area<<endl;
	cout<<"price: "<<price<<"$"<<endl;
}
};


int main(){
	houseType h1;
	h1.old();
	h1.dis();
	cout<<endl;
//	houseType h2=h1;
    houseType h2(h1);
	h2.dis();
	return 0;
}
#include<iostream>
using namespace std;
struct student{
	string name[3];
	int roll[3];
	int marks[3];
	void get();
	void dis();
};
void student::get(){
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the name of student: "<<i+1<<" : ";cin>>name[i];
		cout<<"Enter the roll number of student: "<<i+1<<" : ";cin>>roll[i];
		cout<<"Enter the marks of student: "<<i+1<<" : ";cin>>marks[i];
	}
}
void student::dis(){
	for(int i=0;i<3;i++)
	{
	   cout<<"\nthe name of student: "<<i+1<<" : "<<name[i];
	   cout<<"\nthe roll number of student: "<<i+1<<" : "<<roll[i];
	   cout<<"\nthe marks of student: "<<i+1<<" : "<<marks[i];	
	}
	string search;
	bool asd=false;
	for(int i=0;i<3;i++)
	{
	   cout<<"\n search here: ";
	   cin>>search;
	   
	   if(search==name[i])
	   {
	   	 cout<<"\nfound: ";
	   	 cout<<"\nname: "<<name[i]<<" : "<<"roll: "<<roll[i]<<" : "<<marks[i];
	   	 asd=true;
	   }
	}
	if(asd==false)
	{
		cout<<"\nnot found";
	}
}
int main(){
	student s1;
	s1.get();
	s1.dis();
	return 0;
}
#include<iostream>
using namespace std;
struct Course{
	string name;
	int call;
	int credits;
	char grade;
};
struct student{
	double gpa;
	
};
int main(){
	Course c1;
	c1.name="programming";
	c1.call=74774;
	c1.credits=3;
	c1.grade='A';
    student classlist[50];
    for(int i=0;i<50;i++){
    	classlist[i].gpa=0;
	}
	student stu=classlist[30];
	classlist[9].gpa+=0.75;
	cout<<stu.gpa<<endl;
	cout<<classlist[9].gpa;
	return 0;
}
#include<iostream>
using namespace std;
struct sportsType{
	string teamName;
    int numberOfPlayers;
    double teamPayroll;
    double coachsalary;
};
int main(){
	sportsType soccer[20];
	for(int i=0;i<20;i++)
	{
		soccer[i].teamName="";
		soccer[i].numberOfPlayers=0;
		soccer[i].coachsalary=0.0;
		soccer[i].teamPayroll=0.0;
	}
	int length;
	cout<<"Enter then length of team: ";cin>>length;
	for(int i=0;i<length;i++)
	{
		cout<<"Enter the team name: ";
		cin.ignore();
		getline(cin,soccer[i].teamName);
		cout<<"Enter the number of players: ";cin>>soccer[i].numberOfPlayers;
		cout<<"Enter the coach sal: ";cin>>soccer[i].coachsalary;
		cout<<"Enter the team payroll: ";cin>>soccer[i].teamPayroll;
	}
	for(int i=0;i<length;i++)
	{
		if(soccer[i].teamPayroll>=1000000)
		{
			cout<<soccer[i].teamName<<"\n";
		}
	}
	return 0;
}*/
#include<iostream>
using namespace std;
struct timeType{
	int hour;
	int minutes;
};
struct tourType{
	int distance;
	string city;
	timeType time;
	tourType get();
	void dis();
};
tourType tourType::get(){
	tourType destinition;
	city="lahore";
	destinition.distance=1200;
	destinition.time.hour=7;
	destinition.time.minutes=30;
	return destinition;
}
void tourType::dis(){
    cout<<city<<endl;
    cout<<distance<<endl;
    cout<<time.hour<<endl;
    cout<<time.minutes;
}
int main(){
	tourType d;
	d.get();
	d=d.get();
    d.dis();
	return 0;
}