/*#include<iostream>
using namespace std;
class student
{
	string name;
	int roll;
	int oop_marks;
	int dld_marks;
	int pf_marks;
	
	public:
	
	student();
	void input();
	void calc_res(student[]);
};
student::student()
{
	name="";
	roll=0;
	oop_marks=0;
	dld_marks=0;
	pf_marks=0;
}
void student::input()
{
	cout<<"Enter name of the student :"<<endl;
	cin>>name;
	cout<<"Enter the roll number: "<<endl;
	cin>>roll;
	cout<<"Enter the OOP Marks: "<<endl;
	cin>>oop_marks;
	cout<<"Enter the DLD Marks: "<<endl;
	cin>>dld_marks;
	cout<<"Enter the PF Marks: "<<endl;
	cin>>pf_marks;
}
void student::calc_res(student arr[])
{
	
	
}
main()
{
	student obj[5];

	for(int i=0; i<5;i++)
	{
		obj[i].input();
	}
	
	student obj2;
	obj2.calc_res(obj);
	
	
}
*/

/*
class distancee
{
   int feet;
   int inches;

   public:
   distancee();
   distancee(int,int);
   void disp();
  // distancee add_dist(distancee, distancee);
  distancee add_dist(distancee);
};
distancee::distancee()
   {
   	
      feet=0;
	  inches=0;  
   }

distancee::distancee(int f, int i)
{
	
	feet=f;
	inches=i;
}
void distancee::disp()
{
	cout<<"The feet is: "<<feet<<endl;
	cout<<"The inches are: "<<inches<<endl;
}
/*
distancee distancee::add_dist(distancee d1, distancee d2)
{
	distancee temp;
	        temp.feet=d1.feet+d2.feet;
	        temp.inches=d1.inches+d2.inches;
	       return temp;
}
*/
/*
distancee distancee::add_dist(distancee d2)
{
	distancee temp;
	temp.feet= feet+d2.feet;
	temp.inches= inches+d2.inches;
	return temp;
}
*/
/*
main()
{
	distancee obj(4,5);
	obj.disp();
    distancee obj2(obj);
    obj2.disp();
    
   distancee obj4=obj.add_dist(obj2);
   obj4.disp();
    
 //  distancee obj4=obj3.add_dist(obj, obj2);
//   obj4.disp();
	
}
*/
//Q NO1:write a class person that uses copy constructor to copy attribute  from one object to other?
/*#include<iostream>
using namespace std;
class person{
	string name;
	int age;
	public:
	person(string,int);
	void display();
};
person::person(string n,int a)
{
	name=n;
	age=a;
}
void person::display(){
	cout<<"person: "<<name<<endl;
	cout<<"age: "<<age<<endl;
}
int main(){
	person p1("ali khan",18);
	p1.display();
	person p2=p1;//copy constructor
	p2.display();
	return 0;
}*/
/*#include<iostream>
using namespace std;
class box{
	int length;
	int width;
	public:
	double area;
	box(int,int);
	void dis();
};
box::box(int l,int w){
	length=l;
	width=w;
	area=l*w;
}

void box::dis(){
	cout<<"area: "<<area<<endl;
}

int main(){
	box b1(12,4);
	b1.dis();
	box b2=b1;
	b2.dis();
	return 0;
}*/
#include<iostream>
using namespace std;
class laptop{
string brand;
string ram;
int price;
public:
laptop(string,string,int);
void dis();	
};
laptop::laptop(string l,string r,int p){
	brand=l;
	ram=r;
	price=p;
}
void laptop::dis(){
	cout<<"brand: "<<brand<<endl;
	cout<<"ram: "<<ram<<endl;
	cout<<"price: "<<price<<endl;
}
int main(){
	laptop l1,l2,l3;
	l1("Dell","256GB",45000);
	l1.dis();
	laptop l2=l1;
	l2.dis();
	
	return 0;
}