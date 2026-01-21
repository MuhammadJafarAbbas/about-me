//w3 school lec No1;
/*#include<iostream>
using namespace std;
class myclass{
	public://acess spacifier
	int num;//attributes
	string name;
};
int main(){
	myclass obj;//objects obj
	obj.num=12;
	obj.name="ali";
	cout<<obj.name<<endl;
	cout<<obj.num;
	return 0;
}
#include<iostream>
using namespace std;
class myClass{
	public:
	string name;
	string model;
	int year;
};
int main(){
	//onject 1:
	myClass obj1;
	obj1.name="Toyota Corolla";
	obj1.model="Gli";
	obj1.year=2020;
	//object 2:
	myClass obj2;
	obj2.name="Suzuki Mehran";
	obj2.model="VXR";
	obj2.year=2014;
	//display:
	cout<<"Name: "<<obj1.name<<" : "<<"model: "<<obj1.model<<"  :  "<<"year: "<<obj1.year<<endl; 
	cout<<"Name: "<<obj2.name<<" : "<<"model: "<<obj2.model<<"  :  "<<"year: "<<obj2.year<<endl;
	return 0;
}
//class methods
#include<iostream>
using namespace std;
class myMethod{
	public:
	void myMeth();
};
void myMethod::myMeth(){
	cout<<"hi";
}
int main(){
	myMethod o;
	o.myMeth();
	return 0;
}
#include<iostream>
using namespace std;
class speed{
	public:
	int maxs(int);
};
int speed::maxs(int a){
	return a;
}
int main(){
	speed o;
	cout<<o.maxs(12);
	return 0;
}*/
//constructors
#include<iostream>
using namespace std;
class car{
	public:
	string name;
	string model;
	int year;
	
	car(string,string,int);
};
car::car(string n,string m,int y){
	name=n;
	model=m;
	year=y;
}
int main(){
    car c1("corolla","GLI",2014);
	car c2("mehran","vx",2009);
	cout<<"name: "<<c1.name<<" "<<"model: "<<c1.model<<"  "<<c1.year<<endl;
	cout<<"name: "<<c2.name<<" "<<"model: "<<c2.model<<"  "<<c2.year<<endl;
	car c3(c2);
	cout<<c3;
	return 0;
}