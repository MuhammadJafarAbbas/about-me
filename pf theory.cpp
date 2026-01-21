/*#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int roll;
	float gpa;
	char gender;
	void input();//declaration
	void output();
	student(){
		cout<<"constructor called\n";
	}
	
};
//function defination
    void student::input(){
     cout<<"Enter your name: ";
	 cin>>name;
	 cout<<"Enter your roll no: ";
	 cin>>roll;
	 cout<<"Enter your gpa: ";
	 cin>>gpa;
	 cout<<"Enter your gender: ";
	 cin>>gender;
	}
	void student::output(){
		cout<<"student name is: "<<name;
		cout<<"\nstudent name is: "<<roll;
		cout<<"\nstudent name is: "<<gpa;
		cout<<"\nstudent name is: "<<gender;		
	}
main(){
	student s1;
    s1.input();
	s1.output();
}
//class
#include<iostream>
using namespace std;
class car{
	public:
	string name;
	string model;
	int price;
};
int main(){
	car car1;
	cout<<"Enter car name: ";
	getline(cin,car1.name);
	cout<<"Enter car model: ";
	getline(cin,car1.model);
	cout<<"Enter car price: ";
	cin>>car1.price;
	cout<<"car named: "<<car1.name;
	cout<<"\ncar named: "<<car1.model;
	cout<<"\ncar named: "<<car1.price;
	return 0;
}
//using function inside class
#include<iostream>
using namespace std;
class myCar{
    public:
	string name;
	string model;
	int price;
	double averege;
	void carDetails(){
	cout<<"Enter car name: ";
	getline(cin,name);
	cout<<"Enter car model: ";
	getline(cin,model);
	cout<<"Enter car price: ";
	cin>>price;
	cout<<"Enter car averege (per liter): ";
	cin>>averege;
	cout<<"car: "<<name;
	cout<<"\nmodel: "<<model;
	cout<<"\nprice: "<<price;
	cout<<"\naverege: "<<averege;
	}
};
int main(){
	myCar car1;
	car1.carDetails();
	return 0;
}*/
#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int roll;
	int obt;
	int total=1100;
	double percentage;
	char grade;
	void function();
};
void student::function(){
	cout<<"Enter student name: ";
	
	getline(cin,name);
	cout<<"Enter Roll No: ";
	cin>>roll;
	cout<<"Enter obtained marks: ";
	cin>>obt;
	percentage=(double)obt/total*100;
	cout<<"\n:.....Result Card...:";
	cout<<"\nName................: "<<name;
	cout<<"\nRoll No.............: "<<roll;
	cout<<"\nObtained Marks......: "<<obt;
	cout<<"\ntotal marks.........: "<<total;
	cout<<"\npercentage..........: "<<percentage<<"%";
	if(percentage>=90 && percentage<=100)
	{
		grade='A';
	}else if(percentage>=80 && percentage<=89)
	{
		grade='B';
	}else if(percentage>=70 && percentage<=79)
	{
		grade='C';
	}else if(percentage>=60 && percentage<=70)
	{
		grade='D';
	}else if(percentage>=50 && percentage<=60)
	{
		grade='E';
	}else{
		grade='F';
	}
	cout<<"\nGrade...........: "<<grade;
}
int main(){
    student stu1;
    stu1.function();
	return 0;
}