//multilevel inheritense
/*#include<iostream>
using namespace std;
class Person{
	protected:
	string name;
	int id;
	public:
	Person(string name,int id){
		this->name=name;
		this->id=id;
	}
	void p_display(){
		cout<<"name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
	}
};
class Teacher : public Person{
	protected:
	string exper;
	public:
	Teacher(string name,int id,string exper) : Person(name,id){
		this->exper=exper;
	}
	void t_display(){
		cout<<"experience: "<<exper<<endl;
	}
};
class Principal : public Teacher{
	public:
	string grade;
	Principal(string name,int id,string exper,string grade) : Teacher(name,id,exper){
		this->grade=grade;
	}
	void dis(){
		p_display();
		t_display();
		cout<<"grade: "<<grade<<endl;
	}
};

int main(){
	Principal p1("ali",15,"15 years","9");
	p1.dis();
	return 0;
}
//multiple inheritence
#include<iostream>
using namespace std;
class Teacher{
	protected:
	string name;
	string subject;
	int salary;
	public:
	Teacher(string name,string subject,int salary){
		this->name=name;
		this->subject=subject;
		this->salary=salary;
	}
	void t_dis(){
		cout<<"name: "<<name<<endl;
		cout<<"subj: "<<subject<<endl;
		cout<<"salary: "<<salary<<endl;
	}
};
class Youtuber{
	protected:
	string sub;
	int likes;
	public:
	Youtuber(string sub,int likes);
	void y_dis();
};
Youtuber::Youtuber(string sub,int likes){
	this->sub=sub;
	this->likes=likes;
}
void Youtuber::y_dis(){
	cout<<"subscriber: "<<sub<<endl;
	cout<<"likes: "<<likes<<endl;
}
class Jafar : public Teacher,public Youtuber {
	public:
	Jafar(string name,string subject,int salary,string sub,int likes) : Teacher(name,subject,salary),Youtuber(sub,likes){
		
	}
	void dis(){
		t_dis();
		y_dis();
	}
};

int main(){
	Jafar j("ali","oop",15000,"198k",909800);
	j.dis();
}
//herarichal inheritence
#include<iostream>
using namespace std;
class Humen{
	protected:
	string name;
	int age;
	public:
	void h_dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
	}
};

class Student : public Humen{
	protected:
	int roll;
	float gpa;
	public:
	Student(string name,int age,int roll,float gpa){
		this->name=name;
		this->age=age;
		this->roll=roll;
		this->gpa=gpa;
	}
	void s_dis(){
		h_dis();
		cout<<"roll no: "<<roll<<endl;
		cout<<"gpa: "<<gpa<<endl;
	}
};

class Teacher : public Humen{
	protected:
	double salary;
	public:
	Teacher(string name,int age,double salary){
		this->name=name;
		this->age=age;
		this->salary=salary;
	}
	void t_dis(){
		h_dis();
		cout<<"salary: "<<salary<<endl;
	}
};
int main(){
	Student s("Ali",18,111,3.56);
	s.s_dis();
	Teacher t("Salamt",18,45000);
	t.t_dis();
	return 0;
}
//hybrid inheritence
#include<iostream>
using namespace std;
class Student{
	public:
	Student(){
		cout<<"student constructor"<<endl;
	}
};

class Male{
	public:
	Male(){
		cout<<"male constructor"<<endl;
	}
};

class Female{
	public:
	Female(){
		cout<<"female constructor"<<endl;
	}
};
class Boy : public Student,public Male{
	public:
	Boy(){
		cout<<"boy constructor\n";
	}
};
class Girl : public Student , public Female{
	public:
	Girl(){
		cout<<"girl constructor\n";
	}
};
int main(){
	Boy b;
	Girl g;
	return 0;
}
//multipath inheritence
#include<iostream>
using namespace std;
class Person{
	protected:
	string name;
	int age;
	public:
	Person(string n,int a){
		name=n;
		age=a;
	}
	void p_dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl; 
	}
};

class Youtuber : virtual public Person{
	protected:
	string sub;
	public:
	Youtuber(string n,int a,string s) : Person(n,a){
		sub=s;
	}
	void y_dis(){
		cout<<"subscriber: "<<sub<<endl;
	}
};

class Student :virtual public Person{
	protected:
	float gpa;
	public:
	Student(string n,int a,float gpa) : Person(n,a){
		this->gpa=gpa;
	}
	void s_dis(){
		cout<<"gpa: "<<gpa<<endl;
	}
};

class Coder : public Student ,public Youtuber{
	string lern;
	public:
	Coder(string n,int a,float gpa,string s,string lern) : Person(n,a),Student(n,a,gpa),Youtuber(n,a,s){
		this->lern=lern;
	} 
	void c_dis(){
		p_dis();
		y_dis();
		s_dis();
		cout<<"lerning: "<<lern<<endl;
	}
};
int main(){
	Coder c("Ali Khan",19,3.9,"999k","jawa script");
	c.c_dis();
	return 0;
}
#include<iostream>
using namespace std;
class Person{
	protected:
	string name;
	int age;
	public:
	Person(string n,int a){
		name=n;
		age=a;
	}
	void p_dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
	}	
};

class Employee : virtual public Person{
	protected:
	float salary;
	public:
	Employee(string n,int a,float s) : Person(n,a){
		salary=s;
	}
	void e_dis(){
		cout<<"salary: "<<salary<<endl;
	}
};

class Trainer : virtual public Person{
	protected:
	string dep;
	public:
	Trainer(string n,int a,string dep) : Person(n,a){
		this->dep=dep;
	}
	void t_dis(){
		cout<<"dep: "<<dep<<endl;
	}
};

class Manjor : public Employee,public Trainer{
	protected:
	string duty;
	public:
	Manjor(string n,int a,float s,string dep,string duty) : Person(n,a),Employee(n,a,s),Trainer(n,a,dep){
		this->duty=duty;
	}
	void m_dis(){
		p_dis();
		e_dis();
		t_dis();
		cout<<"duty: "<<duty<<endl;
	}
};
int main(){
	Manjor m1("ali",19,14499,"cs","12:00 to 1:00");
	m1.m_dis();
	return 0;
}
#include<iostream>
using namespace std;
class Student {
	protected:
	string name;
	int roll;
	public:
	void s_input(){
		cout<<"Enter the name: ";
		cin>>name;
		cout<<"Enter roll no: ";
		cin>>roll;
	}
	
	void s_dis(){
		cout<<"name is: "<<name<<endl;
		cout<<"roll no: "<<roll<<endl;
	}
};

class Marks : public Student{
	protected:
	int  marks[5];
	public:
	float total=0.0;
	void m_input(){
		s_input();
		for(int i=0;i<5;i++){
			cout<<i+1<<": ";
			cin>>marks[i];
		}
	}
	
	void m_dis(){
		s_dis();
		for(int i=0;i<5;i++){
			cout<<i+1<<marks[i]<<" ";
			total+=marks[i];		
		}
		cout<<"averege: "<<total/5<<endl;
	}
};
int main(){
	int n=2;
	Marks m[n];
	for(int i=0;i<n;i++){
		m[i].m_input();
	}
	for(int i=0;i<n;i++){
		m[i].m_dis();
	}
	return 0;
}
#include<iostream>
using namespace std;
class Person{
	protected:
	string name;
	int age;
	public:
	Person(string n,int a){
		name=n;
		age=a;
	}
	void p_dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
	}	
};

class Employee : virtual public Person{
	protected:
	float salary;
	public:
	Employee(string n,int a,float s) : Person(n,a){
		salary=s;
	}
	void e_dis(){
		cout<<"salary: "<<salary<<endl;
	}
};

class Trainer : virtual public Person{
	protected:
	string dep;
	public:
	Trainer(string n,int a,string dep) : Person(n,a){
		this->dep=dep;
	}
	void t_dis(){
		cout<<"dep: "<<dep<<endl;
	}
};

class Manjor : public Employee,public Trainer{
	protected:
	string duty;
	public:
	Manjor(string n,int a,float s,string dep,string duty) : Person(n,a),Employee(n,a,s),Trainer(n,a,dep){
		this->duty=duty;
	}
	void m_dis(){
		p_dis();
		e_dis();
		t_dis();
		cout<<"duty: "<<duty<<endl;
	}
};
int main(){
	int n=2;
	Manjor* m[n];
	for(int i=0;i<n;i++){
		m[i]=new Manjor("ali",12,1400.4,"se","12:00 t0 1:00");
	}
	for(int i=0;i<n;i++){
		m[i]->m_dis();
	}
	return 0;
}
//friend function
#include<iostream>
using namespace std;
class Complex{
	int a,b;
	public:
	Complex(){
		
	}
	Complex(int a,int b){
		this->a=a;
		this->b=b;
	}
	void dis(){
		cout<<a<<" + "<<b<<"i"<<endl;
	}
	friend Complex sum(Complex o1,Complex o2);
};
Complex sum(Complex o1,Complex o2){
	Complex o3;
	o3.a=(o1.a+o2.a);
	o3.b=(o1.b+o2.b);
	return o3;
}
int main(){
	Complex c1(12,4);
	Complex c2(5,3);
	c1.dis();
	c2.dis();
	Complex c3=sum(c1,c2);
	c3.dis();
	return 0;
}
#include<iostream>
using namespace std;
class Distance{
	private:
	int inch,feet;
	
	public:
	Distance(){
		feet=0;
		inch=0;
	}
	Distance(int feet,int inch){
		this->feet=feet;
		this->inch=inch;
	}
	void dis(){
		cout<<"inch: "<<inch<<endl<<"feer: "<<feet<<endl;
	}
	friend Distance sum(Distance d1,Distance d2);
};
Distance sum(Distance d1,Distance d2){
	Distance d;
	d.inch=d1.inch+d2.inch;
	d.feet=d1.feet+d2.feet;
	return d;
}
int main(){
	Distance d1(12,5);
	Distance d2(22,1);
	Distance d3=sum(d1,d2);
	d3.dis();
	return 0;
}
#include<iostream>
using namespace std;
class base;//farward declaretion
class calculator{
    public:
	base sum(base ,base );	
};

class base{
	int a,b;
	public:
	void input(int a,int b){
		this->a=a;
		this->b=b;
	}
	void dis(){
		cout<<"a: "<<a<<"  b: "<<b<<endl;
	}
	friend base calculator::sum(base o1,base o2);
};
base calculator::sum(base o1,base o2){
	base  temp;
	temp.a=o1.a+o2.a;
	temp.b=o1.b+o2.b;
	return temp;
}
int main(){
	base b1,b2,b3;
	b1.input(2,3);
	b2.input(2,3);
	calculator c;
	b3=c.sum(b1,b2);
	b3.dis();
	return 0;
}
//Create a class BankAccount with a private balance. Write a 
//friend function to calculate and return the total balance of two accounts.
#include<iostream>
using namespace std;
class bankAccount{
	string name;
    int balance;
    friend int  sum(bankAccount o1,bankAccount o2);
	public:
	void input(string name,int balance){
		this->name=name;
		this->balance=balance;
	}
	void dis(){
		cout<<"name: "<<name<<" \n balance: "<<balance<<endl;
	}
};
int  sum(bankAccount o1,bankAccount o2){
	return o1.balance + o2.balance;
}
int main(){
	bankAccount b1,b2,b3;
	b1.input("ali",1200);
	b2.input("ali",1200);
	cout<<"total balance: "<<sum(b1,b2);
	
	return 0;
}
#include<iostream>
using namespace std;
class bankAccount;//farwad declaretion
class calculator{
    public:
	int sum(bankAccount ,bankAccount);	
};
class bankAccount{
	string name;
    int balance;
    
	
	friend int calculator::sum(bankAccount o1,bankAccount o2);
	public:
	//friend class calculator;
	void input(string name,int balance){
		this->name=name;
		this->balance=balance;
	}
	void dis(){
		cout<<"name: "<<name<<" \n balance: "<<balance<<endl;
	}

};
int calculator::sum(bankAccount o1,bankAccount o2){
	return o1.balance+o2.balance;
}
int main(){
	bankAccount b1,b2,b3;
	b1.input("ali",1200);
	b2.input("ali",1200);
	calculator c;
	cout<<"balance: "<<c.sum(b1,b2);
	
	
	return 0;
}
#include<iostream>
using namespace std;
class base{
	public:
	void virtual show(){
		cout<<"base function"<<endl;
	}
};
class child : public base{
//  public:
    string name="ali khan";
	void show(){
		cout<<"child function "<<name<<endl;
	}
};
int main(){
	base* b;
	child c;
	b=&c;
	b->show();
	
	return 0;
}
//Create a base class Shape with a virtual function area(), and derive classes 
//Rectangle, Circle, and Triangle. Override area() in each class and call them using a base class pointer.
#include<iostream>
#include<cmath>
using namespace std;
class shape{
	public:
	void virtual area(){
		cout<<"shape area"<<endl;
	}
};

class rectangle : public shape{
	int length;
	int width;
	public:
	rectangle(int l,int w){
		length=l;
		width=w;
	}
	void area()override{
		cout<<"rectangle area: "<<length*width<<endl;
	}
};

class circle : public shape{
	double pi=3.14;
	double r;
	public:
	circle(double r){
		this->r=r;
	}
	void area()override{
		cout<<"circle area: "<<pi*r*r<<endl;
	}
};
int main(){
//  two ways to call
//	shape* s=new rectangle(12,5);
//	s->area();
    shape* s;
    rectangle rec(12,5);
    s=&rec;
    s->area();
    
    shape* s1=new circle(3);
    s1->area();
	return 0;
}
#include<iostream>
using namespace std;
class base{
	public:
//	void  show(){
//		cout<<"base fun"<<endl;
//	}
	~base(){
		cout<<"base destructor"<<endl;
	}
};
class child : public base{
//  public:
    string name="ali khan";
//	void show(){
//		cout<<"child function "<<name<<endl;
//	}
	public:
	~child(){
		cout<<"child called"<<endl;
	}
};
int main(){
	base* b=new child();
//	child c;
//	b=&c;
//	b->show();
	delete b;
	return 0;
}
//operator overloading
#include<iostream>
using namespace std;
class demo{
	int n;
	public:
	demo(int n){
		this->n=n;
	}
	bool operator >(demo obj2){
		if(n>obj2.n){
			return true;
		}else{
			return false;
		}
	}
};
int main(){
    demo d1(4);
    demo d2(34);
    if(d1>d2){
    	cout<<"obj1 is greater\n";
	}else{
		cout<<"obj2 id greater"<<endl;
	}
	return 0;
}
#include<iostream>
using namespace std;
class demo{
	int a;
	public:
	demo(int a){
		this->a=a;
	}
	void dis(){
		cout<<"a: "<<a<<endl;
	}
	int  operator +(demo obj2){
		int temp;
		temp=a+obj2.a;
		return temp;
	}
};
int main(){
	demo d1(5);
	demo d2(5);
	demo d3=d1+d2;
	d3.dis();
	return 0;
}
#include<iostream>
using namespace std;
class demo{
	int a;
	public:
	demo(int a){
		this->a=a;
	}
	void dis(){
		cout<<"a: "<<a<<endl;
	}
	void operator =(demo obj){
		a=obj.a;
	}
};
int main(){
	demo d1(12);
	demo d2(13);
	d1.dis();
	d1=d2;
	d2.dis();
	d1.dis();
	return 0;
}
#include<iostream>
using namespace std;
class demo{
	string name;
	int age;
	public:
	friend istream& operator >>(istream& input,demo& d){
		cout<<"Enter the name: ";
		input>>d.name;
		cout<<"Enter the age: ";
		input>>d.age;
		return input;
	}
	
	friend ostream& operator <<(ostream& output,demo& d){
		output<<"name: "<<d.name<<"  age: "<<d.age<<endl;
		return output;
	}
};
int main(){
	int n=2;
	demo d[n];
	
	for(int i=0;i<n;i++){
	   cin>>d[i];	
	}
	
	for(int i=0;i<n;i++){
	   cout<<d[i];	
	}
	return 0;
}
#include<iostream>
using namespace std;
class student{
	string name;
	public:
	student(string name){
		this->name=name;
	}
	string n(){
		return name;
	}
	void s_dis(){
		cout<<"name: "<<name<<endl;
	}
};
class teacher{
	string name;
	public:
	teacher(string n){
		name=n;
	}
	void dis(student& s){
		cout<<name<<"teaching the "<<s.n()<<endl;
	}
};
int main(){
	teacher t("ali");
	student s("asad");
	t.dis(s);
	return 0;
}
//In a hospital:
//Person is the base class.
//Doctor and Patient are derived from Person.
//A Doctor can treat multiple Patients.
//A Doctor is assisted by a Nurse, who can change over time.
//A Patient has a MedicalRecord that is created and destroyed with the patient.
#include<iostream>
using namespace std;
class Person{
	protected:
	string name;
	int age;
	public:
	Person(string n,int a){
		name=n;
		age=a;
	}
	string getname(){
		return name;
	}
	int  getage(){
		return age;
	}
};
class Nurse{
	public:
	string name;
	int age;
	Nurse(string name,int age){
		this->name=name;
		this->age=age;
	}
};
class Doctor : public Person{
	string spiecal;
	
	public:
	Nurse* nurse;
	Doctor(string n,int a,string sp,Nurse &nurse): Person(n,a){
		spiecal=sp;
		this->nurse=&nurse;
	}
	string getspiecal(){
		return spiecal;
	}
	
};
class MedicalR{
	public:
	string past;
	MedicalR(string past){
		this->past=past;
	}
};
class Patient : public Person{
	string illness;
	Doctor* doctor;
	
	public:
	Patient(string n,int a,string i,Doctor& doctor):Person(n,a){
		illness=i;
		this->doctor=&doctor;
	}
	void display(MedicalR& m){
		cout<<"doctor name: "<<doctor->getname()<<endl;
		cout<<"doctor age: "<<doctor->getage()<<endl;
		cout<<"doctor spiecalization: "<<doctor->getspiecal()<<endl;
		cout<<"Ptient name: "<<name<<endl;
		cout<<"Patient age: "<<age<<endl;
		cout<<"Patient illness: "<<illness<<endl;
		cout<<"Patient Medical Record: "<<m.past<<endl;
		cout<<"nurse name: "<<doctor->nurse->name<<endl;
		cout<<"nurse age: "<<doctor->nurse->age<<endl;
	}
};
int main(){
	Nurse n1("Sadia",29);
	Doctor d1("Ali",22,"child spiecalist",n1);
	MedicalR m1("No past medical record ");
	Patient p1("salah",28,"fever",d1);
	p1.display(m1);
	return 0;
}
#include<iostream>
using namespace std;
class professor{
	string name;
	public:
	professor(string n){
		name=n;
	}
	void p_dis(){
		cout<<"name: "<<name<<endl;
	}
};

class department{
	string name;
	professor* prof;
	public:
	department(string name,professor* p){
		this->name=name;
		prof=p;
	}
	void dis(){
		cout<<"dep: "<<name<<endl;
		cout<<"prof: ";
		prof->p_dis();
	}
};
int main(){
	professor p("ali");
	department d("cs",&p);
	d.dis();
	return 0;
}
#include<iostream>
using namespace std;
class Engine{
	public:
	void start(){
		cout<<"engine start"<<endl;
	}
	void stop(){
		cout<<"engine stopped"<<endl;
	}
};

class Car{
	public:
	Engine engine;
	void start(){
		engine.start();
		cout<<"car started"<<endl;
	}
	void stop(){
		engine.stop();
		cout<<"car stopped"<<endl;
	}
};
int main(){
	Car c;
	c.start();
	c.stop();
	return 0;
}
//A Doctor can work in multiple Hospitals, and a Hospital can have multiple Doctors.
//? Create a program to manage doctor-hospital association.
#include<iostream>
using namespace std;
class Doctor{
	
	public:
	string name;
	Doctor(string name){
		this->name=name;
	}
	void d_dis(){
		cout<<"name: "<<name<<endl;
	}
};
class Hospital{
	string name;
	Doctor* doctor;
	public:
	Hospital(string name,Doctor* doctor){
		this->name=name;
		this->doctor=doctor;
	}
	void dis(){
		cout<<"doctor ";
		doctor->d_dis();
		cout<<"hospital: "<<name<<endl;
	}
};
int main(){
	int n=2;
	string name,hn;
	Doctor* d1[n];
	Hospital* h1[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the doctor name: ";
		cin>>name;
		cout<<"Enter the hospital name: ";
		cin>>hn;
		d1[i]=new Doctor(name);
		h1[i]=new Hospital(hn,d1[i]);
	}
	for(int i=0;i<n;i++){
		h1[i]->dis();
	}
	return 0;
}*/
#include<iostream>
using namespace std;
class University{
	public:
	string sup;
	University(string sup){
		this->sup=sup;
	}
	void u_dis(){
		cout<<"unversity: "<<sup<<endl;
	}
};

class department{
	string cs;
	string se;
	public:
	University uni;
	department(string cs,string se,string sup) : uni(sup){
		this->cs=cs;
		this->se=se;
	}
	void dis(){
		uni.u_dis();
		cout<<"dep: "<<se<<endl;
		cout<<"dep: "<<cs<<endl;
	}
};
int main(){
	University u("superior");
	department d("se","cs","superior");
	d.dis();
	return 0;
}