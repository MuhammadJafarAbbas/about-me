/*#include<iostream>
using namespace std;
class marks{
	protected:
	string name;
	int roll;
	int marksP;
	int marksC;
	int marksM;
	public:
	marks(string,int,int,int,int);
	
};
marks::marks(string n,int r,int p,int c,int m){
	name=n;
	roll=r;
	marksP=p;
	marksC=c;
	marksM=m;
}
class student1 : public marks{
	public:
	student1(string n,int r,int p,int c,int m) : marks(n,r,p,c,m){};
	void cal(){
		int  total;
		float ave;
		total=marksP+marksC+marksM;
		ave=total/3;
		cout<<"averege(student1): "<<ave<<endl;
	}
};
class student2: public marks{
	public:
	student2(string n,int r,int p,int c,int m) : marks(n,r,p,c,m){};
	void cal(){
		int  total;
		float ave;
		total=marksP+marksC+marksM;
		ave=total/3;
		cout<<"averege(student2): "<<ave<<endl;
	}
};
int main(){
	student1 stu("Ali",1012,67,89,97);
	student2 stud("Ahmad",422,99,56,89);
	stu.cal();
	stud.cal();
	return 0;
}

#include<iostream>
using namespace std;
class Area{
	public:
	int length;
	int width;
	void input(){
		cout<<"Enter length: ";
		cin>>length;
		cout<<"Enter width: ";
		cin>>width;
	}
};
class Rectangle : public Area{
	public:
	void cal(){
		int area;
	    area=length*width;
	    cout<<"area: "<<area<<endl;
	}
};
class parameter : public Area{
	public:
	void calculate(){
	//	Area::input();
		int area;
	    area=(length+width)*2;
	    cout<<"parameter: "<<area;
	}
};
int main(){
	Rectangle r;
	parameter p;
	p.input();
	p.calculate();
	cout<<endl;
	r.input();
	r.cal();
	return 0;
}*/
/*#include<iostream>
using namespace std;
class student{
	public:
		int x;
		static int count;
		student(){
			count++;
		}
		//static function
		static get(){
			return count;
		}
};
int student::count=0;
int main(){
	//we can declare static functions but we can use only static variables
	//we can acess static member without object
	cout<<"initial count: "<<student::count;
	//with object
	student s1;
	cout<<"\nsecound count: "<<s1.count;
	//calling static function
	cout<<"\ncalling function: "<<student::get;
    return 0;
}
//multilevel inheritance
#include<iostream>
using namespace std;
class animal{
	public:
	void eat(){
		cout<<"Animal eat\n";
	}
};
class mammel:public animal{
	void walk(){
		cout<<"mammel walks\n";
	}
};
class dog:public mammel{
	void bark(){
		cout<<"dog bark";
	}
};
int main(){
	dog d;
	d.eat();
	return 0;
}
#include<iostream>
using namespace std;
class shape{
	public:
	int length;
	int width;
	int height;
	shape(int l,int w){
		length=l;
		width=w;
	}
};
class rectangle : public shape{
	rectangle(int l,int w) : shape(l,w){};
	void area(){
		cout<<"area: "<<length*width;
	}
};
class box : public rectangle{
void volume(){
	box (int l,int w,int h) : rectangle(l,w),height(h){};
	cout<<"\nbox: "<<length*width*height;
}	
};
int main(){
	box b1(12,3);
	return 0;
}
*/
/*#include <iostream>
using namespace std;

class shape {
public:
    int length;
    int width;

    shape(int l, int w) {
        length = l;
        width = w;
    }
};

class rectangle : public shape {
public:
    rectangle(int l, int w) : shape(l, w) {}

    void area() {
        cout << "Area: " << length * width << endl;
    }
};

class box : public rectangle {
public:
    int height;

    box(int l, int w, int h) : rectangle(l, w) {
        height = h;
    }

    void volume() {
        cout << "Volume: " << length * width * height << endl;
    }
};

int main() {
    box b1(12, 3, 4);
    b1.area();
    b1.volume();
    return 0;
}
#include <iostream>
using namespace std;

class Employee {
protected:
    int empId;
    string name;
    string desigination;
public:
    Employee() {
        empId = 0;
        name = "";
        desigination = "";
    }

    void input() {
        cout << "\nEnter employee id: ";
        cin >> empId;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the designation: ";
        cin >> desigination;
    }

    void display() {
        cout << "\nEmployee ID: " << empId;
        cout << "\nEmployee Name: " << name;
        cout << "\nEmployee Designation: " << desigination;
    }
};

class Salary : public Employee {
private:
    int basicPay;
    int hrA;
    int dA;
    int pF;

public:
    Salary() {
        basicPay = 0;
        hrA = 0;
        dA = 0;
        pF = 0;
    }

    int getEmpDetails() {
        input();
        cout << "Enter employee basic pay: ";
        cin >> basicPay;
        cout << "Enter HRA: ";
        cin >> hrA;
        cout << "Enter DA: ";
        cin >> dA;
        cout << "Enter PF: ";
        cin >> pF;

        int netPay = basicPay + hrA + dA - pF;
        return netPay;
    }

    void dis() {
        display(); // calling Employee's display
        cout << "\nBasic Pay: " << basicPay;
        cout << "\nHRA: " << hrA;
        cout << "\nDA: " << dA;
        cout << "\nPF: " << pF;
        cout << "\nNet Pay: " << (basicPay + hrA + dA - pF);
    }
};

int main() {
    Salary s;
    s.getEmpDetails();
    s.dis();
    return 0;
}

#include <iostream>
using namespace std;
class Employee{
	int empId;
	string name;
	string desigination;
	public:
	Employee(){
		empId=0;
		name="";
		desigination="";
	}
	void input(){
		cout<<"\nEnter employee id: ";
		cin>>empId;
		cout<<"\nEnter the name: ";
		cin>>name;
		cout<<"\nEnter the desigination: ";
		cin>>desigination;
	}
	void empdis(){
		cout<<"\nemployee id: "<<empId;
		cout<<"\nemployee name: "<<name;
		cout<<"\nemployee desigination: "<<desigination;
	}
};
class Salary : public Employee{
	public:
	int basicPay;
	int hrA;
	int dA;
	int pF;
	Salary(){
	   basicPay=0;
	   hrA=0;
	   dA=0;
	   pF=0;
	}
    int netPay;
	int  getEmpDetails(){
		
		input();
		cout<<"\nEnter employee basic pay: ";
		cin>>basicPay;
		cout<<"\nEnter the hra: ";
		cin>>hrA;
		cout<<"\nEnter the dA: ";
		cin>>dA;
		cout<<"\nEnter the pF: ";
		cin>>pF;
	}
	int total(){
		netPay=basicPay+hrA+dA-pF;
		return netPay;
	}
	void dis(){
		Employee::display();
		cout<<"\nemployee basic pay: "<<basicPay;
		cout<<"\nemployee hRa: "<<hrA;
		cout<<"\nemployee dA: "<<dA;
		cout<<"\nemployee pF: "<<pF;
		cout<<"\n net pay: "<<netPay;
	}
};
class bankCredit : public Salary{
	public:
	string bankName;
	int accNumber;
	cout<<"Enter bank Name: ";
	cin>>bankName;
	cout<<"Enter account Number: ";
	cin>>accNumber;
	void display(){
		cout<<"bank name: "<<bankName;
		cout<<"accNumber: "<<accNumber;
	}
};
int main(){
	
	return 0;
}*/
/*#include <iostream>
using namespace std;
class Employee {
protected:
    int empID;
    string name, designation;
public:
    void getInput() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Designation: ";
        getline(cin, designation);
    }
    void display() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
    }
};
class Salary : public Employee {
protected:
    float basicPay, hra, da, pf, netPay;
public:
    void getEmployeeDetails() {
        getInput(); 
	    cout <<"Enter Basic Pay: ";
        cin >>basicPay;
        cout <<"Enter HRA: ";
        cin >>hra;
        cout <<"Enter DA: ";
        cin >>da;
        cout <<"Enter PF: ";
        cin >>pf;
        netPay=basicPay+hra+da-pf;
    }
    void displaySalary() {
        display(); 
        cout<<"Basic Pay: "<<basicPay<<endl;
        cout<<"HRA: " <<hra<<endl;
        cout<<"DA: " <<da<<endl;
        cout<<"PF: " <<pf<<endl;
        cout<<"Net Pay: "<<netPay<<endl;
    }
    float getNetPay() {
        return netPay;
    }
};
class BankCredit : public Salary{
private:
    string bankName;
    int accountNumber;
public:
    void getBankDetails() {
        getEmployeeDetails(); 
        cin.ignore(); 
        cout << "Enter Bank Name: ";
        getline(cin, bankName);
        cout<<"Enter Account Number: ";
        cin>>accountNumber;
    }
    void printDetails() {
        displaySalary();
        cout << "Bank Name: " << bankName<<endl;
        cout << "Account Number: " << accountNumber<<endl;
    }
};
int main() {
    int a=1;
    BankCredit employee[a];
    for (int i=0; i<a;i++) {
        cout << "\nEnter details for employee " <<i+1<< ":\n";
        employee[i].getBankDetails();
    }
    for (int i=0;i<a;i++){
        cout <<"\nDetails of employee "<<i+1<<":\n";
        employee[i].printDetails();
    }
    return 0;
}

#include<iostream>
using namespace std;
class base1{
	public:
	base1(int x){
		cout<<"the value of x is: "<<x<<endl;
	}
};
class base2{
	public:
	base2(int y){
		cout<<"the value of y is: "<<y<<endl;
	}
};
class drived : public base1,public base2{
	public:
	drived(int x,int y) : base1(x),base2(y){
		cout<<"drived constructor"<<endl;
	}
};
int main(){
	drived d(5,9);
	return 0;
}
#include<iostream>
using namespace std;
class base1{
	protected:
	base1(int x){
		cout<<"value of x is: "<<x<<endl;
	}
};
class base2{
	protected:
	base2(int y){
		cout<<"value of y is: "<<y<<endl;
	}
};
class drived : public base1,public base2{
	public:
	drived(int x,int y) : base1(x),base2(y){
		cout<<"drived class constructor"<<endl;
	}
};
int main(){
	drived d(90,45);
	return 0;
}*/
//#include<iostream>
//using namespace std;
//void swap(int *a,int *b){
//	int temp=*a;
//	*a=*b;
//	*b=temp;
//}
//int main(){
//	int x=10,y=20;
//	cout<<"Before swap"<<endl;
//	cout<<"x: "<<x<<" and "<<"y: "<<y<<endl;
//	swap(&x,&y);
//	cout<<"After swap"<<endl;
//	cout<<"x: "<<x<<" and "<<"y: "<<y<<endl;
//	return 0;
//}
/*#include <iostream>
#include <string>
using namespace std;
const int MAX_STUDENTS = 100;
class Student {
public:
    int rollNo;
    string name;
    int age;
    string course;

    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Course: ";
        getline(cin, course);
    }

    void display() const {
        cout << "Roll No: " << rollNo << "\n"
             << "Name: " << name << "\n"
             << "Age: " << age << "\n"
             << "Course: " << course << "\n";
    }
};

// Global variables
Student students[MAX_STUDENTS];
int studentCount = 0;

// Function Prototypes
void addStudent();
void displayAll();
void searchStudent();
void updateStudent();
void deleteStudent();

int main() {
    int choice;
    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 6);

    return 0;
}

// Function Definitions

void addStudent() {
    if(studentCount >= MAX_STUDENTS) {
        cout << "Student limit reached!\n";
        return;
    }
    cout << "\nEnter details for student " << (studentCount + 1) << ":\n";
    students[studentCount].input();
    studentCount++;
    cout << "Student added successfully.\n";
}

void displayAll() {
    if(studentCount == 0) {
        cout << "No student records found.\n";
        return;
    }
    for(int i = 0; i < studentCount; i++) {
        cout << "\nStudent " << (i + 1) << ":\n";
        students[i].display();
    }
}

void searchStudent() {
    int roll;
    cout << "Enter Roll No to search: ";
    cin >> roll;
    for(int i = 0; i < studentCount; i++) {
        if(students[i].rollNo == roll) {
            cout << "Student found:\n";
            students[i].display();
            return;
        }
    }
    cout << "Student with Roll No " << roll << " not found.\n";
}

void updateStudent() {
    int roll;
    cout << "Enter Roll No to update: ";
    cin >> roll;
    for(int i = 0; i < studentCount; i++) {
        if(students[i].rollNo == roll) {
            cout << "Enter new details:\n";
            students[i].input();
            cout << "Record updated.\n";
            return;
        }
    }
    cout << "Student with Roll No " << roll << " not found.\n";
}

void deleteStudent() {
    int roll;
    cout << "Enter Roll No to delete: ";
    cin >> roll;
    for(int i = 0; i < studentCount; i++) {
        if(students[i].rollNo == roll) {
            for(int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            cout << "Student deleted successfully.\n";
            return;
        }
    }
    cout << "Student with Roll No " << roll << " not found.\n";
}

#include<iostream>
using namespace std;
int main(){
	int *p;
	int *q;
	int i;
	p=new int[5];
	p[0]=5;
	for(int i=1;i<5;i++)
	{
		p[i]=p[i-1]+2*i;
	}
	cout<<"\narray of p: ";
	
	return 0;
}*/
//#include<iostream>
//using namespace std;
//
//int main() {
//    int *arr = new int[5];
//    
//    cout << "Enter 5 integers: ";
//    for (int i = 0; i < 5; i++) {
//        cin >> arr[i];
//    }
//
//    int *newArr = new int[10];
//    for (int i = 0; i < 5; i++) {
//        newArr[i] = arr[i];
//    }
//    
//    cout << "Enter 5 more integers: ";
//    for (int i = 5; i < 10; i++) {
//        cin >> newArr[i];
//    }
//
//    cout << "Updated array: ";
//    for (int i = 0; i < 10; i++) {
//        cout << newArr[i] << " ";
//    }
//    cout << endl;
//
//    delete[] arr;
//    delete[] newArr;
//
//    return 0;
//}
/*
#include<iostream>
using namespace std;
int main(){
	int *arr=new int[5];
	cout<<"Enter five integers: ";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	int *newArr=new int[10];
	for(int i=0;i<5;i++)
	{
		newArr[i]=arr[i];
	}
	cout<<"\nEnter five more integers: ";
	for(int i=5;i<10;i++)
	{
		cin>>newArr[i];
	}
	cout<<"updated array is: ";
	for(int i=0;i<10;i++)
	{
		cout<<newArr[i]<<" ";
	}
	delete[] arr;

	delete[] newArr;
}
#include<iostream>
using namespace std;
int main(){
	string *ptr=new string[5];
	cout<<"Enter data\n";
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the name student: "<<ptr[i];
		cin>>ptr[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<"\nEnter the name student: "<<ptr[i];
		cout<<ptr[i];
	}
}
#include<iostream>
using namespace std;
int main(){
	float *arr=new float[5];
	cout<<"Enter the numbers to take inputs\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	float sum;
	for(int i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	float averege;
	for(int i=0;i<5;i++)
	{
		averege=sum/5.0;
	}
	cout<<"sum: "<<sum<<endl;
	cout<<"averege: "<<averege;
	delete[] arr;
	return 0;
}
#include<iostream>
using namespace std;
int main(){
	int *arr=new int[10];
	cout<<"Enter the elements";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	int sum1=0,sum2=0,sum=0;
	cout<<"\nfirst array";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
		sum1+=arr[i];
	}
	int *array=new int[10];
	cout<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>array[i];
	}
	cout<<"\nsecond  array";
	for(int i=0;i<10;i++)
	{
		cout<<array[i]<<" ";
		sum2+=array[i];
	}
	int total;
	total=sum1+sum2;
	cout<<"\nsum: "<<total;
	delete[] arr;
	delete[] array; 
	return 0;
}
#include<iostream>
using namespace std;
class AreaCalculator{
protected:
    float length;
	float width;
	float area=0;
	public:
	AreaCalculator(float  l,float w){
		length=l;
		width=w;
	}	
	
	float CalculatorArea(){
		area=length*width;
		return area;
	}
};

class perimeter : public AreaCalculator{
	public:
	perimeter(float l,float w) : AreaCalculator(l,w){
		length=l;
		width=w;
	}
	float Perimeterc;
	float calPerimeter(){
		Perimeterc=(length+width)*2;
		return Perimeterc;
	}
};
int main(){
	perimeter p(12,3);
	p.AreaCalculator();
	p.
	return 0;
}
#include<iostream>
using namespace std;
class person{
	protected:
	string name;
	int id;
	public:
	person(string n,int i){
		name=n;
		id=i;
	}
};

class employee : public person{
	protected:
	string dep;
	int salary;
	public:
	employee(string n,int i,string d,int sal) : person(n,i){
		dep=d;
		salary=sal;
	}
};



class student : public person{
	protected:
	string course;
	double gpa;
	public:
	student(string n,int i,string c,double g) : person(n,i){
		course=c;
		gpa=g;
	}
	
};

class alumni : public student{
	protected:
	int gyear;
	string degree;
	public:
	alumni(string n,int i,string c,double g,int gy,string deg) : student(n,i,c,g){
		gyear=gy;
		degree=deg;
	}
	
	void dis(){
		cout<<"\nAlumni Information\n";
	    cout<<"name: "<<name<<endl;
		cout<<"id: "<<id<<endl;	
		cout<<"course: "<<course<<endl;
		cout<<"cgpa: "<<gpa<<endl;
		cout<<"Graduation year: "<<gyear<<endl;
		cout<<"degree: "<<degree<<endl;
	}
};
class staff : public employee{
	protected:
	string jobTitle;
	string department;
	public:
	staff(string n,int i,string d,int sal,string job,string dep) : employee(n,i,d,sal){
		jobTitle=job;
		department=dep;
		
	}
	
	void dis(){
		cout<<"Staff Information\n";
		cout<<"name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
		cout<<"department: "<<dep<<endl;
		cout<<"salary: "<<salary<<endl;
		cout<<"Job title: "<<jobTitle<<endl;
		cout<<"department: "<<department<<endl;
	}
}; 
main(){
	staff s("Ali Khan",1133,"cs",45000,"Professor","computer science");
	s.dis();
	
	alumni a("Taha Faiz",1122,"c++",3.8,2016,"IT");
	a.dis();
	return 0;
}*/
//QN02
#include<iostream>
using namespace std;
class Product{
	protected:
	string productName;
	double price;
	public:
	Product(string productName,double price){
		this->productName=productName;
		this->price=price;
	} 
	
};

class Electronics : public Product{
	protected:
	string brand;
	int model;
	public:
	Electronics(string productName,double price,string brand,int model) : Product(productName,price){
		this->brand=brand;
		this->model=model;
	}
	
};

class smartPhone : public Electronics{
	protected:
	string ram;
	string oSystem;
	public:
	smartPhone(string productName,double price,string brand,int model,string ram,string oSystem) : Electronics(productName,price,brand,model){
		this->ram=ram;
		this->oSystem=oSystem;
	}
	
	void dis(){
		cout<<"Product Name: "<<productName<<endl;
		cout<<"Price: "<<price<<endl;
		cout<<"Brand: "<<brand<<endl;
		cout<<"Model: "<<model<<endl;
		cout<<"Ram: "<<ram<<endl;
		cout<<"Operating System: "<<oSystem<<endl;
	}
};

class Fashion : public Product{
	protected:
	string fashionType;
	string size;
	public:
	Fashion(string productName,double price,string fashionType,string size) : Product(productName,price){
		this->fashionType=fashionType;
		this->size=size;
	}
};

class Clothing : public Fashion{
	protected:
	string material;
	public:
	Clothing(string productName,double price,string fashionType,string size,string material) : Fashion(productName,price,fashionType,size){
		this->material=material;
	}
	
	void dis(){
		cout<<"\nProduct Name: "<<productName<<endl;
		cout<<"Price: "<<price<<endl;
		cout<<"Fashion Type: "<<fashionType<<endl;
		cout<<"Size: "<<size<<endl;
		cout<<"Material: "<<material<<endl;
	}
};

class Accessories : public Fashion{
	protected:
	string style;
	public:
	Accessories(string productName,double price,string fashionType,string size,string style) : Fashion(productName,price,fashionType,size){
		this->style=style;
	}
	
	void dis(){
		cout<<"\nProduct Name: "<<productName<<endl;
		cout<<"Price: "<<price<<endl;
		cout<<"Fashion Type: "<<fashionType<<endl;
		cout<<"Size: "<<size<<endl;
		cout<<"Material: "<<style<<endl;
	}
};

int main(){
	smartPhone s("Dell",16000,"Japan",2022,"128GB","Leneveo");
	s.dis();
	
	Clothing c("J.",1500,"Saraki","Medium","Good");
	c.dis();
	
	Accessories a("Lifeboy",150,"handwash","medium","red");
	a.dis();
	return 0;
}