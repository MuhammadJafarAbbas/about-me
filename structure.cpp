/*#include<iostream>
using namespace std;
struct computer{
    string manufectuerer;
    string model;
    string processor;
    int ram;
    int hardDrive;
    double price;
 //   void get();
   // void dis();
};
/*void computer::get(){
	cout<<"manufecturer company: ";cin>>manufectuerer;
	cout<<"model: ";cin>>model;
	cout<<"processor: ";cin>>processor;
	cout<<"ram GB: ";cin>>ram;
	cout<<"price: $";cin>>price;
}
void computer::dis(){
	cout<<"manufecturer company: "<<manufectuerer<<endl;
	cout<<"model: "<<model<<endl;
	cout<<"processor: "<<processor<<endl;
	cout<<"ram: "<<ram<<" GB"<<endl;
	cout<<"price: $"<<price<<endl;
}/
int main(){
	computer c1;
//	c1.get();
//	c1.dis();
    //get data
    cout<<"manufecturer company: ";cin>>c1.manufectuerer;
	cout<<"model: ";cin>>c1.model;
	cout<<"processor: ";cin>>c1.processor;
	cout<<"ram GB: ";cin>>c1.ram;
	cout<<"price: $";cin>>c1.price;
	//display data
	cout<<"manuftucturer company: "<<c1.manufectuerer<<endl;
	cout<<"model: "<<c1.model<<endl;
	cout<<"processor: "<<c1.processor<<endl;
	cout<<"ram: "<<c1.ram<<" GB"<<endl;
	cout<<"price: $"<<c1.price<<endl;
	return 0;
}*/
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
	void old();
	void dis();
};
void houseType::old(){
    story="2 story";
    garage=9;
    built=1999;
    area=400;
    price=15800;
}
void houseType::dis(){
	cout<<"stroy: "<<story<<endl;
	cout<<"number of garages: "<<garage<<endl;
	cout<<"built in year: "<<built<<endl;
	cout<<"area in canal: "<<area<<endl;
	cout<<"price: "<<price<<"$"<<endl;
}
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
#include <iostream>
#include <string>
using namespace std;

struct houseType {
    string style;
    int bedrooms;
    int bathrooms;
    int garage;
    int yearBuilt;
    int sqFootage;
    double price;
    double tax;
    houseType(string st, int bed, int bath, int gar, int year, int sqft, double p, double t) {
        style = st;
        bedrooms = bed;
        bathrooms = bath;
        garage = gar;
        yearBuilt = year;
        sqFootage = sqft;
        price = p;
        tax = t;
    }
};

int main() {
	houseType h1("Two-story", 5, 3, 2, 2000, 3200, 500000, 10000);
	houseType h2("Two-story", 4, 2, 1, 1995, 2500, 500000, 9000);
   // houseType firstHouse  = {"Two-story", 5, 3, 2, 2000, 3200, 500000, 10000};
  // houseType secondHouse = {"Two-story", 4, 2, 1, 1995, 2500, 500000, 9000};

    if (h1.style == h2.style && h1.price == h2.price) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
struct fruit{
	string name;
	string color;
	int fat;
	int sugar;
	void get();
	void dis();
};
void fruit::get(){
	cout<<"Enter the fruit name: ";cin>>name;
	cout<<"Enter the fruit color: ";cin>>color;	
	cout<<"Enter the amount of sugar in fruit(grams): ";cin>>sugar;
	cout<<"Enter the amount of fat in fruit(grams): ";cin>>fat;
}
void fruit::dis(){
	cout<<"the fruit name: "<<name;
	cout<<"\nthe fruit color: "<<color;	
	cout<<"\nthe amount of sugar in fruit: "<<sugar<<" grams";
	cout<<"\nthe amount of fat in fruit: "<<fat<<" grams";
}
int main(){
	fruit f;
//	f.name="banana";
//	f.color="yellow";
//	f.fat=1200;
//	f.sugar=120;
//  cout<<f.name<<endl;
//  cout<<f.color<<endl;
//  cout<<f.fat<<endl;
//  cout<<f.sugar<<endl;
    f.get();
    f.dis();
	return 0;
}*/
//imp concept
/*#include<iostream>
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
}
int main(){
	student s1;
	s1.get();
	s1.dis();
	return 0;
}
#include<iostream>
using namespace std;
struct adress{
	string city;
	string society;
	int houseNo;
};
struct student{
	string name;
	int roll;
	adress adr;
	student(string,int,string,string,int);
};
student::student(string n,int r,string c,string s,int h)
{
	name=n;
	roll=r;
	adr.city=c;
	adr.society=s;
	adr.houseNo=h;
}
int main(){
	student s1("Ali",101,"kotani","shafiq abad",205);
	cout<<"Name: "<<s1.name<<endl;
	cout<<"roll: "<<s1.roll<<endl;
	cout<<"city: "<<s1.adr.city<<endl;
	cout<<"society: "<<s1.adr.society<<endl;
	cout<<"house no: "<<s1.adr.houseNo<<endl;
	return 0;
}
#include<iostream>
using namespace std;
struct student{
	string name;
	int roll;
};
struct adress{
	string city;
	string society;
	int hno;
	student stu;
	void get();
	void dis();
};
void adress::get(){
	cout<<"Name: ";cin>>stu.name;
	cout<<"roll: ";cin>>stu.roll;
	cout<<"city: ";cin>>city;
	cout<<"society: ";cin>>society;
	cout<<"house number: ";cin>>hno;
}
void adress::dis(){
	cout<<"Name: "<<stu.name<<endl;
	cout<<"roll: "<<stu.roll<<endl;
	cout<<"city: "<<city<<endl;
	cout<<"society: "<<society<<endl;
	cout<<"house number: "<<hno<<endl;
}
int main(){
	adress a;
	a.get();
	a.dis();
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
struct newEmp{
	string name;
	int performanceRating;
	string dep;
	double sal;
};
int main(){
	newEmp e1;
	e1.name="Ali";
	e1.performanceRating=2;
	e1.dep="CS";
	e1.sal=500;
	newEmp emp[50];
	for(int i=0;i<50;i++){
		emp[i].performanceRating=0;
	}
	newEmp e2=emp[20];
	emp[49].sal+=5735.87+e1.sal;
	cout<<e2.performanceRating<<endl;
	cout<<emp[49].sal;
	return 0;
}*/
//imp concept of arrays
/*#include<iostream>
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
//imp concept of Arrays pass by reference
/*#include<iostream>
using namespace std;
struct sportsType{
	string teamName;
    int numberOfPlayers;
    double teamPayroll;
    double coachsalary;
	void get(sportsType soccer[],int length);
	void dis(sportsType soccer[],int length);
};
void sportsType::get(sportsType soccer[],int length){
	for(int i=0;i<length;i++)
	{
		cout<<"Enter the team name: ";
		cin.ignore();
		getline(cin,soccer[i].teamName);
		cout<<"Enter the number of players: ";cin>>soccer[i].numberOfPlayers;
		cout<<"Enter the coach sal: ";cin>>soccer[i].coachsalary;
		cout<<"Enter the team payroll: ";cin>>soccer[i].teamPayroll;
	}
}
void sportsType::dis(sportsType soccer[],int length){
    for(int i=0;i<length;i++)
	{
		if(soccer[i].teamPayroll>=1000000)
		{
			cout<<soccer[i].teamName<<"\n";
		}
	}	
}
int main(){
	sportsType soccer[20];
	sportsType t1;
    for(int i=0;i<20;i++)
	{
		soccer[i].teamName="";
		soccer[i].numberOfPlayers=0;
		soccer[i].coachsalary=0.0;
		soccer[i].teamPayroll=0.0;
	}
	int length;
	cout<<"Enter then length of team: ";
	cin>>length;
	t1.get(soccer,length);
	t1.dis(soccer,length);
	return 0;
}*/
//imp
/*#include<iostream>
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
	destinition.city="lahore";
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

#include<iostream>
using namespace std;
// Define a structure to hold time information
struct timeType {
    int hr;
    double min;
};

// Define a structure to hold tour information
struct tourType {
    string cityName;
    int distance;
    timeType travelTime;
    void displayTour(tourType t) {
    cout << "\nCity Name: " << t.cityName << endl;
    cout << "Distance: " << t.distance << " miles" << endl;
    cout << "Travel Time: " << t.travelTime.hr << " hours and "<< t.travelTime.min << " minutes" << endl;
}

};
// Function to display tour info
int main(){
	// a) Declare destination variable
    tourType destination;
    // b) Store data in destination
    destination.cityName = "Chicago";
    destination.distance = 550;
    destination.travelTime.hr = 9;
    destination.travelTime.min = 30;

    // Output stored data
    cout << "Stored Destination Info:";
    destination.displayTour(destination);

}*/
//imp
/*#include<iostream>
using namespace std;
struct studentType{
	string fname;
	string lname;
	int testscore;
	char grade;
};
void readData(studentType s[],int length)
{
	for(int i=0;i<length;i++)
	{
		cout<<"student "<<i+1<<" information"<<endl;
		cout<<"student first name: "<<s[i].fname<<endl;
		cout<<"student last name: "<<s[i].lname<<endl;
		cout<<"student test score: "<<s[i].testscore<<endl;
		cout<<"grade: "<<s[i].grade<<endl;
	}	
}
void grade(studentType s[],int length)
{
	for(int i=0;i<length;i++)
	{
		s[i].testscore;
		if(s[i].testscore>=90 && s[i].testscore<=99)
		{
			s[i].grade='A';
		}else if(s[i].testscore>=80 && s[i].testscore<=89)
		{
			s[i].grade='B';
		}else if(s[i].testscore>=70 && s[i].testscore<=79)
		{
			s[i].grade='C';
		}else if(s[i].testscore>=60 && s[i].testscore<=69)
		{
			s[i].grade='D';
		}else if(s[i].testscore>=50 && s[i].testscore<=60)
		{
			s[i].grade='E';
		}else if(s[i].testscore>=0 && s[i].testscore<=49)
		{
			s[i].grade='F';
		}else{
			cout<<"error";
		}
	}
}
void highest(studentType s[],int length){
	int maximum=INT_MIN;
	int minimum=INT_MAX;
	string maxName,minName;
	for(int i=0;i<length;i++)
	{
		s[i].testscore;
		if(s[i].testscore < minimum)
		{
			minimum=s[i].testscore;
			minName=s[i].fname+" "+s[i].lname;
		}
		if(s[i].testscore > maximum)
		{
			maximum=s[i].testscore;
			maxName=s[i].fname+" "+s[i].lname;
		}
	}
	cout<<"\nstudent: "<<maxName<<" with maxcimum: "<<maximum<<" marks"<<endl;
}
int main(){
	studentType student[20];
	int length;
	cout<<"Enter the length: ";
	cin>>length;
	for(int i=0;i<length;i++)
	{
		cout<<"student "<<i+1<<" info"<<endl;
		cout<<"student first name: ";cin>>student[i].fname;
		cout<<"student last name: ";cin>>student[i].lname;
		cout<<"student test score: ";cin>>student[i].testscore;
	}
	grade(student,length);

	readData(student,length);
	highest( student, length);
	
	return 0;
}*/
#include<iostream>
using namespace std;
struct menuItemType{
	string menuItem;
	double menuPrice;

};
void getData(menuItemType menulist[]){
	menulist[0]={"egg",1.34};
	menulist[1]={"purtha",13.4};
	menulist[2]={"ghee",1.4};
	menulist[3]={"tea",1.1};
	menulist[4]={"bread",0.8};
}
void showMenu(menuItemType menulist[],int size)
{
	cout<<"welcome to sindhi resturent\n";
	for(int i=0;i<size;i++)
	{
		cout<<menulist[i].menuItem<<"    "<<menulist[i].menuPrice<<endl;
	}

}
int main(){
	menuItemType menulist[5];
	getData(menulist);
	showMenu(menulist,5);
	int length;
	bool c=false;
	cout<<"number of items you wanted to buy: ";
	cin>>length;
	for(int i=0;i<length;i++)
	{
		cout<<"\nEnter what you buy: ";
		cin>>menulist[i].menuItem;
		if(menulist[i].menuItem=="egg")
		{
			cout<<"\nitem ordered";
			c=true;
		}else if(menulist[i].menuItem=="purtha")
		{
			cout<<"\nitem ordered";
			c=true;
		}else if(menulist[i].menuItem=="ghee")
		{
			cout<<"\nitem ordered";
			c=true;
		}else if(menulist[i].menuItem=="tea")
		{
			cout<<"\nitem ordered";
			c=true;
		}else if(menulist[i].menuItem=="bread")
		{
			cout<<"\nitem ordered";
			c=true;
		}else{
			cout<<"\nitem is not avalible";
		}
	}
	cout<<endl;
	double sum,grandtotal,texAmount;
	if(c==true)
	{
		for(int i=0;i<length;i++)
		{
			cout<<menulist[i].menuItem<<"  "<<menulist[i].menuPrice<<endl;
			sum+=menulist[i].menuPrice;
			texAmount=(sum*0.5)/100;
		}
		grandtotal=sum+texAmount;
		cout<<"You total bill (with charges): "<<grandtotal;
	}
	return 0;
}