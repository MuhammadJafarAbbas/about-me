//Muhammad Jafar Abbas.
//task 1:
/*#include<iostream>
using namespace std;
class Date{
	int day;
	int month;
	int year;
	public:
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay();
	int getMonth();
	int getYear();
	void dis() const;
};
void Date::setDay(int d){
	day=d;
}
void Date::setMonth(int m){
	month=m;
}
void Date::setYear(int y){
	year=y;
}
int Date::getDay(){
	return day;
}
int Date::getMonth(){
	return month;
}
int Date::getYear(){
	return year;
}
void Date::dis() const{
	cout<<"\nDate is: "<<day<<"/"<<month<<"/"<<year;
}
int main(){
	Date date[5];
	int d,m,y;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the day: ";
	    cin>>d;
	    date[i].setDay(d);
	    cout<<"Enter the month: ";
	    cin>>m;
	    date[i].setMonth(m);
	    cout<<"Enter the year: ";
	    cin>>y;
	    date[i].setYear(y);
	}
	for(int i=0;i<5;i++)
	{
		date[i].dis();
	}
	return 0;
}*/
//task 1 write:
/*#include<iostream>
using namespace std;
class Date{
	int day;
	int month;
	int year;
	public:
    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    // Getters (const member functions)
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }
    void dis() const;
};
void Date::dis() const{
	cout<<"\nDate is: "<<day<<"/"<<month<<"/"<<year;
}
int main(){
	Date date[5];
	int d,m,y;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the day: ";
	    cin>>d;
	    date[i].setDay(d);
	    cout<<"Enter the month: ";
	    cin>>m;
	    date[i].setMonth(m);
	    cout<<"Enter the year: ";
	    cin>>y;
	    date[i].setYear(y);
	}
	for(int i=0;i<5;i++)
	{
		date[i].dis();
	}
	return 0;
}
*/
//task 2:
/*#include<iostream>
using namespace std;
class saleItem{
	int id;
	string name;
	int quantity;
	double price;
	public:
	saleItem(){
		id=-999;
		name="";
		quantity=1;
		price=1.0;
	}
	saleItem(int i,string n,int q,double p){
		id=i;
		name=n;
		quantity=q;
		price=p;
	}
	bool dQuantity(int amount){
		if(amount<0 || amount>quantity)
		{
			return false;
		}else{
			quantity=quantity-amount;
			return true;
		}
	}
	void dis(){
		cout<<"\nitem id: "<<id<<"| item name: "<<name<<" | item quantity: "<<quantity<<" | item price: $"<<price<<endl;
	}
	void totalP(int amount){
		cout<<"total price of 4 items is: $"<<price*amount;
	}
};
int main(){
	saleItem item(101,"tomato",12,15.3);
	item.dis();
	if(item.dQuantity(4))
	{
		cout<<"\n4 items sold\n";
	}else{
		cout<<"not enought stock";
	}
	item.dis();
	item.totalP(4);
	saleItem item1=item;
	item1.dis();
	return 0;
}*/
//task 3
/*#include<iostream>
using namespace std;
class Car{
	int yearMake;
	string model;
	int speed;
	public:
	Car(int y,string m)
	{
		yearMake=y;
		model=m;
		speed=0;
	}
	int acc(){
		speed+=5;
		return speed;
	}
	int brake(){
		speed-=5;
		return speed;
	}
	int getspeed(){
		
		return speed;
	}
	void dis(){
		cout<<"year make: "<<yearMake<<" | model"<<model<<"| speed is: "<<speed<<endl;
	}
};
int main(){
	Car car(1986,"toyota");
	 cout << "Accelerating:\n";
    for (int i = 0; i < 5; i++) {
        car.acc();
        cout << "Speed: " << car.getspeed() << endl;
    }

    // Brake 5 times
    cout << "Braking:\n";
    for (int i = 0; i < 5; i++) {
        car.brake();
        cout << "Speed: " << car.getspeed() << endl;
    }
	return 0;
}*/
	/*int a,pId;
	string name,aDate,diagnosis,dAssigned;
	char g;
	cout<<"Enter patient id: ";cin>>pId;
	cout<<"Enter patient diagnosis: ";cin>>diagnosis;
	cout<<"Enter patient appoinment date: ";cin>>aDate;
	cout<<"Enter doctor assigned: ";cin>>dAssigned;
	cout<<"Enter patient name: ";cin>>name;
	cout<<"Enter patient age: ";cin>>a;
	cout<<"Enter the patient Gender(m,f,o): ";cin>>g;
	dClass p(pId,diagnosis,aDate,dAssigned,name,a,g);
	bool found;
	int choice;
	int count=0;
	const int max = 100;
    dClass arr[max];

#include<iostream>
using namespace std;
	class Person{
	protected:
	string name;
	int age;
	char gender;
	public:
	Person(string,int,char);
	void PersonDis();
};
Person::Person(string n,int a,char g){
	name=n;
	age=a;
	gender=g;
}
void Person::PersonDis(){
	cout<<"\npatient name: "<<name;
	cout<<"\npatientage: "<<age;
	cout<<"\npatient gender: "<<gender;
}
class dClass : public Person{
	public:
	int pId;
	string diagnosis;
	string aDate;
	string dAssigned;
	dClass() : Person("", 0, 'M') {}  // Default constructor
	dClass(int pId,string diagnosis,string aDate,string dAssigned,string n,int a,char g);
	void dDis();
	void newD(string ndia);
};
dClass::dClass(int pId,string diagnosis,string aDate,string dAssigned,string n,int a,char g) : Person(n,a,g) {
	
	this->pId=pId;
	this->diagnosis=diagnosis;
	this->aDate=aDate;
	this->dAssigned=dAssigned;
}
void dClass::dDis(){
	PersonDis();
	cout<<"\npatient id: "<<pId;
	cout<<"\npatient diagnosis: "<<diagnosis;
	cout<<"\npatient appoinment date: "<<aDate;
	cout<<"\ndoctor assigned: "<<dAssigned;
}
void dClass::newD(string ndia){
	diagnosis=ndia;
	cout<<"data updated successfully";
}
int main(){
    int a, pId;
    string name, aDate, diagnosis, dAssigned;
    char g;
    bool found;
    int choice;
    int count = 0;
    const int max = 1;
    dClass arr[max];
	
	while(true){
	cout<<"1.to enter patients record\n";
	cout<<"2.to show data of all patients\n";
	cout<<"3.to update diagnosis\n";
	cout<<"4.to exit\n";
	cout<<"Enter your choice: ";
	cin>>choice;
	if(choice==1)
	{
		if(count<max){
			cout<<"Enter patient id: ";cin>>pId;
	        cout<<"Enter patient diagnosis: ";cin>>diagnosis;
	        cout<<"Enter patient appoinment date: ";cin>>aDate;
        	cout<<"Enter doctor assigned: ";cin>>dAssigned;
        	cout<<"Enter patient name: ";cin>>name;
        	cout<<"Enter patient age: ";cin>>a;
        	cout<<"Enter the patient Gender(m,f,o): ";cin>>g;
        	arr[count]=dClass(pId,diagnosis,aDate,dAssigned,name,a,g);
	        count++;
		}else{
			cout<<"no more patients can be added";
		}
	}else if(choice==2)
	{
		for(int i=0;i<count;i++)
		{
		    arr[i].dDis();
		}
	}else if (choice == 3) {
            cout << "Enter patient ID to update diagnosis: ";
            cin >> pId;
            found = false;
            cin.ignore();
            for (int i = 0; i < count; i++) {
                if (arr[i].pId == pId) {
                    cout << "Enter new diagnosis: ";
                    getline(cin, diagnosis);
                    arr[i].newD(diagnosis);
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Patient not found!";
            }

        } else if (choice == 4) {
            cout << "Exiting program. Goodbye!";
            break;

        } else {
            cout << "Invalid choice. Try again.";
        }
	}
	return 0;
}*/
/*#include<iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    char gender;

public:
    Person(string, int, char);
    void PersonDis();
};

Person::Person(string n, int a, char g) {
    name = n;
    age = a;
    gender = g;
}

void Person::PersonDis() {
    cout << "\nPatient Name: " << name;
    cout << "\nPatient Age: " << age;
    cout << "\nPatient Gender: " << gender;
}

class dClass : public Person {
public:
    int pId;
    string diagnosis;
    string aDate;
    string dAssigned;

    
    dClass(int, string, string, string, string, int, char);
    void dDis();
    void newD(string ndia);
};

dClass::dClass(int pId, string diagnosis, string aDate, string dAssigned, string n, int a, char g)
    : Person(n, a, g) {
    this->pId = pId;
    this->diagnosis = diagnosis;
    this->aDate = aDate;
    this->dAssigned = dAssigned;
}

void dClass::dDis() {
    cout << "\n----------------------------";
    PersonDis();
    cout << "\nPatient ID: " << pId;
    cout << "\nDiagnosis: " << diagnosis;
    cout << "\nAppointment Date: " << aDate;
    cout << "\nDoctor Assigned: " << dAssigned;
    cout << "\n----------------------------";
}

void dClass::newD(string ndia) {
    diagnosis = ndia;
    cout << "Diagnosis updated successfully!";
}

int main() {
    int a, pId;
    string name, aDate, diagnosis, dAssigned;
    char g;
    bool found;
    int choice;
    int count = 0;
    const int max = 100;
    dClass arr[max];

    while (true) {
        cout << "\n\n--------- MENU ---------\n";
        cout << "1. Enter patient record\n";
        cout << "2. Show all patients\n";
        cout << "3. Update diagnosis\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count < max) {
                cout << "Enter patient ID: ";
                cin >> pId;
                cin.ignore();
                cout << "Enter diagnosis: ";
                getline(cin, diagnosis);
                cout << "Enter appointment date: ";
                getline(cin, aDate);
                cout << "Enter doctor assigned: ";
                getline(cin, dAssigned);
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter age: ";
                cin >> a;
                cout << "Enter gender (m/f/o): ";
                cin >> g;

                arr[count] = dClass(pId, diagnosis, aDate, dAssigned, name, a, g);
                count++;
            } else {
                cout << "No more patients can be added!";
            }

        } else if (choice == 2) {
            if (count == 0) {
                cout << "No patient records available.";
            } else {
                for (int i = 0; i < count; i++) {
                    arr[i].dDis();
                }
            }

        } else if (choice == 3) {
            cout << "Enter patient ID to update diagnosis: ";
            cin >> pId;
            found = false;
            cin.ignore();
            for (int i = 0; i < count; i++) {
                if (arr[i].pId == pId) {
                    cout << "Enter new diagnosis: ";
                    getline(cin, diagnosis);
                    arr[i].newD(diagnosis);
                    found = true;
                    break;
                }
                
            }
            if (!found) {
                cout << "Patient not found!";
            }

        } else if (choice == 4) {
            cout << "Exiting program. Goodbye!";
            break;

        } else {
            cout << "Invalid choice. Try again.";
        }
    }

    return 0;
}

//Scenario: A company has employees. Each employee has a name, ID, and salary.
//There are two types of employees: Managers and Developers.
//Managers have an additional attribute: department.
//Developers have an additional attribute: programming language.
//Question:
//Design a class Employee as the base class and derive Manager and Developer classes from it.
//Write a function to display information of all employees and use appropriate constructors.
#include<iostream>
using namespace std;
class Employee{
	protected:
	string name;
	int id;
	int salary;
	public:
	Employee(string name,int id,int salary){
		this->name=name;
		this->id=id;
		this->salary=salary;
	}
	void e_dis(){
		cout<<"name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
		cout<<"salary: "<<salary<<endl;
	}
};

class Manager : public Employee{
	public:
	string dep;
	Manager(string name,int id,int salary,string dep) : Employee(name,id,salary){
		this->dep=dep;
	}
	void m_dis(){
		e_dis();
		cout<<"dep: "<<dep<<endl;
	}
};

class Developer : public Employee{
	public:
	string p_lan;
	Developer(string name,int id,int salary,string p_lan) : Employee(name,id,salary){
		this->p_lan=p_lan;
	}
	void d_dis(){
		e_dis();
		cout<<"pro language: "<<p_lan<<endl;
	}
};
int main(){
	Manager m1("asad",1213,120000,"cs");
	m1.m_dis();
	
	Developer d1("ali",1214,15000,"c++");
	d1.d_dis();
	
	return 0;
}
//Scenario: A university has Person as a base class with name and age.
//Students, Teachers, and Staff are derived from Person.
//Question:
//Design this system using inheritance. Each derived class should have additional data members:
//Student: course, roll number
//Teacher: subject, salary
//Staff: job role, department
//Write code to:
//Accept and display details of all categories
//Use arrays of pointers and polymorphism to store and manage them
#include <iostream>
using namespace std;
class Person{
	protected:
	string name;
	int age;
	public:
	Person(string name,int age){
		this->name=name;
		this->age=age;
	}
	virtual void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
	}
	virtual ~Person(){
		cout<<"person destructor\n";
	}
};
class Student : public Person{
	string course;
	int roll;
	public: 
	Student(string name,int age,string course,int roll) : Person(name,age){
		this->course=course;
		this->roll=roll;
	}
	virtual void dis(){
		Person::dis();
		cout<<"course: "<<course<<endl;
		cout<<"roll no: "<<roll<<endl;
	}
	virtual ~Student(){
		cout<<"student des called"<<endl;
	}
};

class Teacher : public Person{
	string sub;
	int sal;
	public:
	Teacher(string name,int age,string sub,int sal) : Person(name,age){
		this->sub=sub;
		this->sal=sal;
	}
	virtual void dis(){
		Person::dis();
		cout<<"subject: "<<sub<<endl;
		cout<<"salary: "<<sal<<endl;
	}
	virtual ~Teacher(){
		cout<<"teacher des called\n";
	}
};
int main(){
	int size=3;
	Person* p1[size];
	string name,lan;
	int age,roll;
	
	for(int i=0;i<size;i++){
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter the age: ";
		cin>>age;
		cout<<"Enter the lan: ";
		cin>>lan;
		cout<<"Enter the roll: ";
		cin>>roll;
		p1[i]= new Student(name,age,lan,roll);
	}
	for(int i=0;i<size;i++){
		p1[i]->dis();
	}
	for(int i=0;i<size;i++){
		delete p1[i];
	}
	cout<<endl;
	Person* p2=new Teacher("Asad",29,"se",20000);
	p2->dis();
	delete p2;
	
	return 0;
}
//Scenario: You are designing a shopping system. The base class is Product with ID, name, and price.
//Derived classes include Electronics, Clothing, and Grocery.
//Question:
//Design the class structure. Each derived class should include category-specific attributes:
//Electronics: warranty period
//Clothing: size and material
//Grocery: expiry date
//Include a calculateDiscount() function in the base class and override it in each derived class.
//🔁 How does function overriding work in this case? Use virtual keyword.
#include<iostream>
using namespace std;
class Product{
	protected:
	int id;
	string name;
	double price;
	public:
	Product(int id,string name,double price){
		this->id=id;
		this->name=name;
		this->price=price;
	}
	virtual void discount(){
		cout<<"id: "<<id<<endl;
		cout<<"name: "<<name<<endl;
		if(price>2000){
			double discount=price*0.20;
			cout<<"price: "<<price-discount <<endl;
		}else{
			cout<<"price: "<< price<<endl;
		}
	}
};
class Electronics : public Product{
	string warrenty;
	public:
	Electronics(int id,string name,double price,string warrenty) : Product (id,name,price){
		this->warrenty=warrenty;
	}
	virtual void discount(){
		Product::discount();
		cout<<"warrenty: "<<warrenty<<endl;
	}
};
int main(){
	Product* p1=new Electronics(11,"cable",12000,"2-month");
	p1->discount();
	return 0;
}
#include<iostream>
using namespace std;
class Person{
	protected:
	string name;
	int age;
	public:
	Person(string name,int age){
		this->name=name;
		this->age=age;
	}
	void p_dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
	}
};

class Academic{
	protected:
	int roll;
	double gpa;
	public:
	Academic(int roll,double gpa){
		this->roll=roll;
		this->gpa=gpa;
	}
	void a_dis(){
		cout<<"roll no: "<<roll<<endl;
		cout<<"gpa: "<<gpa<<endl;
	}
};

class Student : public Person , public Academic{
	public:
	Student(string name,int age,int roll,double gpa):Person(name,age),Academic(roll,gpa) {
		
	}
	void dis(){
		p_dis();
		a_dis();
	}
	
};
int main(){
	Student s("ali",12,1122,3.5);
	s.dis();
	return 0;
}
#include<iostream>
using namespace std;
class Person{
	protected:
	string name;
	int age;
	public:
	Person(string name,int age){
		this->name=name;
		this->age=age;
	}
	virtual void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
	}
	virtual ~Person(){
		
	}
};
class Employee : public Person{
	protected:
	int salary;
	public:
	Employee(string name,int age,int salary) : Person(name,age){
		this->salary=salary;
	}
	virtual void dis(){
		Person::dis();
		cout<<"salary: "<<salary<<endl;
	}
	~Employee(){
		
	}
};

class Manjor : public Employee{
	string dep;
	public:
	Manjor(string name,int age,int salary,string dep) : Employee(name,age,salary){
		this->dep=dep;
	}
	virtual void dis(){
		Employee::dis();
		cout<<"dep: "<<dep<<endl;
	}
	~Manjor(){
		
	}
};

class Developer : public Employee{
	string lan;
	public:
	Developer(string name,int age,int salary,string lan) : Employee(name,age,salary){
		this->lan=lan;
	} 
	virtual void dis(){
		Employee::dis();
		cout<<"language: "<<lan<<endl;
	}
	~Developer(){
		
	}
};
int main(){
	Person* p1=new Employee("ali",14,24000);
	p1->dis();
	cout<<"\n";
	
	Employee* e1=new Manjor("salah",24,240050,"se");
	e1->dis();
	
	Employee* e2=new Developer("sadam",34,670000,"c++");
	e2->dis();
	return 0;
}
#include<iostream>
using namespace std;
class Citizen{
	protected:
	string name;
	int id;
	public:
	Citizen(string name,int id){
		this->name=name;
		this->id=id;
	}
	virtual void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
	}
};

class Taxpayer : virtual public Citizen{
	protected:
	int tax;
	public:
	Taxpayer(string name,int id,int tax) : Citizen(name,id){
		this->tax=tax;
	}
	virtual void dis(){
		Citizen::dis();
		
	}
};

class Voter : virtual public Citizen{
	protected:
	string vote;
	public:
	Voter(string name,int id,string vote) : Citizen(name,id){
		this->vote=vote;
	}
	virtual void dis(){
		Citizen::dis();
		
	}
};
class Adult : public Taxpayer , public Voter{
	public:
	Adult(string name,int id,int tax,string vote) : Citizen(name,id), Taxpayer(name,id,tax),Voter(name,id,vote){
		
	}
	virtual void dis(){
		Citizen::dis();
		cout<<"tax: "<<tax<<endl;
		cout<<"vote: "<<vote<<endl;
	}
};
int main(){
	Citizen* c=new Adult("Ali",12345,1500,"PTI");
	c->dis();
	return 0;
}
#include<iostream>
using namespace std;
class Person{
	protected:
	string name;
	string email;
	public:
	Person(string name,string email){
		this->name=name;
		this->email=email;
	}
	void p_dis(){
		cout<<"name: "<<name<<endl;
		cout<<"id: "<<email<<endl;
	}
};

class Costumer : virtual public Person{
	protected:
	string p_history;
	public:
	Costumer(string name,string email,string p_history) : Person(name,email){
		this->p_history=p_history;
	}
	void c_dis(){
		cout<<"purchase history: "<<p_history<<endl;
	}
};

class Reviewer : virtual public Person{
	protected:
	int review;
	int rating;
	Reviewer(string name,string email,int review,int rating): Person(name,email){
		this->review=review;
		this->rating=rating;
	}
	void r_dis(){
		cout<<"reviews: "<<review<<endl;
		cout<<"rating: "<<rating<<endl;
	}
};

class Influencer : public Costumer , public Reviewer{
	public:
	Influencer(string name,string email,string p_history,int review,int rating): Person(name,email),Costumer(name,email,p_history),Reviewer(name,email,review,rating){
		
	}
	void dis(){
		p_dis();
		c_dis();
		r_dis();
	}
};
int main(){
	Influencer i("ali","ja7733198@gmail.com","no history",12,1);
	i.dis();
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

class Employee : public Person{
	protected:
	int sal;
	public:
	Employee(string n,int a,int sal) : Person(n,a){
		this->sal=sal;
	}
	void e_dis(){
		cout<<"sal: "<<sal<<endl;
	}
};

class Doctor : public Employee{
	protected:
	string spiecal;
	public:
	Doctor(string n,int a,int sal,string s) : Employee(n,a,sal){
		spiecal=s;
	}
	void d_dis(){
		p_dis();
		e_dis();
		cout<<"spiecalization: "<<spiecal<<endl;
	}
};
int main(){
	Doctor d("ali",25,450000,"liver");
	d.d_dis();
	return 0;
}
#include<iostream>
using namespace std;
class Player{
	protected:
	string sname;
	string team;
	public:
	Player(string sname,string team){
		this->sname=sname;
		this->team=team;
	}
	void p_dis(){
		cout<<"sport name: "<<sname<<endl;
		cout<<"team name: "<<team<<endl;
	}
};

class Student{
	protected:
	int roll;
	double gpa;
	public:
	Student(int r,double g){
		roll=r;
		gpa=g;
	}
	void s_dis(){
		cout<<"roll no: "<<roll<<endl;
		cout<<"gpa : "<<gpa<<endl;
	}
};

class Studentathlete : public Player , public Student{
	public:
	Studentathlete(string sname,string team,int r,double g) : Player(sname,team) , Student(r,g){
		
	}
	void dis(){
		p_dis();
		s_dis();
	}
};
int main(){
	Studentathlete s("ali","peshawar zalmi",1122,3.9);
	s.dis();
	return 0;
}
#include<iostream>
using namespace std;
class Vehicle{
	protected:
	string owner;
	int rno;
	public:
	Vehicle(string owner,int rno){
		this->owner=owner;
		this->rno=rno;
	}
	void v_dis(){
		cout<<"owner name: "<<owner<<endl;
		cout<<"registiration: "<<rno<<endl;
	}
};

class Car : public Vehicle{
	protected:
	string fuel;
	public:
	Car(string owner,int rno,string fuel) : Vehicle(owner,rno){
		this->fuel=fuel;
	}
	void c_dis(){
		v_dis();
		cout<<"fuel type: "<<fuel<<endl;
	}
};

class Truck : public Vehicle{
	protected:
	int gears;
	public:
	Truck(string owner,int rno,int gears) : Vehicle(owner,rno){
		this->gears=gears;
	}
	void t_dis(){
		v_dis();
		cout<<"gears: "<<gears<<endl;
	}
};
int main(){
	Truck t("Ali",3543,4);
	t.t_dis();
	
	Car c("Salah",553,"petrol");
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
	Person(string name,int age){
		this->name=name;
		this->age=age;
	}
	void p_dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
	}
};

class Student : virtual public Person{
	protected:
	int roll;
	public:
	Student(string name,int age,int roll) : Person(name,age){
		this->roll=roll;
	}
	void s_dis(){
		cout<<"roll no: "<<roll<<endl;
	}
};

class Teacher : virtual public Person{
	protected:
	int salary;
	public:
	Teacher(string name,int age ,int salary) : Person(name,age){
		this->salary=salary;
	}
	void t_dis(){
		cout<<"salary: "<<salary<<endl;
	}
};

class Researcher : public Student ,public Teacher{
	public:
	Researcher(string name,int age ,int roll,int salary) : Person(name,age),Student(name,age,roll),Teacher(name,age,salary){
		
	}
	void r_dis(){
		p_dis();
		s_dis();
		t_dis();
	}
};
int main(){
	Researcher r1("ali",16,1122,500845);
	r1.r_dis();
	return 0;
}
#include<iostream>
using namespace std;
class Complex{
	int a,b;
	public:
	void set(int a,int b){
		this->a=a;
		this->b=b;
	}
	void dis(){
		cout<<"your number are: "<<a<<" + "<<b<<"i"<<endl;
	}
	friend Complex sumComplex(Complex o1,Complex o2);
};
Complex sumComplex(Complex o1,Complex o2){
	Complex o3;
	o3.set((o1.a+o1.b),(o2.a+o2.b));
	return o3;
}
int main(){
	Complex c1,c2,c3;
	c1.set(12,4);
	c2.set(4,12);
	c1.dis();
	c2.dis();
	c3=sumComplex(c1,c2);
	c3.dis();
	return 0;
}
#include<iostream>
using namespace std;
class Employee{
	string name;
	double salary;
	public:
	Employee(){
		
	}
	Employee(string name,int salary){
		this->name=name;
		this->salary=salary;
	}
	friend void  cal_salary(Employee e1);
};
void cal_salary(Employee e1){
	double allowance=0.20*e1.salary;
	double tex=0.10*e1.salary;
	double total_salary=e1.salary+allowance-tex;
	cout<<"name: "<<e1.name<<endl;
	cout<<"salary: "<<total_salary<<endl;
}
int main(){
	Employee e("ali",5000);
	Employee e1;
	cal_salary(e);
	return 0;
}
#include<iostream>
using namespace std;
class Book;
class Student{
	string name;
	int id;
	public:
	void input_s(){
		cout<<"Enter the name: ";
		cin>>name;
		cout<<"Enter the id: ";
		cin>>id;
	}
	friend void issueBook(Student s,Book &b);
};
class Book{
	string title;
	int id;
	bool status=true;
	public:
	void input_b(){
		cout<<"Enter the book title: ";
		cin>>title;
		cout<<"Enter the book id: ";
		cin>>id;
	}
	void show(){
		if(status){
			cout<<"book "<<title <<" is avalible"<<endl;
		}else{
			cout<<"book "<<title <<" is not avalible"<<endl;
		}
	}
	friend void issueBook(Student s,Book &b);
};
void issueBook(Student s,Book &b){
	if(b.status){
		cout<<"book "<<b.title<<" is currently issued to "<<s.name<<endl;
	}else{
		cout<<"sorry book is not found"<<endl;
	}
}
int main(){
	Student s1;
	Book b1;
	s1.input_s();
	b1.input_b();
	cout<<endl;
	b1.show();
	issueBook(s1,b1);
	return 0;
}
#include<iostream>
using namespace std;
class Product{
	string name;
	int id;
	int quantity;
	public:
	void input(){
		cout<<"name: ";
		cin>>name;
		cout<<"id: ";
		cin>>id;
		cout<<"quantity: ";
		cin>>quantity;
	}
	void show(){
		cout<<"name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
		cout<<"quantity: "<<quantity<<endl;
	}
	friend void restock(Product p,int amount);
};
void restock(Product p,int amount){
	cout<<"\n your new stock is now"<<endl;
	cout<<"name: "<<p.name<<endl;
	cout<<"id: "<<p.id<<endl;
	cout<<"quantity: "<<p.quantity+amount<<endl;
}
int main(){
	Product p;
	p.input();
	p.show();
	restock(p,2);
	return 0;
}
#include<iostream>
using namespace std;
class BAccount{
	string name,rname;
	int accno;
	float balance;
	public:
	void input(){
		cout<<"sender name: ";cin>>name;
		
		cout<<"account no: ";cin>>accno;
		cout<<"balance: ";cin>>balance;
	}
	void too(){
		cout<<"receiptent name: ";cin>>rname;
	}
	friend void funds(BAccount &from, BAccount &to,float  amount);
	
};
void funds(BAccount &from, BAccount &to,float  amount){
		int c;
		cout<<"Enter your choice(1 to send and  2 to add): ";cin>>c;
		if(c==1)
		{
			cout<<"Amount "<<amount<<" is transferd from "<<from.name<<" to "<<to.rname<<endl;
			cout<<"remaining balance: "<<from.balance-amount<<endl;
		}else if(c==2){
			cout<<"Amount "<<amount<<" is received from "<<to.name<<" to "<<from.rname<<endl;
			cout<<"new balance is: "<<from.balance+amount<<endl;
		}else{
			cout<<"error"<<endl;
		}
		
	}
int main(){
	BAccount b1,b2;
	b1.input();
	b2.too();
	funds(b1,b2,1200);
	return 0;
}
#include <iostream>
using namespace std;

class User {
protected:
    string name;
    int accNo;
public:
    User(string name = "", int accNo = 0) {
        this->name = name;
        this->accNo = accNo;
    }

    void u_dis() {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
    }

    int getAccNo() {
        return accNo;
    }

    string getName() {
        return name;
    }
};

class Transaction {
protected:
    float balance;
public:
    Transaction(float balance = 0) {
        this->balance = balance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Your updated balance is: " << balance << endl;
    }

    void withdrawl(float amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
            cout << "Your updated balance is: " << balance << endl;
        }
    }

    void checkBalance() {
        cout << "Balance: " << balance << endl;
    }
};

class Atm : public User, public Transaction {
public:
    Atm(string name = "", int accNo = 0, float balance = 0)
        : User(name, accNo), Transaction(balance) {}

    void dis() {
        u_dis();
        checkBalance();
    }
};

int main() {
    int count;
    cout << "How many users: ";
    cin >> count;

    Atm users[100];

    // Input users
    for (int i = 0; i < count; i++) {
        string name;
        int accNo;
        float balance;
        cout << "\nEnter details for user " << (i + 1) << ":\n";
        cin.ignore(); // flush newline
        cout << "Name: ";
        getline(cin, name);
        cout << "Account No: ";
        cin >> accNo;
        cout << "Initial Balance: ";
        cin >> balance;
        users[i] = Atm(name, accNo, balance);
    }

    int acc, n;
    float amount;

    while (true) {
        cout << "\nEnter account number to access (-1 to exit): ";
        cin >> acc;
        if (acc == -1) break;

        int found = -1;
        for (int i = 0; i < count; i++) {
            if (users[i].getAccNo() == acc) {
                found = i;
                break;
            }
        }

        if (found == -1) {
            cout << "Account not found!" << endl;
            continue;
        }

        do {
            cout << "\n1. Display Details\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Check Balance\n";
            cout << "5. Exit to Main Menu\n";
            cout << "Enter your choice (1-5): ";
            cin >> n;

            switch (n) {
                case 1:
                    users[found].dis();
                    break;
                case 2:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    users[found].deposit(amount);
                    break;
                case 3:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    users[found].withdrawl(amount);
                    break;
                case 4:
                    users[found].checkBalance();
                    break;
                case 5:
                    cout << "Returning to main menu.\n";
                    break;
                default:
                    cout << "Invalid choice.\n";
            }
        } while (n != 5);
    }

    cout << "\nThank you for using our ATM system.\n";
    return 0;
}
*
#include<iostream>
using namespace std;
class Base{
	public:
	virtual void dis(){
		cout<<"base\n";
	}
};
class Child : public Base{
	public:
	void dis(){
		cout<<"child"<<endl;
	}
};
int main(){
	Base* b=new Child;
//	Child c;
//	b=&c;
	b->dis();
	return 0;
}
#include<iostream>
using namespace std;
class base{
	public:
	virtual void dis()=0;
};
class child : public base{
	public:
	void dis(){
		cout<<"base class pvf\n";
	}
};
int main(){
	base* b=new child;
	b->dis();
	return 0;
}
#include<iostream>
using namespace std;
class shape{
	public:
	virtual void draw()=0;
};
class circle : public shape{
	float r,pi;
	public:
	circle(float r,float pi){
		this->r=r;
		this->pi=pi;
	}
	void draw(){
		cout<<"area of circle: "<<pi*r*r<<endl;
	}
};
class triangle : public shape{
	float b,h;
	public:
	triangle(float b,float h){
		this->b=b;
		this->h=h;
	}
	void draw(){
		cout<<"area of triangle: "<<0.5*b*h<<endl;
	}
};
int main(){
	shape* s1=new circle(4.2,2.0);
	s1->draw();
	
	shape* s2=new triangle(1.2,3.2);
	s2->draw();
	return 0;
}
#include<iostream>
using namespace std;
class Employee{
	public:
	virtual void cal()=0;
};
class Engineer : public Employee{
	float sal;
	public:
	Engineer(float sal){
		this->sal=sal;
	}
	void cal(){
		float bonus=0.20*sal;
		float tex=0.10*sal;
		cout<<"salary: "<<sal+bonus-tex;
	}
};
int main(){
	Employee* e1=new Engineer(1200);
	e1->cal();
	return 0;
}
#include<iostream>
using namespace std;
class teacher{
	public:
	string name;
	teacher(string name){
		this->name=name;
	}
	void t_dis(){
		cout<<name;
	}
};
class student{
	public:
	string sname;
	student(string sname){
		this->sname=sname;
	}
	void dis(teacher &t){
		cout<<t.name<<" is teaching "<<sname;
	}
};
int main(){
	teacher t("ali");
	student s("asad");
	s.dis(t);
	return 0;
}
#include<iostream>
using namespace std;
class teacher{
	public:
	string name;
	teacher(string name){
		this->name=name;
	}
	void t_dis(){
		cout<<name;
	}
};
class student{
	public:
	string sname;
	teacher* t;
	student(string sname,teacher* t){
		this->sname=sname;
		this->t=t;
	}
	void dis(){
		cout<<t->name<<" is teaching "<<sname<<endl;
	}
};
int main(){
	teacher t("ali");
	student s("asad",&t);
	s.dis();
	return 0;
}
#include<iostream>
using namespace std;
class Engine{
	public:
	void start(){
		cout<<"engine started"<<endl;
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

#include <iostream>
#include <string>
using namespace std;

// Abstract Class: Person
class Person {
public:
    virtual void displayInfo() const = 0; // Pure virtual function
    virtual ~Person() {} // Virtual destructor
};

// Student class inherits Person
class Student : public Person {
private:
    string name;
    int rollNo;
    string degree;
public:
    Student() : name(""), rollNo(0), degree("") {}
    Student(string n, int r, string d) : name(n), rollNo(r), degree(d) {}

    void displayInfo() const override {
        cout << "  Student Name: " << name << ", Roll No: " << rollNo << ", Degree: " << degree << endl;
    }
};

// Teacher class inherits Person
class Teacher : public Person {
private:
    string name;
    string subject;
public:
    Teacher() : name(""), subject("") {}
    Teacher(string n, string s) : name(n), subject(s) {}

    void displayInfo() const override {
        cout << "  Teacher Name: " << name << ", Subject: " << subject << endl;
    }
};

// Department class
class Department {
private:
    string departmentName;
    Student students[50]; // Composition: owns students
    int studentCount;
    const Teacher* teacher; // Aggregation: uses external Teacher pointer

public:
    Department() : studentCount(0), teacher(nullptr), departmentName("") {}

    void setDepartmentName(const string& name) {
        departmentName = name;
    }

    void assignTeacher(const Teacher* t) {
        teacher = t; // Aggregation (doesn't own the teacher)
    }

    void addStudent(const Student& s) {
        if (studentCount < 50) {
            students[studentCount++] = s;
        } else {
            cout << "  Cannot add more students. Limit reached." << endl;
        }
    }

    void displayDepartment() const {
        cout << "\nDepartment: " << departmentName << endl;
        if (teacher)
            teacher->displayInfo();
        else
            cout << "  No teacher assigned.\n";

        if (studentCount == 0)
            cout << "  No students enrolled.\n";
        else {
            for (int i = 0; i < studentCount; ++i)
                students[i].displayInfo();
        }
    }
};

// University class
class University {
private:
    Department departments[10]; // Composition: owns departments
    int deptCount;

public:
    University() : deptCount(0) {}

    void addDepartment(const Department& dept) {
        if (deptCount < 10)
            departments[deptCount++] = dept;
        else
            cout << "Cannot add more departments.\n";
    }

    void displayAll() const {
        cout << "===== University Information =====" << endl;
        for (int i = 0; i < deptCount; ++i)
            departments[i].displayDepartment();
    }
};

int main() {
    // Create teachers
    Teacher t1("Dr. Smith", "Mathematics");
    Teacher t2("Dr. Alice", "Computer Science");

    // Create students
    Student s1("John Doe", 101, "BSc Math");
    Student s2("Jane Roe", 102, "BSc Math");
    Student s3("Alex Kim", 201, "BSc CS");

    // Create departments
    Department d1, d2;
    d1.setDepartmentName("Mathematics");
    d1.assignTeacher(&t1);
    d1.addStudent(s1);
    d1.addStudent(s2);

    d2.setDepartmentName("Computer Science");
    d2.assignTeacher(&t2);
    d2.addStudent(s3);

    // Create university and add departments
    University uni;
    uni.addDepartment(d1);
    uni.addDepartment(d2);

    // Display all info
    uni.displayAll();

    return 0;
}
*/
#include<iostream>
using namespace std;
class Person{
	public:
	virtual void dis()=0;
};
class Student : public Person{
	public:
	string name;
	int roll;
	Student(){
		
	}
	Student(string name,int roll){
		this->name=name;
		this->roll=roll;
	}
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"roll: "<<roll<<endl;
	}
	
};
class Teacher : public Person{
	public:
	string tname;
	string sub;
	Teacher(){
		
	}
	Teacher(string tname,string sub){
		this->tname=tname;
		this->sub=sub;
	}
	void dis(){
		cout<<"teacher name: "<<tname<<endl;
		cout<<"subject: "<<sub<<endl;
	}
};
class Department{
	public:
	string dep;
	Student student;
	Teacher* teacher;
	Department(string dep,Student s,Teacher* teacher){
		this->dep=dep;
		student=s;
		this->teacher=teacher;
	}
	void dis(){
		cout<<"department: "<<dep<<endl;
		cout<<"teacher name: "<<teacher->tname<<endl;
		cout<<"teacher subject: "<<teacher->sub<<endl;
		cout<<"student name: "<<student.name<<endl;
		cout<<"student roll: "<<student.roll<<endl;
	}
};
class University{
	public:
	int n=2;
	Department dep[n];
	University(Department dep){
		this->dep=dep;
	}
	
	void dep(){
		for(int i=0;i<n;i++){
		   dep[i].dep;
	   } 
	    
	}
};
int main(){
	Teacher t1("Ali","c++");
	Student s1("salah",11);
	Department d1("cs",s1,&t1);
	d1.dis();
	return 0;
}