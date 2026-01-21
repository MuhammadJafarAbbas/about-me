//Association
/*#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	Student(string name){
		this->name=name;
	}
	void dis_student(){
		cout<<"name: "<<name<<endl;
	}
};
class Teacher{
	public:
	string name;
	Teacher(string name){
		this->name=name;
	}
	void teach(Student &s){
		cout<<name<<" is teaching "<<s.name<<endl;
	}
};
int main(){
	Student s1("saleem");
	Teacher t1("raza");
	t1.teach(s1);
	return 0;
}
//Aggregation
#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	Student(string name){
		this->name=name;
	}

	void student_display(){
		cout<<"name: "<<name<<endl;
	}
};
class Teacher{
	public:
	string name;
	Student* student;
	Teacher(string name,Student* student){
		this->name=name;
		this->student=student;
	}
	void dis(){
		cout<<name<<" is teaching "<<student->name<<endl;
	}
};
int main(){
	Student s1("ali");
	Teacher t1("adnan",&s1);
	t1.dis();
	return 0;
}
//composition
#include<iostream>
using namespace std;
class Engine{
	public:
	void started(){
		cout<<"Engine is started"<<endl;
	}
	
	void stopped(){
		cout<<"Engine is stopped"<<endl;
	}
};
class Car{
	Engine engine;
	
	public:
	void start(){
		engine.started();
		cout<<"car is start\n";
	}
	void stop(){
		engine.stopped();
		cout<<"car is stop\n";
	}
};
int main(){
	Car c;
	c.start();
	c.stop();
	return 0;
}
//friend function
#include<iostream>
using namespace std;
class Complex{
	int a,b;
	public:
	void set(int a,int b){
		this->a=a;
		this->b=b;
	}
	friend Complex sum(Complex o1,Complex o2);
	void display(){
		cout<<a<<" + "<<b<<"i"<<endl;
	}
};
Complex sum(Complex o1,Complex o2)
{
	Complex o3;
	o3.set((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
int main(){
	Complex c1,c2,c3;
	c1.set(4,6);
	c2.set(5,7);
	c1.display();
	c2.display();
	c3=sum(c1,c2);
	c3.display();
	return 0;
}
#include<iostream>
using namespace std;
class Professor{
	string name;
	public:
		
	void set(string name){
		this->name=name;
	}
	string get(){
		return name;
	}
	
	void p_display(){
		cout<<"name: "<<name<<endl;
	}
};
class Department{
	string d_name;
	public:
	Professor* pro;
	void set_name(string d_name,Professor* pro){
		this->d_name=d_name;
		this->pro=pro;
	}
//	string get_name(){
//		return name;
//	}
	void dispaly(){
		cout<<"name: "<<pro->get()<<endl;
		cout<<"dep name: "<<d_name<<endl;
	}
};
int main(){
	Professor p;
	p.set("ali");
	Department d;
	d.set_name("Salah",&p)
	;
	d.dispaly();
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
//shallow copy
#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	double *gpaPtr;
	Student(string n,double g){
		name=n;
		gpaPtr=new double;
		*gpaPtr=g;
	}
	Student(Student& obj){
		name=obj.name;
		gpaPtr=obj.gpaPtr;
	}
	void display(){
		cout<<"name: "<<name<<endl;
		cout<<"gpa: "<<*gpaPtr<<endl;
	}
};
int main(){
	Student s1("ali ",3.9);
	s1.display();
	Student s2(s1);
	*(s2.gpaPtr)=3.2;
	s2.display();
	s1.display();
	return 0;
}
//deep copy
#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	double *gpaPtr;
	Student(string n,double gpa){
		name=n;
		gpaPtr=new double;
		*gpaPtr=gpa;
	}
	Student(Student& obj){
		name=obj.name;
		gpaPtr=new double;
		*gpaPtr=*(obj.gpaPtr);
	}
	void display(){
		cout<<"name: "<<name<<endl;
		cout<<"gpa: "<<*gpaPtr<<endl;
	}
};
int main(){
	Student s1("ali",3.4);
	s1.display();
	Student s2(s1);
	*(s2.gpaPtr)=3.99;
	s2.display();
	s1.display();
	return 0;
}*/
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
		output<<"name: "<<d.name<<"\n"<<"age: "<<d.age<<endl;
		return output;
	}
};
int main(){
	demo d1;
	cin>>d1;
	cout<<d1;
	return 0;
}