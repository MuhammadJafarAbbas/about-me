//objects pass by reference in functions
/*#include<iostream>
using namespace std;
class Complex{
	int a;
	int b;
	public:
	void set(int a,int b){
		this->a=a;
		this->b=b;
	}
	void add_complex(Complex o1,Complex o2){
		Complex o3;
		a=o1.a+o1.b;
		b=o2.a+o2.b;
	}
	void display(){
		cout<<a<<" + "<<b<<"i"<<endl;
	}
};
int main(){
	Complex c1,c2,c3;
	c1.set(2,4);
	c2.set(4,5);
	c3.add_complex(c1,c2);
	c1.display();
	c2.display();
	c3.display();
	return 0;
}
#include<iostream>
using namespace std;
class Employee{
	int id;
	int salary;
	public:
	void get(){
		salary=1100;
		cout<<"Enter id: "<<endl;
		cin>>id;
	}
	void dispaly(){
		cout<<"salary: "<<salary<<endl;
		cout<<"id: "<<id<<endl;
	}
};
int main(){
	Employee e[5];
	for(int i=0;i<5;i++){
		cout<<"employee: "<<i+1<<endl;
	    e[i].get();
	    e[i].dispaly();
	}
	
	return 0;
}
#include<iostream>
using namespace std;
class Complex{
	int a,b;
	friend Complex sum(Complex o1,Complex o2);
	public:
	void set(int a,int b){
		this->a=a;
		this->b=b;
	}
	void dispaly(){
		cout<<a<<" + "<<b<<"i"<<endl;
	}
};
Complex sum(Complex o1,Complex o2){
	Complex o3;
	o3.set((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
int main(){
	Complex c1,c2,c3;
	c1.set(12,3);
	c2.set(4,7);
	c1.dispaly();
	c2.dispaly();
	c3=sum(c1,c2);
	c3.dispaly();
	
	return 0;
}
//friend class
#include<iostream>
using namespace std;
//farword declaraction
class Complex;
class Calculator{
	public:
	int add(int a,int b){
		return a+b;
	}
	int sum(Complex o1,Complex o2);
	
};

class Complex{
	int a,b;
	friend int Calculator::sum(Complex o1,Complex o2);
	public:
	void set(int a,int b){
		this->a=a;
		this->b=b;
	}
	void display(){
		cout<<a<<" + "<<b<<"i"<<endl;
	}
};
int Calculator::sum(Complex o1,Complex o2)
    {
		return (o1.b+o2.b);
	}
int main(){
	Complex c1,c2;
	c1.set(1,4);
	c2.set(3,7);
	c1.display();
	c2.display();
	Calculator c;
	int result=c.sum(c1,c2);
	cout<<"sum: "<<result<<endl;
	return 0;
}
//freiend class
#include<iostream>
using namespace std;
class complex;
class calculator{
   public:
   int sum(complex o1,complex o2);
};

class complex{
	int a,b;
	friend int calculator::sum(complex o1,complex o2);
	public:
	void set(int a,int b){
		this->a=a;
		this->b=b;
	}
	void dispaly(){
		cout<<a<<" + "<<b<<"i"<<endl;
	}
};
int calculator::sum(complex o1,complex o2){
	return o1.a+o2.a; 
}
int main(){
	complex c1,c2;
	c1.set(3,4);
	c2.set(3,4);
	c1.dispaly();
	c2.dispaly();
	calculator c;
	int result=c.sum(c1,c2);
	cout<<"result: "<<result<<endl;
	return  0;
}
//overiding concept in stack
#include<iostream>
using namespace std;
class Base {
	public:
	void show(){
		cout<<"Base class function\n";
	}	
};
class Child : public Base {
	public:
	void show();
};
void Child::show(){
	cout<<"child class function"<<endl;
}
int main(){
//	Base b;
//    b.show();
    cout<<endl;
	Child c;
	c.show();
	c.Base::show();//to call base class function
	cout<<endl;   
	return 0;
}
//overiding concept in stack or compile time memory
// Is early binding associated with runtime memory (like heap)?
//🔹 The short answer is:
//No, early binding is not associated with runtime memory (heap).
//It is associated with compile-time function resolution, not where the object is stored (stack or heap).
#include<iostream>
using namespace std;
class Base {
	public:
	void show(){//with void function we does not use "virtual" keyword so,this is Early Binding
		cout<<"Base class function\n";
	}	
};
class Child : public Base {
	public:
	void show();
};
void Child::show(){
	cout<<"child class function"<<endl;
}
int main(){
	Base* b;
	Child c;
	b=&c;
	//early binding
	b->show();
	return 0;
}
//overiding concept in heap or at runtime or in heap
#include<iostream>
using namespace std;
class Base {
	public:
	void virtual show(){//with void function we are using "virtual" keyword so,this is Late Binding
		cout<<"Base class function\n";
	}	
};
class Child : public Base {
	public:
	void show();
};
void Child::show(){
	cout<<"child class function"<<endl;
}
int main(){
	Base* b;
	Child c;
	b=&c;
	//early binding
	b->show();
	return 0;

}
//overiding concept in heap or at runtime or in heap and accessing the private functions of drieved class by virtual functions
#include<iostream>
using namespace std;
class Base {
	public:
	void virtual show(){//with void function we are using "virtual" keyword so,this is Late Binding
		cout<<"Base class function\n";
	}	
};
class Child : public Base {
	private:
	void show();
};
void Child::show(){
	
	
	cout<<"child class function"<<endl;
}
int main(){
	Base* b;
	Child c;
	b=&c;
	//early binding
	b->show();
	return 0;

}
#include<iostream>
using namespace std;
class Base{
	public:
	virtual void display()=0;//pure virtual function
};
class Derived:public Base{
	public:
	void display();
};
void Derived ::display(){
	cout<<"Derived class"<<endl;//definition of pure virtual function
}
int main(){
	Base* b;
	Derived d;
	b=&d;
	b->display();
	c.Base::dis(); 
	return 0;
}
//virtual destructors
#include<iostream>
using namespace std;
class Base{
	public:
	virtual ~Base(){
		cout<<"base destructor"<<endl;
	}
};
class Child:public Base{
	public:
	~Child(){
		cout<<"child destructor"<<endl;
	}
};
int main(){
	Base* b=new Child;
	delete b;
	return 0;
}
//pure virtual destructors
#include<iostream>
using namespace std;
class Base{
	public:
	virtual ~Base()=0;
};
Base::~Base(){
	cout<<"base destructor"<<endl;
}
class Child:public Base{
	public:
	~Child(){
		cout<<"child destructor called"<<endl;
	} 
};
int main(){
	Base* b=new Child;
	delete b;
	return 0;
}
#include<iostream>
using namespace std;
class base{
	public:
	virtual void show(){//late binding
		cout<<"base show"<<endl;
	}
};
class child:public base{
	public:
	void show(){
		cout<<"child show"<<endl;
	}
};
int main(){
	base* b;
	child c;
	b=&c;//upcasting
	b->show();
	return 0;
}
#include<iostream>
using namespace std;
class base{
	public:
	virtual 
	void show(){//Early binding
		cout<<"base show"<<endl;
	}
};
class child:public base{
	public:
	void show(){
		cout<<"child show"<<endl;
	}
};
int main(){
	base* b;
	child c;
	b=&c;
	b->show();
	c.base::show();
	return 0;
}
// Create a base class Person with a function display(). Derive a class Student and override the 
//display() function to show student-specific data. Call the function using a base class pointer?
#include<iostream>
using namespace std;
class person{
	public:
	void virtual display(){
		cout<<"person class"<<endl;
	}
};
class student:public person{
	public:
	void display(){
		cout<<"student class"<<endl;
	}
}; 
int main(){
	person* p=new student;
//	student s;
//	p=&s;
	p->display();
	delete p;
	return 0;
}

//✍Create a class Shape with a pure virtual function area(). Derive classes
// Circle and Rectangle and override area() to return appropriate values. Use base class pointers to call them.
//important concept........
#include<iostream>
#include<cmath>
using namespace std;
class Shape{
	public:
	virtual double area()=0;
};
class Circle : public Shape{
	double radius;
	public:
	Circle(double radius){
		this->radius=radius;
	}
	double area() override{
		return M_PI*radius*radius;
	}
};
class Rectangle : public Shape{
	double length,width;
	public:
	Rectangle(double length,double width){
		this->length=length;
		this->width=width;
	}
	double area() override{
		return length*width;
	} 
};
int main(){
	// 1. Using object directly
	cout<<"Using object directly\n";
	Circle c(3.4);
	cout<<"area of circle: "<<c.area()<<endl;
	Rectangle rec(3.4,4.6);
	cout<<"area of rectangle: "<<rec.area()<<endl;
	// 2. Using base class pointer
	cout<<"\nUsing base class pointer"<<endl;
	Shape* s1=new Circle(3.4);
	cout<<"area of circle: "<<s1->area()<<endl;
	Shape* s2=new Rectangle(3.4,4.6);
	cout<<"area of rectangle: "<<s2->area()<<endl;
//  3. Using base class reference
    cout<<"\nUsing base class reference"<<endl;
    Circle circle(3.4);
    Shape &reference=circle;
    cout<<"area of circle: "<<reference.area()<<endl;
    Rectangle r(3.4,4.6);
    Shape &ref= r;
    cout<<"area of rectangle: "<<ref.area()<<endl;
    delete s1;
    delete s2;
	return 0;
}
//virtual functions with different parameters overriding will not take place and base function will called
#include<iostream>
#include<cmath>
using namespace std;
class base{
	public:
	virtual void display(int x){
		cout<<"(base class)value of x: "<<x<<endl;
	}
};
class child:public base{
	
	void display(){
		cout<<"child class"<<endl;
	}
};
int main(){
	base* b;
	child c;
	b=&c;
	b->display(7);
	return 0;
}
//Can constructors be overridden? Why or why not?
//ans.Overriding only applies to virtual functions, including virtual destructors.
#include<iostream>
#include<cmath>
using namespace std;
class Shape{
	public:
	virtual ~Shape(){
		cout<<"shape destructor called"<<endl;
	}
	virtual double area()=0;
};
class Circle : public Shape{
	double radius;
	public:
	Circle(double r){
		radius=r;
	}
	double area() override{
		return M_PI*radius*radius;
	}
	~Circle() override{
		cout<<"radius destructor called"<<endl;
	}
};
class Ractangle : public Shape{
	double length,width;
	public:
	Ractangle(double l,double w){
		length=l;
		width=w;
	}
	double area() override{
		return length*width;
	}
	~Ractangle() override{
		cout<<"rectangle destructor is called"<<endl;
	}
};
int main(){
	Shape* s1=new Circle(5.0);
	cout<<"area of circle: "<<s1->area()<<endl;
	
	Shape* s2=new Ractangle(3.5,2.0);
	cout<<"area of rectangle: "<<s2->area()<<endl;
	
	cout<<"\n deleting s1(circle)"<<endl;
	delete s1;
	cout<<"\n deleting s2(rectangle)"<<endl;
	delete s2;
	return 0;
}*/
//Create an abstract class Employee with a pure virtual function calculateSalary().
//Create two derived classes: PermanentEmployee and ContractEmployee.
//Implement their own salary logic and call the function using base class pointer.
/*#include<iostream>
#include<cmath>
using namespace std;
class Employee{
	public:
	virtual double calculate_salary()=0;
};
class PT_Employee: public Employee{
	double wage_per_hour;
	double time_work;
	public:
	PT_Employee(double w,double t){
		wage_per_hour=w;
		time_work=t;
	}
	double calculate_salary() override{
		return 	wage_per_hour*time_work;
	}
};
class P_Employee: public Employee{
	double basicS,bonus;
	public:
	P_Employee(double bs,double b){
		basicS=bs;
		bonus=b;
	}
	double calculate_salary() override{
		return basicS*bonus;
	}
};
int main(){
	Employee* e=new PT_Employee(200,8.9);
	cout<<"part time employee salary is: "<<e->calculate_salary()<<endl;
	
	Employee* emp=new P_Employee(5.2,5.0);
	cout<<"permanent employee salary is: "<<emp->calculate_salary()<<endl;
	return 0;
}
//Demonstrate destructor behavior:
//Create a base class with a virtual destructor.
//Create a derived class and implement its own destructor.
//Use a base class pointer and delete a derived class object.
//Show correct order of destructor calls.
#include<iostream>
using namespace std;
class Base{
	public:
	virtual ~Base(){
		cout<<"Base destructor called"<<endl;
	}
};
class Derived : public Base{
	public:
	~Derived(){
		cout<<"child destructor called"<<endl;
	}
};
int main(){
	Base* b;
	Derived d;
	b=&d;
	
	cout<<"how destructor works\n";
    delete b;
	return 0;
}
//Interface Practice:
//Create an abstract class PaymentMethod with pure virtual functions:
//void pay(double amount)
//void refund(double amount)
//Derive CreditCard, UPI, and Cash classes and implement both functions.
#include<iostream>
using namespace std;
class PaymentMethod{
	public:
	virtual void pay(double amount)=0;
    virtual void refund(double amount)=0;
    virtual ~PaymentMethod(){
	
	}
};
class CreditCard : public PaymentMethod{
	public:
	void pay(double amount) override{
		cout<<amount<<" paid by using credit card"<<endl;
	}
	void refund(double amount) override{
		cout<<amount<<" refunded using credit card"<<endl;
	}
};
class UPI : public PaymentMethod{
	public:
	void pay(double amount) override{
		cout<<amount<<" paid by using UPI"<<endl;
	}
	void refund(double amount) override{
		cout<<amount<<" refunded using UPI"<<endl;
	}
};
int main(){
	cout<<"Credit card method class"<<endl;
	PaymentMethod* pm=new CreditCard;
	pm->pay(1200.0);
	pm->refund(200);
	delete pm;
	cout<<"UPI Method class"<<endl;
	PaymentMethod* PM=new UPI;
	PM->pay(1500);
	PM->refund(400);
	cout<<"destructor called"<<endl;
	delete PM;//delete only PM
	PM->~PaymentMethod();//delete all the things below
	cout<<"tabah hy khan";
	PaymentMethod* PMA=new UPI;
	PMA->pay(1500);
	PMA->refund(400);
	cout<<"destructor called"<<endl;
	delete PM;
	return 0;
}
*/
/*
//operator overloading 
#include<iostream>
using namespace std;
class Complex{
	double real,imag;
	public:
	Complex(){
		real=0;
		imag=0;
	}
	Complex(double r,double i){
		real=r;
		imag=i;
	}
	
	Complex operator +(Complex& obj2){
		Complex result;
		result.real=real+obj2.real;
		result.imag=imag+obj2.imag;
		return result;
	}
	
	void display(){
		cout<<real<<" + "<<imag<<endl;
	}
};
int main(){
	Complex c1(3.4,4.2);
	Complex c2(4.2,3.4);
	Complex c3=c1+c2;
	c3.display();
	return 0;
}
#include<iostream>
using namespace std;
class demo{
	int a;
	public:
	void input(){
		cout<<"Enter the int a: ";
		cin>>a;
	}
	demo operator -(demo& obj2){
		demo result;
		result.a=a-obj2.a;
		return result;
	}
	void display(){
		cout<<"the value of a is: "<<a<<endl;
	}
};
int main(){
	demo a,b,c;
	a.input();
	b.input();
	c=a-b;
	c.display();
	return 0;
}
//++ operator
#include<iostream>
using namespace std;
class demo{
	int a;
	public:
	void intput(){
		cout<<"Enter the number: ";
		cin>>a;
	}
	void output(){
		cout<<"output: "<<a<<endl;
	}
	void operator ++(){
		a=a+1;
	}
};
int main(){
	demo a,b,c;
	a.intput();
	cout<<"original value of a\n";
	a.output();
	cout<<"value of a after increament operator\n";
//	++a;
	a.operator ++();
	a.output();

	return 0;
}
#include<iostream>
using namespace std;
class demo{
	int x;
	public:
	void input(){
		cout<<"Enter number: ";
		cin>>x;
	}
	void dis(){
		cout<<"output: "<<x<<endl;
	}
	void operator --(int){
		cout<<x-1;
	}
};
int main(){
	demo a,b;
	a.input();
	cout<<"original value: ";
	a.dis();
	cout<<"after decreament value: ";
	a--;
	return 0;
}
#include<iostream>
using namespace std;
class demo{
	int a;
	public:
	void input(){
		cout<<"Enter the number: ";
		cin>>a;
	}
	void display(){
		cout<<"number is: "<<a<<endl;
	}
	void operator =(demo& b){
		a=b.a;
	} 
};
int main(){
	demo aa,bb;
	bb.input();
	bb.display();
	aa=bb;
	bb.display();
	return 0;
}*/

/*#include<iostream>
using namespace std;
class numbers 
{

//	int arr[5];
	/*	numbers()
		{
		   for(int i=0; i<5; i++)
		   {
		   	arr[i]=i+10;
		   }
		}
		
	
/*	numbers operator +(numbers ob)
	{
		numbers sum;
		     sum.n=n+ob.n;
		     return sum;
	}

 int operator -(numbers ob)
	{
		int diff;
		     diff=n-ob.n;
		     return diff;
		
	}
 
	void disp()
	{
		cout<<"The sum is:"<<n<<endl;
	}
	
friend ostream & operator <<(ostream &out, numbers &ob)
	{
		out<<"The number is: "<<ob.n<<endl<<"The Float is: "<<ob.f<<endl<<"The string is "<<ob.s;
		return out;
		
	}

friend istream & operator >>(istream &input, numbers &ob)
	{
		input>>ob.n>>ob.f>>ob.s;
		return input;	
	}
	*/	
/*	int operator [](int i)
	{
		if(i<5)
		return arr[3];
		else 
		return 0; 
	}
};

main()
{
	  //numbers obj3;
	  //cout<<obj1[3];
	  //cin>>obj1;
	  //cout<<obj1;  
	numbers results=(obj1+obj2)+obj3;
	results.disp();
	
	obj1-obj2;
	//  cout<<"The sum is: "<<obj1+obj2;
		
}
#include<iostream>
using namespace std;
class numbers 
{
int n;
	public:
    numbers(int val)
	{
		n=val;
	}
bool operator >(numbers ob)
{
	if(n>ob.n)
	return true;
	else 
	return false;
}
};

main()
{
    numbers obj1(34);
	numbers obj2(67);
	  
	if(obj1>obj2)
	{
	    cout<<"Obj1 is greater: "<<endl;
	}
	else
	{
	  cout<<"Obj2 is greater: "<<endl;
	}
}*/
//<operator overloading
/*#include<iostream>
using namespace std;
class demo{
	int a;
	public:
	demo(int value){
		a=value;
	}
	bool
	 operator <(demo obj){
		if(a<obj.a)
		{
			return true;
		}else{
			return false;
		}
	}
};
int main(){
	demo obj1(59);
	demo obj2(67);
	if(obj1<obj2)
	{
		cout<<"obj1 is less than obj2"<<endl;
	}else{
		cout<<"obj2 is less than obj1"<<endl;
	}
	return 0;
}
//+
#include<iostream>
using namespace std;
class demo{
	int n;
	public:
	demo(){
		
	}
	demo(int val){
		n=val;
	}
	void display(){
		cout<<"sum: "<<n<<endl;
	}
	demo operator +(demo& obj){
		demo result;
		result.n=n+obj.n;
		return result;
	}
};
int main(){
	demo obj1(45);
	demo obj2(45);
	demo obj3;
	obj3=obj1+obj2;
	obj3.display();
	return 0;
}
//++and --
#include<iostream>
using namespace std;
class demo{
	int n;
	public:
	demo(){
		
	}
	demo(int val){
		n=val;
	}
	void display(){
		cout<<"sum: "<<n<<endl;
	}
	void operator ++(){
		cout<<n+1;
	}
};
int main(){
	demo obj1(45);
	cout<<"value before"<<endl;
	obj1.display();
	cout<<"value after"<<endl;
	++obj1;
	
	return 0;
}

#include<iostream>
using namespace std;
class demo{
	int a;
	public:
	demo(){
		a=0;
	}
	demo(int val){
		a=val;
	}
	void dis(){
		cout<<"a: "<<a<<endl;
	}
	void operator =(demo obj){
		a=obj.a;
	}
};
int main(){
	demo obj1(33);
	demo obj2;
	obj1.dis();
	obj1=obj2;
	obj1.dis();
	obj2.dis();
	return 0;
}
#include<iostream>
using namespace std;
class demo{
	int a,b;
	public:
	demo(){
		a=0;
		b=0;
	}
	demo(int a,int b){
		this->a=a;
		this->b=b;
	}
	void dis(){
		cout<<"a: "<<a<<" b: "<<b<<endl;
	}
	void operator =(demo &obj2){
		a=obj2.a;
		b=obj2.b;
	}
};
int main(){
	demo d1(12,34);
	demo d2;
	d1=d2;
	d1.dis();
	d2.dis();
	return 0;
}
//Overloading + Operator (Addition of two objects)
#include <iostream>
using namespace std;

class numbers {
    int n;
public:
    numbers() {}
    numbers(int val) {
        n = val;
    }

    numbers operator +(numbers ob) {
        numbers sum;
        sum.n = n + ob.n;
        return sum;
    }

    void disp() {
        cout << "The sum is: " << n << endl;
    }
};

int main() {
    numbers obj1(10);
    numbers obj2(20);
    numbers result = obj1 + obj2;
    result.disp();
    return 0;
}
#include <iostream>
using namespace std;

class numbers {
    int arr[5];
public:
    numbers() {
        for (int i = 0; i < 5; i++)
            arr[i] = i + 10;
    }

    int operator [](int i) {
        if (i >= 0 && i < 5)
            return arr[i];
        else
            return 0;
    }
};

int main() {
    numbers obj;
    cout << "Value at index 3: " << obj[3] << endl;
    return 0;
}
#include <iostream>
using namespace std;

class numbers {
    int n;
    float f;
    string s;

public:
    friend istream& operator >>(istream &input, numbers &ob) {
        input >> ob.n >> ob.f >> ob.s;
        return input;
    }

    friend ostream& operator <<(ostream &out, numbers &ob) {
        out << "The number is: " << ob.n << endl;
        out << "The float is: " << ob.f << endl;
        out << "The string is: " << ob.s << endl;
        return out;
    }
};

int main() {
    numbers obj;
    cout << "Enter an int, float, and string: ";
    cin >> obj;
    cout << obj;
    return 0;
}

//3. Overload the >> and << operators
//Create a Student class with name, rollNo, and marks. Overload the 
//insertion (<<) and extraction (>>) operators to input and output student data.
#include<iostream>
using namespace std;
class demo{
	string name;
	int roll;
	int marks;
	public:
	friend istream& operator >>(istream& input,demo &d){
		cout<<"Enter the name: ";
		input>>d.name;
		cout<<"Enter the roll no: ";
		input>>d.roll;
		cout<<"Enter the marks: ";
		input>>d.marks;
		return input;
	}
	
	friend ostream& operator <<(ostream& output,demo d){
		output<<"name: "<<d.name<<endl;
		output<<"roll no: "<<d.roll<<endl;
		output<<"marks: "<<d.marks<<endl;
		return output;
	}
};
int main(){
	demo d;
	cin>>d;
	cout<<d;
	return 0;
}
//Assocoation 
#include<iostream>
using namespace std;
class Teacher{
	public:
	string  name;
	Teacher(string  n){
		name=n;
	}
};
class Student{
	public:
	string sname;
	Student(){
		
	}
	Student(string na){
		sname=na;
	}
	void display(Teacher& t){
		cout<<t.name<<" is teaching the "<<sname<<endl;
	}
};
int main(){
	Teacher t1("ali");
	Student s1("salman");
	s1.display(t1);
	return 0;
}
//Aggregation
#include<iostream>
using namespace std;
class Professor{
	string name;
	public:
	Professor(string name){
		this->name=name;
	}
	string getname(){
		return name;
	}
	
};
class Student{
	string sname;
	Professor* pro;
	public:
	
	Student(string sname,Professor& p){
		this->sname=sname;
		pro=&p;
	}
	
	void display(){
		cout<<pro->getname()<<" is teaching the "<<sname<<endl;
	}
};
int main(){
	Professor p("ali");
	Student s("Naveen",p);
	s.display();
	return 0;
}
//composition
#include<iostream>
using namespace std;
class Engine{
	public:
	void start(){
		cout<<"engine is started"<<endl;
	}
	void stop(){
		cout<<"engine is stopped"<<endl;
	}
};
class Car{
	public:
	Engine e;
	void start(){
		e.start();
		cout<<"car is started"<<endl;
	}
	void stop(){
		e.stop();
		cout<<"car is stopped"<<endl;
	}
};
int main(){
	Car c;
	c.start();
	c.stop();
	return 0;
}
//Create a Library class and a Book class. The Library has a method issueBook(Book b).
//Demonstrate how the Library can access the Book information without storing it.
#include<iostream>
using namespace std;
class Book{
	string bName;
	string bTitle;
	string author;
	public:
	Book(string n,string t,string a){
		bName=n;
		bTitle=t;
		author=a;
	}
	string getbn(){
		return bName;
	}
	string getbt(){
		return bTitle;
	}
	string getauthor(){
		return author;
	}
};
class Library{
	string bNo;
	public:
	Library(string bNo){
		this->bNo=bNo;
	}
	void issueBook(Book b){
		cout<<"book name: "<<b.getbn()<<endl;
		cout<<"book title: "<<b.getbt()<<endl;
		cout<<"author name: "<<b.getauthor()<<endl;
		cout<<"book issued: "<<bNo<<endl;
	}
};
int main(){
	Book b("Quran Majeed","Al Quran","Allah Almighty");
	Library l("1412 Aj");
	l.issueBook(b);
	return 0;
}
#include<iostream>
using namespace std;
class Teacher;
class Student{
	public:
	string sname;
	Teacher* t;
	Student(string sn){
		sname=sn;
		t=nullptr;
	}
//	void s_display(){
//		if(t!=nullptr){
//			cout<<t->name<<" is teaching the "<<sname<<endl;
//		}
//		
//	}
};
class Teacher{
	public:
	string name;
	Student* stu;
	Teacher(){
		name="";
		stu=nullptr;
	}
	Teacher(string n,Student &s){
		name=n;
		stu=&s;
	}
	
	void display(){
		if(stu!=nullptr)
		{
			cout<<name<<" is teaching "<<stu->sname<<endl;
		}
		
	}
};

int main(){
	
	Student s("Wahid");
	Teacher t("Ali",s);
//	t.s=&s;
//	s.t=&t;
//	t.display();
//	s.s_display();
	t.display();
	return 0;
}*/'