//QN02
/*#include<iostream>
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

class Promotion{
	protected:
	string pType;
	double discountP;
	public:
	Promotion(string pType,double discountP){
		this->pType=pType;
		this->discountP=discountP;
	}
};

class DealOfDay : public Product , public Promotion{
	public:
	DealOfDay(string productName,double price,string pType,double discountP) : Product(productName,price) , Promotion(pType,discountP){
	
	}
	
	void dis(){
	    cout<<"\nProduct Name: "<<productName<<endl;
		cout<<"Price: "<<price<<endl;
		cout<<"Product Type: "<<pType<<endl;
		cout<<"Discount Price: "<<discountP<<endl;	
	}
};
int main(){
    smartPhone s("Dell",16000,"Japan",2022,"128GB","Leneveo");
	Clothing c("J.",1500,"Saraki","Medium","Good");	
	Accessories a("Lifeboy",150,"handwash","medium","red");
	DealOfDay d("Bat",1500,"Good",500);
	while(true){
		cout<<"====WELCOME TO EMPOREIUM===="<<endl;
		cout<<"Enter your choice"<<endl;
		cout<<"1.to buy smart phones\n";
		cout<<"2.to buy clothing\n";
		cout<<"3.to buy Accessories\n";
		cout<<"4.to get deal of day \n";
		cout<<"5.to Exit"<<endl;
		int choice;
		cout<<"Enter choice: ";
		cin>>choice;
		switch(choice){
			case 1:
	        s.dis();
	        break;
	        case 2:
	        c.dis();
	        break;
	        case 3:
	        a.dis();
	        break;
	        case 4:
        	d.dis();
        	break;
        	case 5:
        	cout<<"Thanks for using our system"<<endl;
        	default:
        	break;
		}
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
	Person(string name,int age){
		this->name=name;
		this->age=age;
	}
};

class Staff :public Person{
	protected:
	int id;
	public:
	Staff(string name,int age,int id) : Person(name,age){
		this->id=id;
	}
}; 
class Doctor :public Staff{
	protected:
	string specilization;
	public:
	Doctor(string name,int age,int id,string specilization) : Staff(name,age,id){
		this->specilization=specilization;
	}
};

class Nurse : public Staff{
	protected:
	string experience;
	public:
	Nurse(string name,int age,int id,string experience) : Staff(name,age,id){
		this->experience=experience;
	}
};

class Surgen : public Doctor{
   public:
   double sHours;
   Surgen(string name,int age,int id,string specilization,double sHours) : Doctor(name,age,id,specilization){
        this->sHours=sHours; 	
   }
   	
};
int main(){
	Surgen s("ali",22,234,"bs",33.4);
	return 0;
}
#include<iostream>
using namespace std;
//student
//male
//female
//boy
//girl
class Student{
	protected:
	string name;
	int roll;
	public:
	Student(string name,int roll){
		this->name=name;
		this->roll=roll;
	}
};

class Male{
	protected:
	string kam;
	public:
	Male(string kam) {
		this->kam=kam;
	}
};

class FeMale{
	protected:
	string makar;
	public:
	FeMale(string makar){
		this->makar=makar;
	}
};

class Boy : public Student , public Male{
	public:
	int fun;
	Boy(string name,int roll,string kam,int fun) : Student(name,roll),Male(kam){
		this->fun=fun;
	}
	
	void dis(){
		cout<<"Name: "<<name<<endl;
		cout<<"Roll No: "<<roll<<endl;
		cout<<"Papulation: "<<kam<<endl;
		cout<<"Function: "<<fun<<endl;
	}
};

class Girl : public Student , public FeMale{
	public:
	int fun;
	Girl(string name,int roll,string makar,int fun) : Student(name,roll),FeMale(makar){
		this->fun=fun;
	}
	
	void dis(){
		cout<<"Name: "<<name<<endl;
		cout<<"Roll No: "<<roll<<endl;
		cout<<"Makar: "<<makar<<endl;
		cout<<"Function: "<<fun<<endl;
	}
};
int main(){
	Girl g("as",22,"rg",0);
	return 0;
}
#include<iostream>
using namespace std;
class Humen{
	protected:
	string name;
	int age;
	public:
		
};
class Engineer : virtual public Humen{
	protected:
	string specilization;
	public:
		
};
class Youtuber : virtual public Humen{
	protected:
	int subscribers;
	public:
		
};
class Me : public Engineer , public Youtuber{
	public:
	Me(string name,int age,string specilization,int subscribers){
		this->name=name;
		this->age=age;
		this->specilization=specilization;
		this->subscribers=subscribers;
	}
	
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"subscribers: "<<subscribers<<endl;
		cout<<"specilization: "<<specilization<<endl;
	}
};
int main(){
	Me m("ali",32,"CS",56700);
	m.dis();
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;
class Vehicle{
	protected:
	string brand;
	int model;
	int rNumber;
	public:
	Vehicle(string brand,int model,int rNumber){
		this->brand=brand;
		this->model=model;
		this->rNumber=rNumber;
	}
	
};

class Car : public Vehicle{
	public:
	string eCapacity;
	Car(string brand,int model,int rNumber,string eCapacity) : Vehicle(brand,model,rNumber){
		this->eCapacity=eCapacity;
	}
	void dis(){
		cout<<"\nBrand: "<<brand<<endl;
		cout<<"Model: "<<model<<endl;
		cout<<"Regestiration Number: "<<rNumber<<endl;
		cout<<"Engine Capacity: "<<eCapacity<<endl<<endl;
	}
};

class Truck : public Vehicle{
	public:
	string loadCapacity;
	Truck(string brand,int model,int rNumber,string loadCapacity) : Vehicle(brand,model,rNumber){
		this->loadCapacity=loadCapacity;
	}
	void dis(){
		cout<<"\nBrand: "<<brand<<endl;
		cout<<"Model: "<<model<<endl;
		cout<<"Regestiration Number: "<<rNumber<<endl;
		cout<<"Engine Capacity: "<<loadCapacity<<endl<<endl;
	}
};

class Bike : public Vehicle{
	public:
	string eCapacity;
	Bike(string brand,int model,int rNumber,string eCapacity) : Vehicle(brand,model,rNumber){
		this->eCapacity=eCapacity;
	}
	void dis(){
		cout<<"\nBrand: "<<brand<<endl;
		cout<<"Model: "<<model<<endl;
		cout<<"Regestiration Number: "<<rNumber<<endl;
		cout<<"Engine Capacity: "<<eCapacity<<endl<<endl;
	}
};
int main() {
	string brand;
	int model;
	int rNumber;
	string eCapacity;
	string loadCapacity;
	cout<<"===Welcome to Jafar Garage===\n";
	cout<<"Enter the car brand: ";
	getline(cin,brand);
	cout<<"Enter the model(int): ";
	cin>>model;
	cout<<"Enter the Reg Number(int): ";
	cin>>rNumber;
	cout<<"Enter the Engine Capacity: ";
	cin.ignore();
	getline(cin,eCapacity);
	Car c(brand,model,rNumber,eCapacity);
	c.dis();
	
	cout<<"Enter the Truck brand: ";
	getline(cin,brand);
	cout<<"Enter the model(int): ";
	cin>>model;
	cout<<"Enter the Reg Number(int): ";
	cin>>rNumber;
	cout<<"Enter the load Capacity: ";
	cin.ignore();
	getline(cin,loadCapacity);
	Truck t(brand,model,rNumber,loadCapacity);
	t.dis();
	
	cout<<"Enter the bike brand: ";
	getline(cin,brand);
	cout<<"Enter the model(int): ";
	cin>>model;
	cout<<"Enter the Reg Number(int): ";
	cin>>rNumber;
	cout<<"Enter the Engine Capacity: ";
	cin.ignore();
	getline(cin,eCapacity);
	Bike b(brand,model,rNumber,eCapacity);
	b.dis();
    return 0;
}
#include<iostream>
using namespace std;
class Employee{
	protected:
	string name;
	int age;
	public:
	Employee(string name,int age){
		this->name=name;
		this->age=age;
	}
	
};

class Engineer : virtual public Employee{
	protected:
	string spiecalist;
	public:
	Engineer(string name,int age,string spiecalist) : Employee(name,age){
		this->spiecalist=spiecalist;
	}
};

class PRspiecalist : virtual public Employee{
	protected:
	string mSpoker;
	public:
	PRspiecalist(string name,int age,string  mSpoker) : Employee(name,age){
		this-> mSpoker = mSpoker;
	}
};

class TechCommunicator : public Engineer , public PRspiecalist{
	public:
	TechCommunicator(string name,int age,string spiecalist,string mSpoker) :Employee(name,age), Engineer(name,age,spiecalist),PRspiecalist(name,age,mSpoker){
		
	}
	
	void dis(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Spiecalist: "<<spiecalist<<endl;
		cout<<"Type of Spoker: "<<mSpoker<<endl;
	}
};
int main(){
	TechCommunicator t("Ali",22,"Web Developer","Motivational Speaker");
	t.dis();
	return 0;
}
//virtual inheritence to avoid from diamond problem
#include<iostream>
using namespace std;
class Humen{
	protected:
	string name;
	int age;
	public:
	Humen(string name,int age){
		this->name=name;
		this->age=age;
	}
		
};
class Engineer : virtual public Humen{
	protected:
	string specilization;
	public:
	Engineer(string name,int age,string specilization) : Humen(name,age){
		this->specilization=specilization;
	}
		
};
class Youtuber : virtual public Humen{
	protected:
	int subscribers;
	public:
	Youtuber(string name,int age,int subscribers ) : Humen(name,age){
		this->subscribers=subscribers;
	}	
};
class Me : public Engineer , public Youtuber{
	public:
	Me(string name,int age,string specilization,int subscribers) : Humen(name,age),Engineer( name,age,specilization),Youtuber(name,age,subscribers){
		
	}
	
	void dis(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"subscribers: "<<subscribers<<endl;
		cout<<"specilization: "<<specilization<<endl;
	}
};
int main(){
	Me m("ali",32,"CS",56700);
	m.dis();
	return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
class Shape{
	public:
	calRadius();	
};
class Circle : public Shape{
	protected:
	double radius=12;
	public:
	void  calRadius(){
		cout<<"circle: "<< M_PI*radius*radius<<endl;
	}	
};


int main(){
	Shape calRaius();
	return 0;
}
#include<iostream>
#include<string>
using namespace std;

const int numSubjects=5;
const int maxStudent=1;

class Person{
	protected:
	string name;
	int roll;
	public:
	void inputPerson(){
		cout<<"Enter the name: ";
		getline(cin,name);
		cout<<"Enter roll no: ";
		cin>>roll;
		cin.ignore();
	}
	
	void personDis(){
		cout<<"name:    "<<name<<endl;
		cout<<"roll no: "<<roll<<endl;
	}
};
class Student : public Person{
	protected:
	int marks[numSubjects];
	public:
    void inputMarks(){
    	cout<<"Enter the marks for "<<numSubjects<<" students"<<endl;
	       for(int i=0;i<numSubjects;i++){
		   cout<<"subject"<<i+1<<": ";
		   cin>>marks[i];
		   cin.ignore();
	    }  
	}
	
	void studentDis(){
		for(int i=0;i<numSubjects;i++){
		cout<<"subject"<<i+1<<": ";
		cout<<marks[i];
	    }
	    cout<<endl;
	}
};

class Result : public Student{
	private:
	int total=0;
	double averege;
	public:
	void result(){
		for(int i=0;i<numSubjects;i++){
		   total+=marks[i];
	    }
	    averege=(total)/numSubjects;
	}
	void inputAll(){
		inputPerson();
		inputMarks();
		result();
	}
	
	void disAll(){
		
		personDis();
		studentDis();
		cout<<"total: "<<total<<endl;
		cout<<"averege: "<<averege<<endl;
	}
};
int main(){
	Result s[maxStudent];
	cout << "Enter details for " << maxStudent << " students:\n\n";
	for(int i=0;i<maxStudent;i++)
	{
		cout << "Student " << (i + 1) << ":\n";
		s[i].inputAll();
	}
	
	for(int i=0;i<maxStudent;i++)
	{
		cout << "Student " << (i + 1) << ":\n";
		s[i].disAll();
	}
	return 0;
}
#include<iostream>
using namespace std;
const int subjects=5;
const int maxStudents=2;

class Person{
	protected:
	string name;
	int roll;
	public:
	void inputPerson(){
		cout<<"name: ";
		getline(cin,name);
		cout<<"roll: ";
		cin>>roll;
		cin.ignore();
	}
	
	void displayPerson(){
		cout<<"name: "<<name<<endl;
		cout<<"roll: "<<roll<<endl;
	}
};
class Student : public Person{
	protected:
	int marks[subjects];
	public:
	void inputStudent(){
		cout<<"Enter the marks of "<<subjects<<"subjects\n";
		for(int i=0;i<subjects;i++){
			cout<<"subject"<<i+1<<": ";
			cin>>marks[i];
		}
		cin.ignore();
	}
	
	void displayStudent(){
		cout<<"marks(1-5) ";
		for(int i=0;i<subjects;i++)
		{
			cout<<marks[i]<<" ";
		}
		cout<<endl;
	}
};

class Result : public Student{
	private:
	int total=0;
	double average=0;
	public:
	void result(){
		for(int i=0;i<subjects;i++)
		{
			total+=marks[i];
		}
		average=(total)/subjects;
	}
	
	void inputAll(){
		inputPerson();
		inputStudent();
		result();
	}
	
	void displayAll(){
		displayPerson();
		displayStudent();
		cout<<"total: "<<total<<endl;
		cout<<"average: "<<average<<endl;
		cout<<"................\n";
	}
};
int main(){
	Result s[maxStudents];
	cout<<"Enter the data of "<<maxStudents<<" students\n";
	for(int i=0;i<maxStudents;i++)
	{
		s[i].inputAll();
	}
	cout<<"\n.....Result.....\n";
	for(int i=0;i<maxStudents;i++)
	{
		s[i].displayAll();
	}
	return 0;
}

#include<iostream>
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
	void personDisplay(){
		cout<<"name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
	}
};
class Patient : public Person{
	string disease;
	public:
	Patient(string name,int id,string disease) : Person(name,id){
		this->disease=disease;
	}
	
	void suggestion(){
		if(disease=="heart"){
			cout<<"The patient is suggested to Dr Salah Khan\n";
		}else if(disease=="eye"){
			cout<<"The patient is suggested to Dr Arman Kakar\n";
		}else if(disease=="joints"){
			cout<<"The patient is suggested to Dr HizbUllah Pthan\n";
		}else if(disease=="stomach"){
			cout<<"The patient is suggested to Dr Salik \n";
		}else{
			cout<<"Doctor is not avaliable\n";
		}
	}
	
	void dis(){
		personDisplay();
		cout<<"disease: "<<disease<<endl;
		suggestion();
	}
	
};
int main(){
	int id;
	string name;
	string disease;
	cout<<"Enter patient name: ";
	getline(cin,name);
	cout<<"Enter the id: ";
	cin>>id;
	cout<<"Enter the disease: ";
	cin>>disease;
	Patient p(name,id,disease);
	p.dis();
	return 0;
}
#include<iostream>
using namespace std;
class Employee{
	protected:
	string name;
	int id;
	double baseSalary;
	public:
	Employee(string name,int id,double baseSalary){
		this->name=name;
		this->id=id;
		this->baseSalary=baseSalary;
	}
	void empDisplay(){
		cout<<"name: "<<name<<endl;
		cout<<"id: "<<id<<endl;
	}
};

class FullTime : public Employee {
	protected:
	double bonus;
	double dedution;
	public:
	FullTime(string name,int id,double baseSalary,double bonus,double deduction) : Employee(name,id,baseSalary){
		this->bonus=bonus;
		this->dedution=deduction;
	}
	double fullCalculate(){
		return baseSalary+bonus-dedution;
	}
	
	void fullDispaly(){
		cout<<".....Full Time Employee.....\n";
		empDisplay();
		cout<<"Full time salary: "<<fullCalculate() <<endl;
		cout<<"............................\n";
		
	}
};

class PartTime : public Employee{
	protected:
	double hours;
	double wagePerHour;
	public:
	PartTime(string name,int id,double hours,double wagePerHour):Employee(name,id,0){
		this->hours=hours;
		this->wagePerHour=wagePerHour;
	}
	
	double ptCalculate(){
		return hours*wagePerHour;
	}
	
	void disPT(){
		cout<<".....Part Time Employee.....\n";
		empDisplay();
		cout<<"Part Time Salary: "<<ptCalculate() <<endl;
		cout<<"............................\n";
	}
};
int main(){
	const int max=10;
	FullTime *ftEmployee[max];
	PartTime *ptEmployee[max];
	string name;
	int id;
	double baseSalary;
	double hours;
	double wagePerHour;
	double bonus;
	double deduction;
	int ftCount,ptCount;
	cout<<"...Employee Record Management System...\n";
	cout<<"Enter to add data of full time employee(1-10): ";
	cin>>ftCount;
	for(int i=0;i<ftCount;i++)
	{
		cout << "\nEnter details for Full-Time Employee #" << i + 1 << endl;
		cout<<"Enter Employee Name: ";
	    cin>>name;
	    cout<<"Enter Employee id: ";
	    cin>>id;
	    cout<<"Enter Employee basic salary: ";
	    cin>>baseSalary;
	    cout<<"Enter Employee bonus: ";
	    cin>>bonus;
	    cout<<"Enter Employee salary deduction: ";
	    cin>>deduction;
	    ftEmployee[i]=new FullTime(name,id,baseSalary,bonus,deduction);
	}
	
	cout<<"Enter to add data of part time employee(1-10): ";
	cin>>ptCount;
	for(int i=0;i<ptCount;i++){
		cout << "\nEnter details for Part-Time Employee #" << i + 1 << endl;
	    cout<<"Enter Employee Name: ";
	    cin>>name;
	    cout<<"Enter Employee id: ";
	    cin>>id;
	    cout<<"Enter Employee hours work: ";
	    cin>>hours;
	    cout<<"Enter Employee wage per hour: ";
	    cin>>wagePerHour;
	    ptEmployee[i]=new PartTime(name,id,hours,wagePerHour);
	}
    for(int i=0;i<ftCount;i++)
    {
    	ftEmployee[i]->fullDispaly();
	}
	
	for(int i=0;i<ptCount;i++)
    {
    	ptEmployee[i]->disPT();
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
	Person(string name,int age){
		this->name=name;
		this->age=age;
	}
	
	void disPerson(){
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
	}
};

class Patient : public Person{
	protected:
	string disease;
	int room;
	public:
	Patient(string name,int age,string disease,int room) : Person(name,age){
		this->disease=disease;
		this->room=room;
	}
	
	void disPatient(){
		disPerson();
		cout<<"disease: "<<disease<<endl;
		cout<<"room no: "<<room<<endl;
	}
};

class Doctor : public Person{
	protected:
	string spiecalization;
	string shedule;
	public:
	Doctor(string name,int age,string spiecalization,string shedule) : Person(name,age){
		this->spiecalization=spiecalization;
		this->shedule=shedule;
	}
	
	void disDoctor(){
		disPerson();
		cout<<"spiecalization: "<<spiecalization<<endl;
		cout<<"shedule: "<<shedule<<endl;
	}
};
int main(){
	const int max=5;
	Doctor* doc[max];
	Patient* pat[max];
	string name;
	int age;
	string disease;
	int room,np,nd;
	string spiecalization;
	string shedule;
	cout<<"=====+++ Al Shifa Hospital lahore +++=====\n";
	cout<<"Enter the number of patients to store: ";
	cin>>np;
	for(int i=0;i<np;i++)
	{
		cout<<"Data of patient no "<<i+1<<endl;
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter the age: ";
		cin>>age;
		cout<<"Enter the disease: ";
		cin>>disease;
		cout<<"Enter the room no: ";
		cin>>room;
		pat[i]=new Patient(name,age,disease,room);
	}
	cout<<"Enter number of Doctor to store: ";
	cin>>nd;
	for(int i=0;i<nd;i++)
	{
		cout<<"Data of doctor no "<<i+1<<endl;
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter the age: ";
		cin>>age;
		cout<<"Enter the doctor spiecalization: ";
		cin>>spiecalization;
		cout<<"Enter doctor time shedule: ";
		cin>>shedule;
		doc[i]=new Doctor(name,age,spiecalization,shedule);
	}
	
	for(int i=0;i<np;i++)
	{
		cout<<".....................\n";
		cout<<"Data of patient no "<<i+1<<endl;
		pat[i]->disPatient();
		cout<<".....................\n";
	}
    for(int i=0;i<np;i++)
	{
		cout<<".....................\n";
		cout<<"Data of doctor no "<<i+1<<endl;
		doc[i]->disDoctor();
		cout<<".....................\n";
	}
	return 0;
}
#include<iostream>
using namespace std;
class Item{
    protected:
	string name;
	double price;
	public:
	void inputItem(){
		cout<<"item name: ";
		cin>>name;
		cout<<"item price: ";
		cin>>price;
	}
	void disItem(){
		cout<<"item name: "<<name<<endl;
		cout<<"item price: "<<price<<endl;
	}
};
class PurchasedItem : public Item{
	public:
	double quantity;
	double totalPrice;
	void inputPurchasedItem(){
		cout<<"Enter quantity of item: ";
		cin>>quantity;
	}
	double calculatePrice(){
	    totalPrice=quantity*price;
	    return totalPrice;
	}
	void inputAll(){
		inputItem();
		inputPurchasedItem();
	}
	void dispalyAll(){
		disItem();
		cout<<"Quantity of item: "<<quantity<<endl;
		calculatePrice();
		cout<<"Total price of item: "<<totalPrice<<endl;
	}
};
int main(){
	int max=10;
	PurchasedItem p[max];
	int item;
	double grandTotal;
	cout<<"===== Jafar General Store Karbala =====\n";
	cout<<"Enter the items(how many): ";
	cin>>item;
	for(int i=0;i<item;i++ ){
	   cout<<"item"<<i+1<<endl;
	   p[i].inputAll();
	   grandTotal+=p[i].calculatePrice();		
	}
	for(int i=0;i<item;i++)
	{
		
		p[i].dispalyAll();
	}
	cout<<"grand total: "<<grandTotal<<endl;
	return 0;
}*/
#include<iostream>
using namespace std;
class Person{
	protected:
	string name;
	int passportNo;
	public:
	Person(string name,int passportNo){
		this->name=name;
		this->passportNo=passportNo;
	}
	
	void disPerson(){
		cout<<"name: "<<name<<endl;
		cout<<"Passport No: "<<passportNo<<endl;
	}
	
};
class Passenger : public Person{
	protected:
	int flightNo;
	int seatNo;
	string lweight;
	public:
	Passenger(string name,int passportNo,int flightNo,int seatNo,string lweight) : Person(name,passportNo){
		this->flightNo=flightNo;
		this->seatNo=seatNo;
		this->lweight=lweight;
	}
	void disPassenger(){
		disPerson();
		cout<<"flight No: "<<flightNo<<endl;
		cout<<"seat No  : "<<seatNo<<endl;
		cout<<"luggage weight: "<<lweight<<endl;
	}
};
int main(){
	const int max=5;
	Passenger* pass[max];
	int n;
	string name,lweight;
	int passportNo, flightNo,seatNo;
	cout<<"========== JAFARI AIRLINES =========="<<endl;
	cout<<"Enter the number of passengers(max 5): ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Enter information of passenger"<<i+1<<endl;
		cout<<"Enter the name: ";
		cin>>name;
		cout<<"Enter the passport No: ";
		cin>>passportNo;
		cout<<"Enter the flight No: ";
		cin>>flightNo;
		cout<<"Enter the seat No: ";
		cin>>seatNo;
		cout<<"Enter the weight: ";
		cin>>lweight;
		pass[i]=new Passenger(name,passportNo,flightNo,seatNo,lweight);
	}
	for(int i=0;i<n;i++){
		cout<<"========== JAFARI AIRLINES =========="<<endl;
		cout<<"Passenger No: "<<i+1<<endl;
		pass[i]->disPassenger();
	}
	return 0;
}