//#include<iostream>
//using namespace std;
/*class student{
	int a=10;
	int b=20;
	public:
	void call(int a,int b){
		this->a=a;
		this->b=b;
	}
	void dis(){
		cout<<"a: "<<a<<endl;
		cout<<"b: "<<b<<endl;
	}
};
int main(){
	student cs;
	cs.dis();
	cs.call(45,99);
	cs.dis();
	return 0;
}
#include<iostream>
using namespace std;
class car{
	string name;
	string version;
	int price;
	public:
	car(){
		cout<<"constructor called\n";
	}
};
int main(){
	car c;
	return 0;
}*/
/*#include<iostream>
using namespace std;
class teacher{
	private:
	string name;
	string dep;
	string sub;
	double salary;
	public:
	void set(string n,string d,string s,double sal){
		name=n;
		dep=d;
		sub=s;
		salary=sal;
	}
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"dep: "<<dep<<endl;
		cout<<"sub: "<<sub<<endl;
		cout<<"salary: "<<salary<<endl;
	}
	
};
int main(){
	//object1
	cout<<"teacher 1\n";
	teacher t1;
	t1.set("Ali","cs","c++",25000);
	t1.dis();
	//object2
	cout<<"teacher 2\n";
	teacher t2;
	t2.set("moshin","softwere engineering","oop",95000);
	t2.dis();
	return 0;
}

//constructors
#include<iostream>
using namespace std;
class teacher{
	private:
	string name;
	string dep;
	string sub;
	double salary;
	public:
//	teacher(){
//		cout<<"Hello,I am a default constructor"<<endl;
//		dep="cs";
//		name="jaffar";
//		sub="oop";
//		salary=1200;
//	}
	teacher(string n,string d,string s,double sal){
		name=n;
		dep=d;
		sub=s;
		salary=sal;
	}
	teacher(teacher &orgObj){//pass by reference m object ki original value pass hoti hy
		cout<<"i am a custom copy constructor\n";
		this->name=orgObj.name;
		this->dep=orgObj.dep;
		this->sub=orgObj.sub;
		this->salary=orgObj.salary;
	}
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"dep: "<<dep<<endl;
		cout<<"sub: "<<sub<<endl;
		cout<<"salary: "<<salary<<endl;
	}
	
};
int main(){
	//object1
	cout<<"teacher 1\n";
	teacher t1("Moshin Sana","cs","oop",98000);
	t1.dis();
	//object2
	cout<<"teacher 2\n";
	teacher t2("Ali Khan","SE","data structure",68000);
	t2.dis();
	//object2
//	teacher t;
//	t.dis();
	//costum copy constructor
	teacher t3(t2);
	t3.dis();
	return 0;
}
//shallow copy
#include<iostream>
using namespace std;
class student{
	public:
    string name;
    double* cgpaPtr;
    student(string n,double c){
    	name=n;
    	cgpaPtr=new double;
    	*cgpaPtr=c;
	}
//	student(student &obj){
//		name=obj.name;
//		cgpaPtr=obj.cgpaPtr;
//	}
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"cgpa: "<<*cgpaPtr<<endl;
	}
};
int main(){
	student s("sulman",3.5);
	s.dis();
	cout<<endl;
	student s1(s);
	*(s.cgpaPtr)=3.2;
	s.dis();
	s1.dis();
	return 0;
}
#include<iostream>
using namespace std;
class student{
	public:
    string name;
    double* cgpaPtr;
    student(string n,double c){
    	name=n;
    	cgpaPtr=new double;
    	*cgpaPtr=c;
	}
	student(student &obj){
		name=obj.name;
		cgpaPtr=new double;
		*cgpaPtr=*obj.cgpaPtr;
	}
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"cgpa: "<<*cgpaPtr<<endl;
	}
};
int main(){
	student s1("sulman",3.5);
	student s2(s1);
	s1.dis();
	cout<<endl;
	*(s2.cgpaPtr)=3.2;
	s1.dis();
	s2.name="saleem";
	s2.dis();
	return 0;
}
#include<iostream>
using namespace std;
class teacher{
	string name;
	string dep;
	string sub;
	double sal;
	public:
	void set(string n,string d,string s,double sal);
	void input();
	void dis();
};
void teacher::set(string n,string d,string s,double sal){
	name=n;
	dep=d;
	sub=s;
	sal=sal;
}
void teacher::input(){
	cout<<"Enter the name of teacher: ";
	getline(cin,name);
	cout<<"Enter the dep of teacher: ";
	getline(cin,dep);
	cout<<"Enter the subject: ";
	cin>>sub;
	cout<<"Enter the salary of teacher: ";
	cin>>sal;
}
void teacher::dis(){
	cout<<"name: "<<name<<endl;
	cout<<"dep: "<<dep<<endl;
	cout<<"sub: "<<sub<<endl;
	cout<<"sal: "<<sal<<endl;
}
int main(){
	teacher t;
	cout<<"object 1"<<endl;
	t.input();
	t.dis();
	return 0;
}
#include<iostream>
using namespace std;
class teacher{
	private:
	string name;
	string dep;
	string sub;
	double salary;
	public:
//	teacher(){
//		cout<<"Hello,I am a default constructor"<<endl;
//		dep="cs";
//		name="jaffar";
//		sub="oop";
//		salary=1200;
//	}
	teacher(string n,string d,string s,double sal){
		name=n;
		dep=d;
		sub=s;
		salary=sal;
	}
	teacher(teacher &orgObj){//pass by reference m object ki original value pass hoti hy
		cout<<"i am a custom copy constructor\n";
		this->name=orgObj.name;
		this->dep=orgObj.dep;
		this->sub=orgObj.sub;
		this->salary=orgObj.salary;
	}
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"dep: "<<dep<<endl;
		cout<<"sub: "<<sub<<endl;
		cout<<"salary: "<<salary<<endl;
	}
	
};
int main(){
	//object1
	cout<<"teacher 1\n";
	teacher t1("Moshin Sana","cs","oop",98000);
	t1.dis();
	//object2
	cout<<"teacher 2\n";
	teacher t2("Ali Khan","SE","data structure",68000);
	t2.dis();
	//costum copy constructor
	teacher t3(t2);
	t3.dis();
	return 0;
}
#include<iostream>
#include<string>
using namespace std;
class student{
	string name;
	string deg;
	double gpa;
	public:
	student();
	student(string name,string deg,double gpa);
	void dis();
};
student::student(){
	cout<<"default constructor\n";
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your degree: ";
	cin>>deg;
	cout<<"Enter your gpa: ";
	cin>>gpa;
}
void student::dis(){
	cout<<"student name: "<<name<<endl;
	cout<<"degree: "<<deg<<endl;
	cout<<"gpa: "<<gpa<<endl;
}
int main(){
	student s;
	s.dis();
	return 0;
}
#include<iostream>
using namespace std;
class teacher{
	private:
	string name;
	string dep;
	string sub;
	double salary;
	public:
	teacher(){
		cout<<"hello,i am default constructor"<<endl;
		name="ali";
		dep="cs";
		sub="c++";
		salary=450000;
	}
	
	teacher(string n,string d,string s,double sal){
		name=n;
		dep=d;
		sub=s;
		salary=sal;
	}
	
	teacher(teacher& orgObj){
		cout<<"i am a custom copy constructor\n";
		name=orgObj.name;
		dep=orgObj.dep;
		sub=orgObj.sub;
		salary=orgObj.salary;
	}
	
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"dep: "<<dep<<endl;
		cout<<"sub: "<<sub<<endl;
		cout<<"salary: "<<salary<<endl;
	}

};
int main(){
	//Object 1
	teacher t;
	t.dis();
	
//	teacher t1("Jaffar","cs","c++",34.42);
//	t1.dis();
	
	teacher t2(t);
	t2.dis();
	
	return 0;
}

#include<iostream>
using namespace std;
class student{
	string name;
	string sub;
	double gpa;
	public:
	student(){
		cout<<"i am a default constructor\n";
		name="ali";
		sub="computer science";
		gpa=3.5;
	}
	
	student(student &org){
		name=org.name;
		sub=org.sub;
		gpa=org.gpa;
	}
	
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"sub: "<<sub<<endl;
		cout<<"gpa: "<<gpa<<endl;
	}
};
int main(){
	student s;
	s.dis();
	
	student s1(s);
	s1.dis();
	return 0;
}
#include<iostream>
using namespace std;
class student{
	public:
	string name;
	double *gpaPtr;
	
	student(string n,double g){
		name=n;
		gpaPtr=new double;
		*gpaPtr=g;
	}
	
	student(student& org){
		name=org.name;
		gpaPtr=org.gpaPtr;
	}
	
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"gpa: "<<*gpaPtr<<endl;
	}
}; 
int main(){
	student s("ali",3.6);
	s.dis();
	student s1(s);
	*(s1.gpaPtr)=2.8;
	s.dis();
	s1.dis();

	return 0;
}

#include<iostream>
using namespace std;
class student{
	public:
	string name;
	double *gpaPtr;
	
	student(string n,double g){
		name=n;
		gpaPtr=new double;
		*gpaPtr=g;
	}
	
	student(student& org){
		name=org.name;
		gpaPtr=new double;
		*gpaPtr=*org.gpaPtr;
	
	}	
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"gpa: "<<*gpaPtr<<endl;
	}
}; 
int main(){
	student s("ali",3.6);
	s.dis();
	student s1(s);
	*(s1.gpaPtr)=2.8;
	s1.name="jafar";
	s.dis();
	s1.dis();
	
	return 0;
}

//deep copy
#include<iostream>
using namespace std;
class student{
	public:
	string name;
	double *gpaPtr;
	
	student(string name,double gpa){
		this->name=name;
		gpaPtr=new double;
		*gpaPtr=gpa;
	}
	
	student(student& org){
		name=org.name;
		gpaPtr=new double;
		*gpaPtr=*
		org.gpaPtr;
	}
	
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"gpa: "<<*gpaPtr<<endl;
	}
};
int main(){
	student s("ali",3.9);
	s.dis();
	return 0;
}

#include<iostream>
using namespace std;
class person{
	public:
	string name;
	int age;
	person(){
		cout<<"parent constuctor..\n";
		cout<<"Enter the name: ";
		cin>>name;
		cout<<"Enter the age: ";
		cin>>age;
	}
	
	~person(){
		cout<<"parent distructor..\n";
	}
};
class student : public person {
	public:
	int roll;
	student(){
		cout<<"child constuctor..\n";
		cout<<"Enter roll no: ";
		cin>>roll;
	}
	void dis(){
	    cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"roll: "<<roll<<endl;
	}
	
	~student(){
		cout<<"child distructor..\n";
	}
};
int main(){
	student s;
	s.dis();
	return 0;
}

#include<iostream>
using namespace std;
class person{
	public:
	string name;
	int age;
	person(string n,int a){
		cout<<"parent constructor..\n";
		name=n;
		age=a;
	}
	
	~person(){
		cout<<"parent dustructor..\n";
	}
};
class student : public person {
	public:
	int roll;
	student(string n,int a,int r) : person(n,a){
		cout<<"child constructor..\n";
		roll=r;
	}
	void dis(){
	    cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"roll: "<<roll<<endl;
	}
	
	~student(){
		cout<<"child dustructor..\n";
	}
};
int main(){
	student s("ali",23,444);
	s.dis();
	return 0;
}
//multilevel inheritence
#include<iostream>
using namespace std;
class person{
	public:
	string name;
	int roll;
};

class student : public person{
	public:
	int marks;
};

class bs : public student{
	public:
	string researchArea;
};
int main(){
	bs b;
	b.name="ali";
	b.researchArea="Quantum Physics";
	b.marks=1234;
	cout<<b.name<<endl;
	cout<<b.researchArea<<endl;
	cout<<b.marks;
	return 0;
}


//multiple inheritence
#include<iostream>
using namespace std;
class person{
	public:
	string name;
	int roll;
	person(){
		cout<<"parent\n";
	}	
};

class student{
	public:
	int marks;
	student(){
		cout<<"f1\n";
	}
};

class bs :public student, public person {
	public:
	string researchArea;
};
int main(){
	bs b;
	return 0;
}

//Herarical Inheritence
#include<iostream>
using namespace std;
class person{
	public:
	string name;
	int age;
};

class student : public person{
    public:
	int roll;
};

class teacher : public person{
	public:
	double sal;
}; 
int main(){
	student s;
	teacher t;
	return 0;
}

#include<iostream>
using namespace std;
class Area{
	protected:
	int width;
	int length;
	public:
	void input(){
		cout<<"Enter the width: ";
		cin>>width;
		cout<<"Enter the lenght: ";
		cin>>length;
	}
};

class Rectangle : public Area{
	public:
	int a;
	void calR(){
		a=width*length;
	    cout<<"area of rectangle is: "<<a<<endl;
	}
};

class Parameter : public Area{
	public:
	int areaP;
	void calP(){
		areaP=(width+length)*2;
	    cout<<"area of parameter is: "<<areaP<<endl;
	}
};
int main(){
	Rectangle r;
	r.input();
	r.calR();
	
	Parameter p;
	p.input();
	p.calP();
	return 0;
}
//single inheritence
#include<iostream>
using namespace std;
class parent{
	protected:
	string name;
	int age;
	public:
		
	parent(string n,int a){
		name=n;
		age=a;
	}	
};

class student : public parent{
	int roll;
	int fee;
	public:
	student(string n,int a,int r,int f) : parent(n,a){
	  roll=r;
	  fee=f;
	}
	
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"roll: "<<roll<<endl;
		cout<<"fee: "<<fee<<endl;
	}
};
int main(){
	student s("ali",17,123,2200);
	s.dis();
	return 0;
}

//multilevel inheritence
#include<iostream>
using namespace std;
class person{
	protected:
	string name;
	int age;
//	public:
//	person(string n,int a){
//		name=n;
//		age=a;
//	}
};

class employee : public person{
	protected:
	int sal;
//	public:
//	employee(string n,int a,int s) : person(n,a){
//		sal=s;
//	}
};
class manjor : public employee{
	string dep;
	public:
//	manjor(string n,int a,int s,string d) : employee(n,a,s){
//		dep=d;
//	}
	
	manjor(string n,int a,int s,string d){
		name=n;
		age=a;
		sal=s;
		dep=d;
	}
	
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"salary: "<<sal<<endl;
		cout<<"department: "<<dep<<endl;
	}
};
int main(){
	manjor m("Ali Khan",39,5600,"finance");
	m.dis();
	return 0;
}

//multiple inheritence
#include<iostream>
using namespace std;
class student{
	protected:
	string name;
	int roll;
	double gpa;
	student(){
		cout<<"Hello,I am BS student\n";
	}
};

class muslim{
	protected:
	string sect; 
	muslim(){
		cout<<"I belive ALLAH is one\n";
	} 
};

class believe : public muslim, public student{
	string dream;
	public:
	believe(string n,int r,double g,string s,string d){
		name=n;
		roll=r;
		gpa=g;
		sect=s;
		dream=d;
	}
	
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"roll: "<<roll<<endl;
		cout<<"gpa: "<<gpa<<endl;
		cout<<"sect: "<<sect<<endl;
		cout<<"dream: "<<dream<<endl;
	}

};
int main(){
	believe b("Jafar",101,3.48,"shia","jannah");
	b.dis();
	return 0;
}

//hererical inheritence
#include<iostream>
using namespace std;
class person{
	protected:
	string name;
	int age;
	
	
};

class student : public person{
	protected:
	int roll;
	double gpa;
	public:
	student(string n,int a,int r,double g){
		name=n;
		age=a;
		roll=r;
		gpa=g;
	}
	
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"roll: "<<roll<<endl;
		cout<<"gpa: "<<gpa<<endl;
	}
};

class teacher : public person{
	int sal;
	public:
	teacher(string n,int a,int s){
		name=n;
		age=a;
		sal=s;
	}
	
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"salary: "<<sal<<endl;
	}
};
int main(){
	student s("ali",28,123,3.45);
	s.dis();
	
	teacher t("sadaqat",45,450000);
	t.dis();
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
class Person{
	protected:
	string name;
	int id;
	public:
	void person(){
		cout<<"I am a person constructor...\n";
	}
	Person(string name,int id){
		this->name=name;
		this->id=id;
		cout<<"name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
	}
};

class Employee : public Person{
	protected:
	double salary;
	public:
	Employee(string name,int id,double salary) : Person(name,id){
		this->salary=salary;
		cout<<"salary: "<<salary<<endl;
	}
};

class Manjor : public Employee{
	protected:
	string dep;
	public:
	Manjor(string name,int id,double salary,string dep) : Employee(name,id,salary){
		this->dep=dep;
		cout<<"dep: "<<dep<<endl;
	}
};

int main(){
	Manjor m("ali",11,34034,"cs");
	return 0;
}
#include<iostream>
using namespace std;
class Person{
	protected:
	string name;
	public:
	Person(string name){
		this->name=name;
        cout<<"name: "<<name<<endl;
	}
};

class Teacher : public Person{
	protected:
	string dep;
	public:
	Teacher(string name,string dep)  : Person(name){
		this->dep=dep;
		cout<<"department: "<<dep<<endl;
	}
};

class Researcher : public Person{
	protected:
	string researchA;
	public:
	Researcher(string name,string researchA): Person(name){
		this->researchA=researchA;
		cout<<"research on: "<<researchA<<endl;
	}
};

class Professor : virtual public Teacher,virtual public Researcher{
	protected:
	string sub;
	public:
	Professor(string name,string dep,string researchA,string sub)  : Teacher(name,dep) ,Researcher(name,researchA){
		this->sub=sub;
		cout<<"subject: "<<sub<<endl;
	}
};
int main(){
	Professor p("Ali","Computer Science","water","oop");
	return 0;
}
#include<iostream>
#include<iomanip>  // for setw and formatting
using namespace std;

class Item {
protected:
    string name;
    double price;

public:
    void inputItem() {
        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter item price: ";
        cin >> price;
    }

    void disItem() const {
        cout << left << setw(15) << name << setw(10) << price;
    }
};

class PurchasedItem : public Item {
public:
    double quantity;
    double totalPrice;

    void inputPurchasedItem() {
        cout << "Enter quantity: ";
        cin >> quantity;
    }

    double calculatePrice() {
        totalPrice = quantity * price;
        return totalPrice;
    }

    void inputAll() {
        inputItem();
        inputPurchasedItem();
        calculatePrice();  // auto calculate during input
    }

    void displayAll(int index) const {
        cout << left << setw(5) << index << setw(15) << name 
             << setw(10) << price << setw(10) << quantity 
             << setw(10) << totalPrice << endl;
    }
};

int main() {
    const int max = 10;
    PurchasedItem p[max];
    int itemCount;
    double grandTotal = 0;

    cout << "===== Jafar General Store Karbala =====\n";
    cout << "Enter number of items (max " << max << "): ";
    cin >> itemCount;

    if (itemCount > max || itemCount <= 0) {
        cout << "Invalid item count.\n";
        return 1;
    }

    cout << "\n=== Enter Item Details ===\n";
    for (int i = 0; i < itemCount; i++) {
        cout << "\nItem " << i + 1 << ":\n";
        p[i].inputAll();
        grandTotal += p[i].calculatePrice();
    }

    cout << "\n========== BILL ==========\n";
    cout << left << setw(5) << "No." 
         << setw(15) << "Item" 
         << setw(10) << "Price" 
         << setw(10) << "Qty" 
         << setw(10) << "Total" << endl;
    cout << "------------------------------------------\n";

    for (int i = 0; i < itemCount; i++) {
        p[i].displayAll(i + 1);
    }

    cout << "------------------------------------------\n";
    cout << right << setw(35) << "Grand Total: " << grandTotal << endl;
    cout << "=============================\n";
    cout << "Thank you for shopping with us!\n";

    return 0;
}
#include<iostream>
using namespace std;
class Customer{
	string name;
	int account_number,balance;
	static int total;
	public:
	Customer(string name,int account_number,int balance){
		this->name=name;
		this->account_number=account_number;
		this->balance=balance;
		total++;
	}
	
	void display(){
		cout<<"name: "<<name<<endl;
		cout<<"account number: "<<account_number<<endl;
		cout<<"balance: "<<balance<<endl;
		
	}
	
	void dis_total(){
		cout<<"total customers: "<<total<<endl;
	}
};
int Customer::total=0;
int main(){
	Customer c("Ali",1122,12000);
	c.display();
	c.dis_total();
	
	Customer c1("Ashan",1122,12000);
	c1.display();
	c1.dis_total();
	return 0;
}
#include<iostream>
using namespace std;
class Customer{
	string name;
	int acc_no,balance;
	public:
	Customer(string name,int acc_no,int balance){
		this->name=name;
		this->acc_no=acc_no;
		this->balance=balance;
	}
	
	void display(){
		cout<<"name: "<<name<<endl;
		cout<<"acc no: "<<acc_no<<endl;
		cout<<"balance: "<<balance<<endl;
	}
};
int main(){
	Customer c("Ali",1122,15000);
	c.display();
	return 0;
}
#include<iostream>
using namespace std;
class Humen{
	string name;
	int id;
	public:
	Humen(){}
	Humen(string name,int id){
		this->name=name;
		this->id=id;
	}
	void humen_display(){
		cout<<"name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
	}
};

class Teacher{
	string subject;
	string dep;
	public:
	Teacher(){
	}
	Teacher(string subject,string dep){
		this->subject=subject;
		this->dep=dep;
	}
	
	void teacher_display(){
		cout<<"subject: "<<subject<<endl;
		cout<<"department: "<<dep<<endl;
	}
};

class Coder : public Humen , public Teacher{
	string p_language;
	public:
	Coder(){
	}
	Coder(string name,int id,string subject,string dep,string p_language) : Humen(name,id) ,Teacher(subject,dep){
		this->p_language=p_language;
	}
	void coder_display(){
	    humen_display();
	    teacher_display();
	    cout<<"programming language: "<<p_language<<endl;
	}
}; 
int main(){
	const int n=2;
	string name,subject,dep,lang;
	int id;
	Coder c[n];
	for(int i=0;i<n;i++){
		cout<<"Enter name: ";
	    getline(cin,name);
	    cout<<"Enter id: ";
	    cin>>id;
	    cin.ignore();
	    cout<<"Enter the subject: ";
	    getline(cin,subject);
	    cout<<"Enter the department name: ";
	    getline(cin,dep);
	    cout<<"Enter the programming language: ";
	    getline(cin,lang);
	   c[i]=Coder(name,id,subject,dep,lang);
	}
	
	for(int i=0;i<n;i++){
		c[i].coder_display();
	}
	
	return 0;
}*/

