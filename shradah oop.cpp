	/*mam shradah
	#include<iostream>
	using namespace std;
	class teacher{
		double sal;//encapsulation(data hiding)
		public:
		string name;
		string subject;
		string dep;
		void changeDep(string);
		void setSal(double);
		double getSal();
		teacher(string,string,string,double);// paramerized-constructor
	//	teacher(); //non paramerized-constructor
	};
	void teacher::changeDep(string newDep){
		dep=newDep;
	}
	void teacher::setSal(double sa){
		sal=sa;
	}
	double teacher::getSal(){
		return sal;
	}
	/*teacher::teacher(){             //non paramerized-constructor
		subject="computer science\n";
	}*/
	/*.....teacher::teacher(string n,string s,string d,double sa){
		name=n;
		subject=s;
		dep=d;
		sal=sa;
	}
	int main(){
		teacher t1("Ali Khan","oop","Computer Science",13900);// paramerized-constructor
		cout<<t1.name;
	/*	non paramerized-constructor
	    teacher t1;
		t1.name="Ali\n";
		cout<<t1.name;
		t1.setSal(2500);
		cout<<t1.getSal();
		cout<<endl;
		cout<<t1.subject;*/
	/*...	return 0;
	}*/
	//sir ahmad amin
	/*#include <iostream>
	using namespace std;
	class distanse{
		public:
		int inch;
		int feet;
		distanse();
		distanse(int,int);
		void dis();
		distanse sum(distanse,distanse);
	};
	distanse::distanse(){
		inch=0;
		feet=0;
	}
	distanse::distanse(int i,int f){
		inch=i;
		feet=f;
	}
	void distanse::dis(){
		cout<<"feet: "<<feet<<endl;
		cout<<"inch: "<<inch<<endl;
	}
	distanse distanse::sum(distanse d1,distanse d2){
		distanse temp;
		temp.feet=d1.feet+d2.feet;
		temp.inch=d1.inch+d2.inch;
		return temp;
	}
	int main(){
		distanse obj1(2,6);
		obj1.dis();
		distanse obj2(8,4);
		obj2.dis();
		distanse obj3;
		obj3=obj3.sum(obj1,obj2);
		obj3.dis();
	    return 0;
	}*/
	//issue
	/*#include<iostream>
	using namespace std;
	
	class distancee{
	public:
	int inch;
	int feet;
	distancee();
	distancee(int,int);	
	void dis();
	void getdis();
	distancee sum(distancee);
	};
	distancee::distancee(){
		inch=0;
		feet=0;
	}
	distancee::distancee(int inch,int feet){
		this->inch=inch;
		this->feet=feet;
	}
	void distancee::getdis(){
		cout<<"inch: ";
		cin>>inch;
		cout<<"feet: ";
		cin>>feet;
	}
	void distancee::dis(){
		cout<<"inch: "<<inch<<endl;
		cout<<"feet: "<<feet<<endl;
	}
	distancee distancee::sum(distancee d2){
		distancee temp;
		temp.feet=feet+d2.feet;
	    temp.inch=inch+d2.inch;
	}
	int main(){
		distancee d1(12,14);
		d1.dis();
		distancee d2(d1);
		d2.dis();
		distancee d3;
	    d1.getdis();
		d3=d1.sum(d2);
		d3.dis();
		return 0;
	}*/
	/*#include<iostream>
	using namespace std;
	class binary{
		public:
		int a;
		void enter(void);
		void dis(void);
		void one(void);
		void display(void);
	};
	void binary::enter(void){
		cout<<"Enter the binary number: ";
		cin>>a;
	}
	void binary::dis(void){
		for(int i=0;;i++){
			if(a==0 ||a==1){
				cout<<"binary\n";
			}else{
				cout<<"wrong number\n";
			}
			binary::enter();
		}
	}
	void binary::one(void){
		for(int i=0;true;i++){
			if(a=='1'){
				a='0';
			}else if(a==0){
				a='1';
			}else{
				cout<<"error";
			}
		}
	}
	/*void binary::display(void){
		
	}*/
	/*int main(){
		binary b;
		b.enter();
		b.dis();
		return 0;
	}*/
	/*Example No1.
	#include<iostream>
	using namespace std;
	class smallobj{
	private:
	int somedata;
	public:
	void setdata(int);
	void showdata();	
	};
	void smallobj::setdata(int d){
		somedata=d;
	}
	void smallobj::showdata(){
		cout<<"The data is: "<<somedata<<endl;
	}
	int main(){
		smallobj obj1;
		obj1.setdata(1007);
		obj1.showdata();
		return 0;
	}*/
	/*#include<iostream>
	using namespace std;
	class distancee{
		private:
		int inch;
		int feet;
		public:
		//void setdis(int,int);
		void getdis();
		void showdis();
	};
	/*void distancee::setdis(int inch,int feet){
		this->inch=inch;
		this->feet=feet;
	}*/
	/*void distancee::getdis(){
	    cout<<"enter inch: ";
	    cin>>inch;
	    cout<<"enter feet: ";
	    cin>>feet;	
	}
	void distancee::showdis(){
		cout<<"inch: "<<inch<<endl;
		cout<<"feet: "<<feet<<endl;
	}
	int main(){
		distancee d1,d2;
		d1.getdis();
		d1.showdis();
		//d2.setdis(132,22);
		//d2.showdis();
		return 0; 
	}
	#include<iostream>
	using namespace std;
	class counter{
	int count;
	public:
	counter();
	void asd();
	void dis();
	};
	counter::counter() : count(0)
	{
		cout<<"I am a constructor\n";
	}
	void counter::asd(){
		count++;
	}
	void counter::dis(){
		cout<<"count: "<<count<<endl;
	
	}
	int main(){
		counter c1,c2;
		c2.dis();
		c1.asd();
		c1.dis();	
		c1.asd();
		c1.dis();
		return 0;
	}
	*/
	/*#include<iostream>
	using namespace std;
	class Distance{
		private:
		int inch;
		int feet;
		public:
		Distance();
		void setdis(int,int);
		void getdis();
		void display();
	//	Distance sum(Distance,Distance);
	   // Distance sum(Distance);
	   /*};
	Distance::Distance(){
		feet=0;
		inch=0;
	}
	void Distance::setdis(int inch,int feet){
		this->inch=inch;
		this->feet=feet;
	}
	void Distance::getdis(){
		cout<<"inch: ";cin>>inch;
		cout<<"feet: ";cin>>feet;
	}
	void Distance::display(){
		cout<<"feet: "<<feet<<endl;
		cout<<"inch: "<<inch<<endl;
	}*/
	/*Distance Distance::sum(Distance d1,Distance d2){
		Distance temp;
		temp.inch=d1.inch+d2.inch;
		temp.feet=d1.feet+d2.feet;
		return temp;
	}*/
	/*Distance Distance::sum(Distance d2){
		Distance temp;
		temp.inch=d2.inch+inch;
		temp.feet=d2.feet+feet;
		return temp;
	}
	int main(){
		/*Distance d1,d2,d3;
		d1.setdis(12,10);
		d2.setdis(10,12);
		d3=d3.sum(d1,d2);
		d1.display();
		d2.display();
		d3.display();*/
	/*	Distance d1,d2,d3;
		d2.setdis(12,14);
		d1.getdis();
		d3=d1.sum(d2);
		d1.display();
		d2.display();
		d3.display();
		return 0;
	}*/
	/*#include<iostream>
	using namespace std;
	class foo{
		static int count;
		public:
		foo();
		int get();
	};
	foo::foo(){
		count++;
	}
	int foo::get(){
		return count;
	}
	int foo::count=0;
	int main(){
		foo f1,f2,f3,f4;
		cout<<f1.get()<<endl;
		cout<<f2.get()<<endl;
		cout<<f3.get()<<endl;
		return 0;
		
	}
	*/
	/*#include<iostream>
	using namespace std;
	class Distance{
		int inch;
		int feet;
		public:
		Distance();
		void setdis(int,int);
		void getdis();
		void disp() const;
		Distance(Distance&);
	};
	Distance::Distance(){
		inch=0;
		feet=0;
	}
	Distance::Distance(int i,int f){
		inch=inch;
		feet=feet;
	} 
	void Distance::setdis(int i,int f){
		inch=i;
		feet=f;
	}
	void Distance::getdis(){
		cout<<"inch: ";
		cin>>inch;
		cout<<"feet: ";
		cin>>feet;
	}
	void Distance::disp() const
	{
		cout<<"inch: "<<inch<<endl;
		cout<<"feet: "<<feet<<endl;
	}
	int main(){
		Distance d1,d2,d3;
		d1.disp();
		d1.setdis(12,14);
		d1.disp();
		d2.getdis();
		d2.disp();
		return 0;
	}
	#include<iostream>
	using namespace std;
	class box{
	    //const int a=10;
	    int a=19;
		public:
		void set(int);
		void dis();
	};
	void box::set(int x){
		a=x; //constant will thow error
	}
	void box::dis(){
		cout<<"a: "<<a<<endl;
	}
	int main(){
	    box b1;
		b1.set(12);
		b1.dis();
		return 0;
	}
	
	#include<iostream>
	using namespace std;
	class test{
		int value;
		public:
		test(int);
		void get() const;
	};
	test::test(int b){
		value=b;
	}
	void test::get() const{//const member functionsr5
	//	value = 58;//throught error 
		cout<<"value: "<<value<<endl;
	}
	int main(){
		const test t1(12);
		t1.get();
		return 0;
	}
	#include<iostream>
	using namespace std;
	class Distance{
		int feet;
		int inch;
		public:
		Distance();
		Distance(int ,int);
		void getdis();
		void dis() const;
		Distance sum(const Distance&) const;
	};
	Distance::Distance(){
		feet=0;
		inch=0;
	}
	Distance::Distance(int feet,int inch){
		this->feet=feet;
		this->inch=inch;
	}
	void Distance::getdis(){
		cout<<"feet: ";
		cin>>feet;
		cout<<"inch: ";
		cin>>inch;
	}
	void Distance::dis() const {
		cout<<"feet: "<<feet<<endl;
		cout<<"inch: "<<inch<<endl;
	}
	Distance Distance::sum(const Distance& d2) const{
		Distance temp;
		temp.feet=feet+d2.feet;
		temp.inch=inch+d2.inch;
		return temp;
	}
	int main(){
	    Distance d1,d3;
		Distance d2(12,34);
		d1.getdis();
		d3=d1.sum(d2);
		d1.dis();
		d2.dis();
		d3.dis();
		return 0;
	}
	Q No1 book
	#include<iostream>
	using namespace std;
	class Int{
		public:
		int value;
		Int();
		Int(int);
		void dis();
		Int add(Int);
	};
	Int::Int(){
		value=0;
	}
	Int::Int(int v){
		value=v;
	}
	void Int::dis(){
		cout<<"value: "<<value<<endl;
	}
	Int Int::add(Int other){
		Int temp;
		temp.value=value+other.value;
		return temp;
	}
	int main(){
		Int num1=12;
		Int num2(12);
		Int num3=num1.add(num2);
		num3.dis();
		return 0;
	}*/
	/*#include<iostream>
	using namespace std;
	class Int{
		int value;
		public:
		Int();
		Int(int);
		void dis();
		Int add(Int);
	};
	Int::Int(){
		value=0;
	}
	Int::Int(int v){
		value=v;
	}
	void Int::dis(){
		cout<<"value: "<<value<<endl;
	}
	Int Int::add(Int other){
		Int temp;
		temp.value=value+other.value;
		return temp;
	} 
	int main(){
		Int b1=10;
		Int b2(12);
		Int b3=b1.add(b2);
		b3.dis();
		return 0;
	}
	//Qn02
	*/
	/*

	//important
	
*/
	//imp
	/**/
	/**/
	/*#include<iostream>
	using namespace std;
	class member{
	    string name;
		int id;
		int numberbooks;
		double price;
		string bookname;
		string booktitle;
		public:
		member();
		void addmember();
		void memberdis();
		void addbooks();
	};
	member::member(){
		name="";
		id=id;
		numberbooks=0;
		price=0;
	}
	void member::addmember(){
		string mn; 
		cout<<"\nEnter member name: ";
		cin.ignore();
		getline(cin,mn);
		cout<<"Enter member id: ";
		cin>>id;
		
		if(id<3)
		{
			cout<<"\nmember added successfully";
			
		}else{
			cout<<"\nyou canot add more members";
		}
	}
	void member::addbooks(){
		cout<<"\n1.Enter to add book";
		cout<<"\n2.Enter to buy book";
		int choice;
		cout<<"\nEnter your choice: ";cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<"\nEnter book name: ";cin>>bookname;
			cout<<"\nEnter book titlel: ";cin>>booktitle;
			cout<<"\nEnter book price: ";cin>>price;
			cout<<"\nbook added successfully";
			break;
			case 2:
			cout<<"\nEnter book name: ";cin>>bookname;
			cout<<"\nEnter book titlel: ";cin>>booktitle;
			cout<<"\nEnter book price: ";cin>>price;
			cout<<"\nbook added successfully";
		}
	}
	void member::memberdis(){
		cout<<"\nmember name: "<<name;
		cout<<"\nmember id: "<<id;
		cout<<"\nnumber of books buy: "<<numberbooks;
	}
	struct book{
		string bookname;
		string booktitle;
	};
	int main(){
		member m;
		
		int choice;
		do{
			cout<<"1.Enter to add member\n";
			cout<<"2.Enter to show member information\n";
			cout<<"3.Enter to exit\n";
			cout<<"Enter your choice: ";
			cin>>choice;
			switch(choice)
			{
				case 1:
			    m.addmember();
			    m.addbooks();
			    break;
			    case 2:
			    m.memberdis();
			    break;
			    default:
			    break;
			}
		}while(choice!=3);
		return 0;
	}
	#include<iostream>
	using namespace std;
	int mai(){
		
		return 0;
	}*/
	/*#include <iostream>
	#include <string>
	using namespace std;
	
	const int MAX_MEMBERS = 500;
	const int MAX_BOOKS = 1000;
	
	class Member {
	    string name;
	    int id;
	    int booksBought;
	    double totalSpent;
	
	public:
	    Member() {
	        name = "";
	        id = -1;
	        booksBought = 0;
	        totalSpent = 0.0;
	    }
	
	    void setMember(string n, int i) {
	        name = n;
	        id = i;
	    }
	
	    void buyBook(double price) {
	        booksBought++;
	        if (booksBought % 11 == 0) {
	            double discount = totalSpent / 10;
	            cout << "🎉 Special discount of $" << discount << " applied for 11th book!\n";
	            price -= discount;
	            totalSpent = 0; // reset
	        } else {
	            price = price - (price * 0.05); // 5% discount
	            totalSpent += price;
	        }
	
	        cout << name << " bought a book for $" << price << " after discount.\n";
	    }
	
	    void display() {
	        cout << "🧾 Member Name: " << name << "\nID: " << id
	             << "\nBooks Bought: " << booksBought
	             << "\nTotal Spent: $" << totalSpent << endl;
	    }
	
	    int getId() { return id; }
	};
	
	int main() {
	    Member members[MAX_MEMBERS];
	    int memberCount = 0;
	
	    int choice;
	    do {
	        cout << "\n===== BOOKSTORE MENU =====\n";
	        cout << "1. Add Member\n";
	        cout << "2. Buy Book (Member)\n";
	        cout << "3. Show Member Info\n";
	        cout << "4. Exit\n";
	        cout << "Enter your choice: ";
	        cin >> choice;
	
	        if (choice == 1) {
	            if (memberCount < MAX_MEMBERS) {
	                string name;
	                int id;
	                cout << "Enter member name: ";
	                cin.ignore();
	                getline(cin, name);
	                cout << "Enter ID: ";
	                cin >> id;
	
	                members[memberCount].setMember(name, id);
	                memberCount++;
	                cout << "✅ Member added!\n";
	            } else {
	                cout << "❌ Cannot add more members.\n";
	            }
	        } else if (choice == 2) {
	            int id;
	            double price;
	            cout << "Enter member ID: ";
	            cin >> id;
	            bool found = false;
	            for (int i = 0; i < memberCount; i++) {
	                if (members[i].getId() == id) {
	                    cout << "Enter book price: $";
	                    cin >> price;
	                    members[i].buyBook(price);
	                    found = true;
	                    break;
	                }
	            }
	            if (!found) {
	                cout << "❌ Member not found.\n";
	            }
	        } else if (choice == 3) {
	            for (int i = 0; i < memberCount; i++) {
	                cout << "\n--- Member " << (i + 1) << " ---\n";
	                members[i].display();
	            }
	        } else if (choice != 4) {
	            cout << "⚠️ Invalid choice.\n";
	        }
	    } while (choice != 4);
	
	    cout << "👋 Exiting Bookstore Program.\n";
	    return 0;
	}
	
	#include<iostream>
	using namespace std;
	class memberType{
		string name;
		int id;
		int booksbought;
		double totalspent;
		public:
		memberType();
		void setmember(string,int);
		void buybook(double p);
		int getId();
		void dis();
	};
	memberType::memberType(){
		name="";
		id=0;
		booksbought=0;
		totalspent=0.0;
	}
	void memberType::setmember(string n,int i){
		name=n;
		id=i;
	}
	void memberType::buybook(double p){
		booksbought++;
		if(booksbought>3)
		{
			double discount=totalspent/3;
			cout<<"\nspiecal discount: "<<discount;
			p-=discount;
			totalspent=0;	
		}else{
			p=p-(p*0.05);
			totalspent+=p;
		}
		cout<<"book name: "<<name<<" and price: "<<p<<endl;
	}
	int memberType::getId(){
		return id;
	}
	void memberType::dis(){
		cout<<"\nmember name: "<<name<<endl;
		cout<<"\nmember id: "<<id<<endl;
		cout<<"\nmember total amount spent: "<<totalspent<<endl;
	}
	int main(){
		int const me=2;
		memberType member[me];
		int count=0;
		int choice;
		do{
		    cout << "\n===== BOOKSTORE MENU =====\n";
	        cout << "1. Add Member\n";
	        cout << "2. Buy Book (Member)\n";
	        cout << "3. Show Member Info\n";
	        cout << "4. Exit\n";
	        cout << "Enter your choice: ";
	        cin >> choice;
	        string name;
	        int id;
	        if(choice==1)
	        {
	        	if(count<me)
	            {
	        	  cout<<"Enter the member name: ";
	        	  cin>>name;
	           	  cout<<"enter the member id: ";
	        	  cin>>id;
	        	  member[count].setmember(name,id);
	        	  count++;
			    }else{
				  cout<<"\ncannot found";
			    }
			}else if (choice == 2) {
	            int id;
	            double price;
	            cout << "Enter member ID: ";
	            cin >> id;
	            bool found = false;
	            for (int i = 0; i < count; i++) {
	                if (member[i].getId() == id) {
	                    cout << "Enter book price: $";
	                    cin >> price;
	                    member[i].buybook(price);
	                    found = true;
	                    break;
	                }
	            }
	            if (!found) {
	                cout << " Member not found.\n";
	            }
	        } else if (choice == 3) {
	            for (int i = 0; i <count; i++) {
	                cout << "\n--- Member " << (i + 1) << " ---\n";
	                member[i].dis();
	            }
	
			}
		}while(choice!=4);
		return 0;
	}
	

	#include <iostream>
	using namespace std;
	
	class SwimmingPool {
	    double length;   // in feet
	    double width;    // in feet
	    double depth;    // in feet
	    double flowRate; // in gallons per minute
	    double currentWaterVolume; // in gallons
	
	public:
	    SwimmingPool(double l, double w, double d, double rate, double current = 0) {
	        length = l;
	        width = w;
	        depth = d;
	        flowRate = rate;
	        currentWaterVolume = current;
	    }
	
	    double getPoolCapacity() const {
	        double volumeInCubicFeet = length * width * depth;
	        return volumeInCubicFeet * 7.48; // 1 cubic foot = 7.48 gallons
	    }
	
	    double waterNeededToFill() const {
	        double full = getPoolCapacity();
	        return full - currentWaterVolume;
	    }
	
	    double timeToFill() const {
	        double needed = waterNeededToFill();
	        return needed / flowRate;
	    }
	
	
	
	    double timeToDrain() const {
	        return currentWaterVolume / flowRate;
	    }
	
	    void addWater(int minutes) {
	        double added = flowRate * minutes;
	        currentWaterVolume += added;
	        if (currentWaterVolume > getPoolCapacity()) {
	            currentWaterVolume = getPoolCapacity();
	        }
	        cout << "✅ Water added for " << minutes << " minutes. Current volume: " << currentWaterVolume << " gallons\n";
	    }
	
	    void displayStatus() const {
	        cout << "📏 Pool size: " << length << "x" << width << "x" << depth << " ft\n";
	        cout << "💧 Flow rate: " << flowRate << " gallons/min\n";
	        cout << "📦 Capacity: " << getPoolCapacity() << " gallons\n";
	        cout << "📈 Current water volume: " << currentWaterVolume << " gallons\n";
	    }
	};
	int main() {
	    SwimmingPool myPool(30, 15, 5, 20, 1000); // l, w, d, rate, current volume
	
	    int choice;
	    do {
	        cout << "\n--- Swimming Pool Menu ---\n";
	        cout << "1. Show Pool Status\n";
	        cout << "2. Water Needed to Fill\n";
	        cout << "3. Time to Fill\n";
	        cout << "4. Time to Drain\n";
	        cout << "5. Add Water (minutes)\n";
	        cout << "6. Drain Water (minutes)\n";
	        cout << "7. Exit\n";
	        cout << "Enter your choice: ";
	        cin >> choice;
	
	        if (choice == 1) {
	            myPool.displayStatus();
	        } else if (choice == 2) {
	            cout << "🔄 Water needed: " << myPool.waterNeededToFill() << " gallons\n";
	        } else if (choice == 3) {
	            cout << "⏳ Time to fill: " << myPool.timeToFill() << " minutes\n";
	        } else if (choice == 4) {
	            cout << "⏳ Time to drain: " << myPool.timeToDrain() << " minutes\n";
	        } else if (choice == 5) {
	            int min;
	            cout << "Enter minutes to add water: ";
	            cin >> min;
	            myPool.addWater(min);
	        } 
	
	    } while (choice != 7);
	
	    cout << "👋 Exiting Swimming Pool Simulation.\n";
	    return 0;
	}
	
	#include<iostream>
	using namespace std;
	class patient{
		string name;
		int age;
		char gender;
		string disease;
		int patientId;
		public:
		patient();
		patient(string,int,char,string,int);
		string updateDisease();
		void dis();
	};
	patient::patient(){
		name="";
		age=0;
		gender='m';
		disease="";
		patientId=0;
	}
	patient::patient(string n,int a,char g,string d,int p){
		name=n;
		age=a;
		gender=g;
		disease=d;
		patientId=p;
	}
	string patient::updateDisease(){
		string d;
		cout<<"\n1.Enter to update disease: ";
		cout<<"\n2.Enter to not update: ";
		int choice;
		cout<<"\nEnter choice: ";
		cin>>choice;
		if(choice==1)
		{
			cout<<"Enter new disease: ";
			cin>>d;
			disease=d;
			return disease;
		}else{
			return disease;
		}
	}
	void patient::dis(){
		cout<<"\nPatient name: "<<name;
		cout<<"\nPatient age: "<<age;
		cout<<"\nPatient gender: "<<gender;
		cout<<"\nPatient disease "<<disease;
		cout<<"\nPatient id: "<<patientId;
	}
	int main(){
		//int const length=3;
		//patient p[length];
		int length;
		cout<<"===.... Sindhi hospital lahore ...===\n";
		cout<<"\nHow many patient data you wanted to register\n";
		cin>>length;
		patient p[length];
		string pn;
		int age;
		char gen;
		string dis;
		int id;
		for(int i=0;i<length;i++)
		{
			cin.ignore();
			cout<<"\nEnter patient name: ";
		    
		    getline(cin,pn);
		    cout<<"\nEnter patient age: ";
		    cin>>age;
		    cout<<"\nEnter patient gender: ";
		    cin>>gen;
		    cin.ignore();
		    cout<<"\nEnter patient disease: ";
		    getline(cin,dis);
		    cout<<"\nEnter patient id: ";
		    cin>>id;
		    p[i]=patient(pn,age,gen,dis,id);
		    p[i].updateDisease();
		}
		cout<<"\nyour data has been enter successfully\n";
		for(int i=0;i<length;i++)
		{
			
		    int choice;
		    //cout<<"\n1.Enter to update disease";
		    cout<<"\n1.Enter to show data";
		    cout<<"\nEnter your choice: ";
		    cin>>choice;
		    switch(choice)
		    {
	//	    	case 1:
	//	    	p[i].updateDisease();
	//	    	break;
		    	case 1:
		    	p[i].dis();
		    	break;
		    	default:
		    	break;
			}
		}
		
		return 0;
	}
	
	#include<iostream>
	using namespace std;
	class student{
		string name;
		int roll;
		double marks[3];
		public:
		void input();
		void dis();
		double ave();
	};
	void student::input(){
		cin.ignore();
		cout<<"\nEnter the student name: ";
		getline(cin,name);
		cout<<"\nEnter the student roll no: ";
		cin>>roll;
		cout<<"\nEnter the student marks: ";
		for(int i=0;i<3;i++)
		{
			cout<<"\nsubjet no: "<<i+1<<endl;
			cout<<"Enter the numbers of subject: ";
			cin>>marks[i];
		}
	}
	void student::dis(){
		cout<<"\nthe student name: "<<name;
		cout<<"\nthe student name: "<<roll;
		for(int i=0;i<3;i++)
		{
			cout<<"\nsubjet no: "<<i+1;
			cout<<"\nthe student marks: "<<marks[i];
		}
		cout<<"\naverege is: "<<ave();
	}
	double student::ave(){
		double ave=0;
		for(int i=0;i<3;i++)
		{
			ave+=marks[i];
		}
		return ave/3.0;
	}
	int main(){
		int length;
		cout<<"Enter the length: ";
		cin>>length;
		student stu[length];
		student s;
		for(int i=0;i<length;i++)
		{
			stu[i].input();
		}
		
		for(int i=0;i<length;i++)
		{
			stu[i].dis();
		}
		return 0;
	}X
	#include<iostream>
	using namespace std;
	class student{
		string name;
		int roll;
		public:
		student();
		void input();
		void dis();
	};
	student::student(){
		name="";
		roll=0;
	}
	void student::input(){
		cout<<"\nEnter student name: ";
		cin>>name;
		cout<<"Enter roll no: ";
		cin>>roll;
	}
	void student::dis(){
		cout<<"\nstudent name: "<<name;
		cout<<"\nRoll No: "<<roll;
	}
	class course{
		string courseName;
		int marks;
		public:
		course();
		void input();
		void dis();
		student stu;
	};
	course::course(){
		courseName="";
		marks=0;
	}
	void course::input(){
		cout<<"\nEnter course name: ";
		cin>>courseName;
		cout<<"\nEnter obtained marks: ";
		cin>>marks;
		stu.input();
	}
	void course::dis(){
	    cout<<"\ncourse name: "<<courseName;
		cout<<"\nobtained marks: "<<marks;	
		stu.input();
	}
	int main(){
		course c;
		c.input();
		c.dis();
		return 0;
	}
	#include<iostream>
	using namespace std;
	class student{
		string name;
		int roll;
		
		public:
		int marks[3];
		void input();
		void dis();
		string getName();
		void setName(string str);
		int getRoll();
		void setRoll(int num);
	};
	string student::getName(){
		return name;
	}
	void student::setName(string str){
		name=str;
	}
	int student::getRoll(){
		return roll;
	}
	void student::setRoll(int num){
		roll=num;
	}
	void student::input(){
		cout<<"\nenter the student name: ";
		cin>>name;
		cout<<"\nenter the student roll: ";
		cin>>roll;
		cout<<"Enter the subjects marks";
		for(int i=0;i<3;i++)
		{
			cout<<"\nsubject: ";
			cin>>marks[i];
		}
	}
	void student::dis(){
		cout<<"\nName: "<<getName();
		cout<<"\nroll no: "<<getRoll();
		cout<<"\nMarks: ";
		for(int i=0;i<3;i++)
		{
			cout<<"\n";
			cout<<marks[i];
		}
	}
	int main(){
		student stu[2];
	    for(int i=0;i<2;i++)
	    {
	    	stu[i].input();
	        cout<<endl;
	        stu[i].dis();
		}
		return 0;
	}

#include<iostream>
using namespace std;
class Distance{
	int feet;
	int inch;
	public:
	Distance();
	Distance(int,int);
	void dis();
	Distance add(Distance& d1,Distance& d2);
};
Distance::Distance(){
	feet=0;
	inch=0;
}
Distance::Distance(int f,int i){
	feet=f;
	inch=i;
}
void Distance::dis(){
	cout<<"feet: "<<feet<<endl;
	cout<<"inch: "<<inch<<endl;
}
Distance Distance::add(Distance& d1,Distance& d2){
	Distance temp;
	temp.feet=d1.feet+d2.feet;
	temp.inch=d1.inch+d2.inch;
	return temp;
}
int main(){
	Distance d1(23,22);
	d1.dis();
	Distance d2(d1);
	d2.dis();
	Distance d3=d3.add(d1,d2);
	d3.dis();
	return 0;
}*/
/*#include <iostream>
using namespace std;
class  Distance{
	int feet;
	int inch;
	public:
	Distance();
	Distance(int,int);
	void get();
	void dis();
	Distance sum(Distance&);
};
Distance::Distance(){
	inch=0;
	feet=0;
}
Distance::Distance(int f,int i){
	feet=f;
	inch=i;
}
void Distance::get(){
	cout<<"\nfeet: ";cin>>feet;
	cout<<"\ninch<: ";cin>>inch;
}
void Distance::dis(){
	cout<<"\nfeet: "<<feet;
	cout<<"\ninch<: "<<inch;
}
Distance Distance::sum(Distance& d2){
	Distance temp;
	temp.feet=feet+d2.feet;
	temp.inch=inch+d2.inch;
	return temp;
}
int main(){
	Distance d1(12,34);
	d1.dis();
	Distance d2(d1);
	Distance d3=d1.sum(d2);
	Distance d4;
	d3.dis();
	d1.get();	
	d4=d1.get()+ d1.dis();
	d4.dis();
	return 0;
}
#include<iostream>
using namespace std;
class student{
	string name;
	int roll;
	double marks[5];
	double averege;
	public:
	void input();
	void ave();
	void dis();
};
void student::input(){
	cout<<"\nname: ";cin>>name;
	cout<<"\nroll: ";cin>>roll;
	cout<<"\nmarks ";
	for(int i=0;i<5;i++)
	{
		cout<<"\nsubject: ";
		cin>>marks[i];
	}
}
void student::ave(){
	for(int i=0;i<5;i++)
	{
		averege+=marks[i];
	}
	cout<<"\naverege numbers are: "<<averege/5;
}
void student::dis(){
    cout<<"\nname: "<<name;
	cout<<"\nroll: "<<roll;
	cout<<"\nmarks ";
	for(int i=0;i<5;i++)
	{
		cout<<"\nsubject: ";
		cout<<marks[i];
	}
}
int main(){
	student stu[3];
	for(int i=0;i<3;i++)
	{
		stu[i].input();
	}
	for(int i=0;i<3;i++)
	{
		stu[i].ave();
	}
	for(int i=0;i<3;i++)
	{
		stu[i].dis();
	}
	return 0;
}
    #include<iostream>
	using namespace std;
	class Student{
		string name;
		int roll;
		int marks;
		public:
		Student();
		Student(string,int,int);
		void get(Student stu[],int length);
		void setdata(string n,int r,int m);
		void dis();
		void result();
	};
	Student::Student(){
		name="";
		roll=0;
		marks=0;
	}
	Student::Student(string n,int r,int m){
		name=n;
		roll=r;
		marks=m;
	}
	void Student::setdata(string n,int r,int m){
		name=n;
		roll=r;
		marks=m;
	}
	void Student::get(Student stu[],int length)
	{
		for(int i=0;i<length;i++)
		{
			cout<<"Enter the student name: ";
			cin>>name;
			cout<<"Enter the student roll: ";
			cin>>roll;
			cout<<"Enter the student marks: ";
			cin>>marks;
			stu[i].setdata(name,roll,marks);
		}
	}
	void Student::dis(){
	    cout<<"\nEnter the student name: "<<name;
		cout<<"\nEnter the student roll: "<<roll;
		cout<<"\nEnter the student marks: "<<marks;
	}
	void Student::result(){
		if(marks>50){
			cout<<"pass";
		}else{
			cout<<"fail";
		}
	}
	int main(){
		int length;
		cout<<"Enter the you wanted to add: ";
		cin>>length;
		Student stu[length];
		Student s;
		s.get(stu,length);
		
		for(int i=0;i<length;i++)
		{
			cout<<"\n"<<i+1;
			stu[i].result();
			stu[i].dis();
		}
		return 0;
	}
#include<iostream>
using namespace std;
class student{
	string name;
	int roll;
	int marks;
	public:
	student();
	void set(string,int,int);
	void input(student s[],int length);
	void dis();
};
student::student(){
	name="";
	roll=0;
	marks=0;
}
void student::input(student s[],int length){
	for(int i=0;i<length;i++)
	{
		cout<<"name: ";cin>>name;
		cout<<"roll: ";cin>>roll;
		cout<<"marks: ";cin>>marks;
		s[i].set(name,roll,marks);
	}
}
void student::set(string n,int r,int m){
	name=n;
	roll=r;
	marks=m;
}
void student::dis(){
	cout<<"\nname: "<<name;
	cout<<"\nroll: "<<roll;
	cout<<"\nmarks: "<<marks;
}
int main(){
	int length=2;
	student stu[length];
	student s;
	s.input(stu,length);
	for(int i=0;i<length;i++)
    {
    	stu[i].dis();
	}
	return 0;
}
#include<iostream>
	using namespace std;
	class patient{
		string name;
		int age;
		char gender;
		string disease;
		int patientId;
		public:
		patient();
		patient(string,int,char,string,int);
		string updateDisease();
		void dis();
	};
	patient::patient(){
		name="";
		age=0;
		gender='m';
		disease="";
		patientId=0;
	}
	patient::patient(string n,int a,char g,string d,int p){
		name=n;
		age=a;
		gender=g;
		disease=d;
		patientId=p;
	}
	string patient::updateDisease(){
		string d;
		cout<<"\n1.Enter to update disease: ";
		cout<<"\n2.Enter to not update: ";
		int choice;
		cout<<"\nEnter choice: ";
		cin>>choice;
		if(choice==1)
		{
			cout<<"Enter new disease: ";
			cin>>d;
			disease=d;
			return disease;
		}else{
			return disease;
		}
	}
	void patient::dis(){
		cout<<"\nPatient name: "<<name;
		cout<<"\nPatient age: "<<age;
		cout<<"\nPatient gender: "<<gender;
		cout<<"\nPatient disease "<<disease;
		cout<<"\nPatient id: "<<patientId;
	}
	int main(){
		//int const length=3;
		//patient p[length];
		int length;
		cout<<"===.... Sindhi hospital lahore ...===\n";
		cout<<"\nHow many patient data you wanted to register\n";
		cin>>length;
		patient p[length];
		string pn;
		int age;
		char gen;
		string dis;
		int id;
		for(int i=0;i<length;i++)
		{
			cin.ignore();
			cout<<"\nEnter patient name: ";
		    
		    getline(cin,pn);
		    cout<<"\nEnter patient age: ";
		    cin>>age;
		    cout<<"\nEnter patient gender: ";
		    cin>>gen;
		    cin.ignore();
		    cout<<"\nEnter patient disease: ";
		    getline(cin,dis);
		    cout<<"\nEnter patient id: ";
		    cin>>id;
		    p[i]=patient(pn,age,gen,dis,id);
		    p[i].updateDisease();
		}
		cout<<"\nyour data has been enter successfully\n";
		for(int i=0;i<length;i++)
		{
			
		    int choice;
		    //cout<<"\n1.Enter to update disease";
		    cout<<"\n1.Enter to show data";
		    cout<<"\nEnter your choice: ";
		    cin>>choice;
		    switch(choice)
		    {
	//	    	case 1:
	//	    	p[i].updateDisease();
	//	    	break;
		    	case 1:
		    	p[i].dis();
		    	break;
		    	default:
		    	break;
			}
		}
		
		return 0;
	}
	
#include<iostream>
	using namespace std;
	class bankAccount{
	    int accountNumber;
		string  name;
		double balance;	
		public:
		bankAccount(int,string,double);
		void deposit(double );
		void withdrawl(double);
		void dis();
	};
	bankAccount::bankAccount(int acc,string n,double b)
	{
		accountNumber=acc;
		name=n;
		balance=b;
	}
	void bankAccount::deposit(double amount){
		if(amount>0)
		{
			balance+=amount;
			cout<<"\n money has been added your new balnce is: "<<balance;
		}else{
			cout<<"Enter positive amount";
			
		}
	}
	void bankAccount::withdrawl(double amount){
		if(amount>0 && amount<balance)
		{
			balance-=amount;
			cout<<"\nwithdrawl successfully.your new balance is: "<<balance;
		}else{
			cout<<"\nEnter valid amount";
		}
	}
	void bankAccount::dis(){
		cout<<"\naccount number: "<<accountNumber;
		cout<<"\naccount holder name: "<<name;
		cout<<"\nbank balance: "<<balance;
	}
	int main(){
		int accNo;
		string name;
		double bal;
		cout<<"===... Sindhi Bank limited ...====\n";
		cout<<"Fill the Data to make bank account\n";
		cout<<"Enter account number: ";
		cin>>accNo;
		cout<<"\nEnter the account holder name: ";
		cin.ignore();
		getline(cin,name);
		cout<<"Enter your initial balance: ";
		cin>>bal;
		bankAccount account(accNo,name,bal);
		cout<<"\nYour account has been created successfully";
		int choice;
		double amount;
		do{
			cout<<"\n1.Enter to add money";
			cout<<"\n2.Enter to withdraw money";
			cout<<"\n3.Enter to check account details";
			cout<<"\nEnter your choice: ";
			cin>>choice;
			switch(choice)
			{
				case 1:
				cout<<"\nEnter the amount you wanted to deposit: ";
				cin>>amount;
				account.deposit(amount);
				break;
				case 2:
			    cout<<"\nEnter the amount you wanted to withdraw: ";
				cin>>amount;
				account.withdrawl(amount);
				break;
				case 3:
				account.dis();
				default:
				cout<<"\nError fetching data please wait";
				break;
			}
		}while(choice!=4);
		return 0;
	}
		//imp question
	#include<iostream>
	using namespace std;
	class memberType{
		string name;
		int id;
		int booksbought;
		double totalspent;
		public:
		memberType();
		void set(string,int);
		void buybook(double price);
		int getId();
	    void dis();
	};
	memberType::memberType(){
		name="";
		id=0;
		booksbought=0;
		totalspent=0;
	}
	void memberType::set(string n,int i){
		name=n;
		id=i;
	}
	void memberType::buybook(double price){
		booksbought++;
		if(booksbought>3)
		{
			double discount=price/3;
			cout<<"spiecal discount: "<<discount;
			price-=discount;
			totalspent=0;
		}else{
			price=price-(price*0.05);
			cout<<"\nname: "<<name<<" :pricer after discount: "<<price;
			totalspent+=price;
		}
	}
	int memberType::getId(){
		return id;
	}
	void memberType::dis(){
		cout<<"\nmember name: "<<name<<endl;
		cout<<"\nmember id: "<<id<<endl;
		cout<<"\nmember total amount spent: "<<totalspent<<endl;
	}
	int main(){
		int const me=3;
		memberType member[me];
		int count=0;
		int choice;
		do{
			cout<<"\n===welcome to sindhi resturent===\n";
			cout<<"1.Enter to add member\n";
			cout<<"2.Enter to buy book\n";
			cout<<"3.Enter to display record\n";
			cout<<"4.Enter to exit\n";
			cout<<"Enter choice: ";
			cin>>choice;
			if(choice==1)
			{
				if(count<me)
				{
					string m;
					int id;
					cout<<"\nEnter the member name: ";cin>>m;
					cout<<"\nEnter the member id";cin>>id;
					member[count].set(m,id);
					count++;
				}else{
					cout<<"you cannot add more members";
				}
			}else if(choice==2)
			{
				int id;
				cout<<"Enter member id: ";
				cin>>id;
				int price;
				bool asd=false;
				for(int i=0;i<count;i++)
				{
					if(member[i].getId()==id)
					{
					   cout<<"\nenter price of book: ";
					   cin>>price;
					   member[i].buybook(price);	
					   asd=true;
					   break;
					}
					if(asd==false)
					{
						cout<<"wrong id";
					}
				}
			}else if(choice==3){
			    for(int i=0;i<count;i++)
				{
					member[i].dis();
				}
			}else{
				break;
			}
		}while(choice!=4);
		return 0;
	}
	#include<iostream>
	using namespace std;
	class booktype{
		string name;
		int id;
		int booksbuy;
		double price;
		public:
		booktype();
	//	booktype(string n,int i,int b,int p);
	    void get();
		void dis();
	//	void modifybuy(int );
	//	void modifyprice(int p);
	    void modifybuy();
		void modifyprice();
	};
	booktype::booktype(){
		name="";
		id=0;
		booksbuy=0;
		price=0;
	}*/
	/*//*booktype::booktype(string n,int i,int b,int p){
		name=n;
		id=i;
		booksbuy=b;
		price=p;
	}*///
	/*void booktype::get(){
		cout<<"Enter the book name: ";cin>>name;
		cout<<"Enter the id number: ";cin>>id;
		cout<<"Enter the books buy numbers: ";cin>>booksbuy;
		cout<<"Enter the price of books: ";cin>>price;
	}
	void booktype::dis(){
		cout<<"\nbook name: "<<name<<endl;
		cout<<"id number: "<<id<<endl;
		cout<<"bookbuy numbers: "<<booksbuy<<endl;
		cout<<"book price: "<<price<<"$"<<endl;
	}*/
	/*void booktype::modifybuy(int n){
		booksbuy+=n;
	}
	void booktype::modifyprice(int p){
		price+=p;
	}*/
	
	/*void booktype::modifybuy(){
		int n;
		cout<<"\nEnter number of book you wanted to add: ";
		cin>>n;
		booksbuy+=n;
	}
	void booktype::modifyprice(){
		int p;
		cout<<"Enter the cost of new books: ";
		cin>>p;
		price+=p;
	}
	int main(){
		//booktype b("english",112233,3,12);
		booktype b;
	    while(true)
	    {
	    	b.get();
		    b.dis();
	      //b.modifybuy(6);
	        b.modifybuy();
		    cout<<"books buy after modification: ";
		    b.dis();
	       //b.modifyprice(8);
	        b.modifyprice();
		    cout<<"\nbooks price after modification: ";
		b.dis();
		}
		return 0;
	}
	#include<iostream>
	using namespace std;
	class booktype{
		string author;
		string title;
		int price;
		int year;
		public:
		booktype();
		void get();
		void dis();
		void high(booktype a[],int length);
	};
	booktype::booktype(){
		author="";
		title="";
		price=0;
		year=0;
	}
	void booktype::get(){
		cout<<"Enter the author name: ";
		cin>>author;
		cout<<"Enter the book title: ";
		cin>>title;
		cout<<"Enter the price: ";
		cin>>price;
		cout<<"Enter the book published year: ";
		cin>>year;
	}
	void booktype::dis(){
		cout<<"the author name: "<<author<<endl;
		cout<<"the book title: "<<title<<endl;
		cout<<"the price: "<<price<<endl;
		cout<<"the book published year: "<<year<<endl;
	}
	void booktype::high(booktype a[],int length){
		int maximum=0;
		int minimum=INT_MAX;
		int maxindex=0;
		for(int i=0;i<length;i++)
		{
			if(a[i].price>maximum)
			{
				maximum=a[i].price;
				maxindex=i;
			}
		}
		cout<<"\nMaximum..................\n";
		cout<<"author: "<<a[maxindex].author<<" : "<<"book title: "<<a[maxindex].title<<" : "<<"maximum price: "<<  maximum;
		string search;
		cout<<"\nsearch here(title): ";
		cin>>search;
	    for(int i=0;i<length;i++)
		{
			if(a[i].title==search)
			{
				cout<<"\nfound\n";
				cout<<"the author name: "<<a[i].author<<endl;
	        	cout<<"the book title: "<<a[i].title<<endl;
		        cout<<"the price: "<<a[i].price<<endl;
		        cout<<"the book published year: "<<a[i].year<<endl;
			}
		}
	}
	int main(){
		booktype book[5];
		
		int length;
		cout<<"Enter the number of books data: ";
		cin>>length;
		for(int i=0;i<length;i++)
		{
			cout<<"\nBook No"<<i+1<<endl;
			book[i].get();
		}
		cout<<endl;
		for(int i=0;i<length;i++)
		{
			cout<<"\nBook No"<<i+1<<endl;
			book[i].dis();
		}
		booktype b;
		b.high(book,length);
		return 0;
	}
		#include<iostream>
	using namespace std;
	class clock{
		int hours;
	    int minutes;
	    int secounds;
	    public:
		clock();
		clock(int,int,int);
		void dis();
		int elseped();
	};
	clock::clock(){
		hours=0;
		minutes=0;
		secounds=0;
	}
	clock::clock(int h,int m,int s){
		hours=h;
		minutes=m;
		secounds=s;
	}
	void clock::dis(){
		cout<<"clock time is: "<<hours<<":"<<minutes<<":"<<secounds<<endl;
	}
	int clock::elseped(){
		return (hours*3600)+(minutes*60)+secounds;
	}
	int main(){
	    clock c(11,23,44);
	    c.dis();
	    int sec=c.elseped();
	    cout<<"elsped secounds: "<<sec<<endl;
	    cout<<"remaining secounds: "<<86400-sec<<endl;
		return 0;
	}
	#include <iostream>
	using namespace std;
	class daytype{
		private:
		string day[7]={"monday","tuesday","wednesday","thrusday","friday","saturday","sunday"};
		int currentindex;
		public:
		daytype();
		void currentday();
		void dis();
		string returnday();
		string nextday();
		string previousday();
	};
	daytype::daytype(){
		currentindex=0;
	}
	void daytype::currentday()
	{
		string input;
		cout<<"Enter current day: ";
		cin>>input;
		for(int i=0;i<7;i++)
		{
			if(input==day[i])
			{
				currentindex=i;
				return;
			}
		}
		cout<<"invalid day setting to monday\n";
		currentindex=0;
	}
	void daytype::dis(){
		cout<<"day is: "<<day[currentindex]<<endl;
	}
	string daytype::returnday(){
		return day[currentindex];
	}
	string daytype::nextday(){
		return day[(currentindex+1)%7];
	}
	string daytype::previousday(){
		return day[(currentindex+6)%7];
	}
	int main(){
		daytype d;
		d.currentday();
		d.dis();
		int choice;
	    while(true)
	    {
	    	cout<<"\n1.enter to return day\n";
		    cout<<"2.enter to next day\n";
		    cout<<"3.enter to previous day\n";
		    cout<<"Enter choice: ";
		    cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<"return day: "<<d.returnday()<<endl;
			break;
			case 2:
			cout<<"next day: "<<d.nextday()<<endl;
			break;
			case 3:
			cout<<"return previous day: "<<d.previousday();
			break;
			default:
			cout<<"error";
			break;
			cout<<"\nEnter choice: ";
		    cin>>choice;
		}
		}
		return 0;
	}
	#include<iostream>
	using namespace std;
	class date{	
		int day;
		int year;
		int month;
		public:
		void get();
		void dis();
	};
	void date::get(){
		cout<<"Day: "; cin>>day;
		cout<<"month: "; cin>>month;
		cout<<"year: "; cin>>year;
	}
	void date::dis(){
		cout<<"INSHALLAH I WILL BE GRADUATE WITH 3.2 CGPA\n";
		cout<<year<<"/"<<month<<"/"<<day<<endl;
	}
	int main(){
		date d;
		d.get();
		d.dis();
		return 0;
	}
	#include<iostream>
	using namespace std;
	class angle{
		int degree;
		float minutes;
		char direction;
		public:
		angle();
		angle(int,float,char);
		void get();
		void show();
	};
	angle::angle(){
		degree=0;
		minutes=0.0;
		direction='S';
	}
	angle::angle(int d,float m,char di){
		degree=d;
		minutes=m;
		direction=di;
	}
	void angle::get(){
		cout<<"Enter the degree(0-180) "; cin>>degree;
		cout<<"Enter the minutes(0.0-59.9): "; cin>>minutes;
		cout<<"Enter the direction: "; cin>>direction;
	}
	void angle::show(){
		cout<<degree<<"\xFB"<<minutes<<" "<<direction<<endl;
	}
	int main(){
		cout<<"initialized location\n";
		angle a1(127,57.7,'S');
		a1.show();
		angle userangle;
			cout<<"Enter your new location\n"; 
			userangle.get();
			cout<<"Your current location is: ";
			userangle.show();
		return 0;
	}
		//QNO4
	#include<iostream>
	using namespace std;
	class employee{
		int empNo;
		float sal;
		public:
		void get();
		void dis();
	};
	void employee::get(){
		cout<<"Enter the employee number: ";
		cin>>empNo;
		cout<<"Enter the employee salary: ";
		cin>>sal;
	}
	void employee::dis(){
		cout<<"Employee No: "<<empNo<<endl;
		cout<<"Employee salary: "<<sal<<endl;
	}
	int main(){
		employee e1,e2,e3;
		cout << "--- Enter data for Employee 1 ---" << endl;
		e1.get();
		cout << "--- Enter data for Employee 2 ---" << endl;
		e2.get();
		cout << "--- Enter data for Employee 3 ---" << endl;
		e3.get();
		e1.dis();
		e2.dis();
		e3.dis();
		return 0;
	}

	#include<iostream>
	using namespace std;
	class time{
		int hours;
		int minutes;
		int seconds;
		public:
		time();
		time(int,int,int);
		void dis() const;
		void add(time&,time&);
	};
	time::time(){
		hours=0;
		minutes=0;
		seconds=0;
	}
	time::time(int h,int m,int s){
		hours=h;
		minutes=m;
		seconds=s;
	}
	void time::dis() const{
		cout<<hours<<":"<<minutes<<":"<<seconds;
	}
	void time::add(time& t1,time& t2){
		seconds=t1.seconds+t2.seconds;
		minutes=t1.minutes+t2.minutes+(seconds/60);
		seconds%=60;
		hours=t1.hours+t2.hours+(minutes/60);
		minutes%=60;
	}
	int main(){
		time t1(11,34,56);
		time t2(1,1,1);
		time t3;
		t3.add(t1,t2);
		t3.dis();
	}
	return 0;
}
#include<iostream>
using namespace std;
class time{
	int hours;
	int minutes;
	int seconds;
	public:
	time();
	time(int,int,int);
	void dis();
	time sum(time&,time&);
};
time::time(){
	hours=0;
	minutes=0;
	seconds=0;
}
time::time(int h,int m,int s){
	hours=h;
	minutes=m;
	seconds=s;
}
time time::sum(time& t1,time& t2){
	time temp;
	temp.seconds=t1.seconds+t2.seconds;
	temp.minutes=t1.minutes+t2.minutes+(seconds/60);
	seconds=seconds%60;
	temp.hours=t1.hours+t2.hours+(minutes/60);
	minutes=minutes%60;
	
	
	return temp;
}
void time::dis(){
	cout<<"the time is: "<<hours<<":"<<minutes<<":"<<seconds<<endl;
}
int main(){
	time t1(12,34,56);
	t1.dis();
	time t2(t1);
	t2.dis();
	time t3=t3.sum(t1,t2);
	t3.dis();
	return 0;
}*/
    #include<iostream>
	using namespace std;
	class tool{
		unsigned int totalcars;
		double totalcash;
		public:
		tool();
		void payingcar();
		void nonpaying();
		void dis() const;
	};
	tool::tool(){
	    totalcars=0;
		totalcash=0;	
	}
	void tool::payingcar(){
		totalcars++;
		totalcash+=0.50;
	}
	void tool::nonpaying(){
		totalcars++;
	}
	void tool::dis() const
	{
		cout<<"number of cars passed: "<<totalcars<<endl;
		cout<<"total cash: $"<<totalcash<<endl;
	}
	int main(){
		tool plaza;
		char choice;
		while(true){
			cout<<"\ntool plaza kotani";
			cout<<"\nEnter p for paying car";
			cout<<"\nEnter n for non-paying car";
			cout<<"\nEnter e to check record";
			cout<<"\nEnter choice: ";
			cin>>choice;
			if(choice=='p' || choice=='P')
			{
				plaza.payingcar();
			}else if(choice=='n' || choice=='N')
			{
				plaza.nonpaying();
			}else if(choice=='e' || choice=='e')
			{
				plaza.dis();
			}else{
				cout<<"error";
				break;
			}
		}
		return 0;
	}

