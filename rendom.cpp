/*#include<iostream>
using namespace std;
int main(){
	int a=11;
	int result;
	int arr[a]={1,2,3,4,-1,3,5,7,6,-1,10};
	bool skip;
	for(int i=0;i<a;i++)
	{
		if(arr[i]==-1)
		{
			skip=!skip;
			continue;
		}
		if(!skip){
			result+=arr[i];
		}
	}
	cout<<"result: "<<result;
	return 0;
}
#include<iostream>
using namespace std;
class grandF{
	public:
	void gf(){
		cout<<"Khair Muhammad"<<endl;
	}
};
class father : public grandF{
	public:
	void f(){
		cout<<"Ghulam Abbas"<<endl;
	}
};
class me : public father{
    public:
	void my(){
		cout<<"M Jafar Abbas"<<endl;
	}	
};
int main(){
	me m;
	m.gf();
	m.f();
	m.my();
	return 0;
}
#include<iostream>
using namespace std;
class student{
	protected:
	string name;
	int roll;
	void inpN(){
		cout<<"Enter the student name: ";
        cin>>name;	
		cout<<"Enter the student roll no: ";
		cin>>roll;
	}
	void disN(){
		cout<<"the student name is: "<<name<<endl;
		cout<<"the student roll no is: "<<roll<<endl;
	}
};
class subject : public student{
	public:
	int math,bio,chem,urdu;
	void inpM(){
		inpN();
		cout<<"Enter math marks: ";
		cin>>math;
		cout<<"Enter bio marks: ";
		cin>>bio;
		cout<<"Enter chemistry marks: ";
		cin>>chem;
		cout<<"Enter urdu marks: ";
		cin>>urdu;
	}
};
class grade : public subject{
	public:
	double averege;
    void ave(){
    	inpM();
    	averege=(math+bio+chem+urdu)/4.0;
	}
	void dis(){
		ave();
		disN();
		cout<<"the student averege marks are: "<<averege<<endl;
	}
};
int main(){
	grade g;
	g.dis();
	return 0;
}
*/
/*#include<iostream>
using namespace std;
class doctor{
	protected:
    int id;
	string name;
	public:
	void docInfo(){
		cout<<"Enter doctor's id: ";
	    cin>>id;
	    cout<<"Enter doctor's name: ";
	    cin.ignore();
	    getline(cin,name);
	}
	void docDis(){
		cout<<"doctor's id: "<<id<<endl;
		cout<<"doctor's name: "<<name<<endl;
	}
};
class patient : public doctor{
    public:
	int id,age;
	string pN,illness;
		void patientInfo(){
		cout<<"Enter patient's id: ";
	    cin>>id;
	    cout<<"Enter patient's name: ";
	    cin.ignore();
	    getline(cin,pN);
	    cout<<"Enter patient's age: ";
	    cin>>age;
	    cout<<"Enter patient's illness: ";
	    cin.ignore();
	    getline(cin,illness);
	}
	void patientDis(){
	    docDis();
		cout<<"patient's id: "<<id<<endl;
		cout<<"patient's name: "<<pN<<endl;
		cout<<"patient's age: "<<age<<endl;
		cout<<"patient's name: "<<illness<<endl;
	}	
};
class appoinment : public patient{
	public:
	string appointD;
	void appointDate(){
		patientInfo();
		cout<<"Enter the date(dd/mm/yy): ";
		cin.ignore();
		getline(cin,appointD);
	}
	void dis(){
		
		patientDis();
		cout<<"appointment date is: "<<appointD<<endl;
	}
};
int main(){
	appoinment a;
	int choice;
	bool remove=false;
	while(true){
	    cout<<"0.to add doctor\n";
	    cout<<"1.to add patient\n";
	    cout<<"2.to remove patient\n";
	    cout<<"3.to display data\n";
	    cout<<"4.to exit\n";
		cout<<"Enter your choice: ";
		cin>>choice;
		if(choice==0)
		{
			a.docInfo();
		}else if(choice==1)
		{
			a.appointDate();
		}
		else if(choice == 3)
		{
			a.dis();
		}else {
			break;
		}
	}
	return 0;
}*/
/*#include<iostream>
using namespace std;
class doctor{
	protected:
    int id;
	string name;
	public:
	void docInfo(){
		cout<<"Enter doctor's id: ";
	    cin>>id;
	    cout<<"Enter doctor's name: ";
	    cin.ignore();
	    getline(cin,name);
	}
	void docDis(){
		cout<<"doctor's id: "<<id<<endl;
		cout<<"doctor's name: "<<name<<endl;
	}
};
class patient : public doctor{
    public:
	int pid,age;
	string pN,illness;
		void patientInfo(){
		docInfo();
		cout<<"Enter patient's id: ";
	    cin>>pid;
	    cout<<"Enter patient's name: ";
	    cin.ignore();
	    getline(cin,pN);
	    cout<<"Enter patient's age: ";
	    cin>>age;
	    cout<<"Enter patient's illness: ";
	    cin.ignore();
	    getline(cin,illness);
	}
	void patientDis(){
	    docDis();
		cout<<"patient's id: "<<pid<<endl;
		cout<<"patient's name: "<<pN<<endl;
		cout<<"patient's age: "<<age<<endl;
		cout<<"patient's name: "<<illness<<endl;
	}	
};
class appoinment : public patient{
	public:
	string appointD;
	void appointDate(){
		patientInfo();
		cout<<"Enter the date(dd/mm/yy): ";
		cin.ignore();
		getline(cin,appointD);
	}
	void dis(){
		
		patientDis();
		cout<<"appointment date is: "<<appointD<<endl;
	}
};
int main(){
	appoinment arr[100];
	int count=0;
	int choice;
	bool remove=false;
	while(true){
	    cout<<"1.to add input data\n";
	    cout<<"2.to remove patient\n";
	    cout<<"3.to display data\n";
	    cout<<"4.to exit\n";
		cout<<"Enter your choice: ";
		cin>>choice;
		if(choice==1)
		{
			arr[count].appointDate();
			count++;
		}else if(choice==2)
		{
			int id;
			cout<<"\nEnter id to remove patient: ";
			cin>>id;
			bool remove=false;
		    for(int i=0;i<count;i++)
		    {
		    	if(arr[i].pid==id)
		    	{
		    		for(int j=i;j<count-1;j++)
		    		{
		    			arr[j]=arr[j+1];
					}
					count--;
					remove=true;
					cout<<"\npatient removed\n";
					break;
				}
				if(remove=false)
				{`
					cout<<"\n not found";
				}
			}
		}
		else if(choice == 3)
		{
			if(count==0)
			{
				cout<<"no data added\n";
			}else{
				for(int i=0;i<count;i++)
				{
					arr[i].dis();
				}
			}
		}else {
			break;
		}
	}
	return 0;
}
#include<iostream>
using namespace std;
class book{
	int price;
	string title,author;
	public:
	int id;
	void input(){
		cout<<"Enter book id: ";
		cin>>id;
		cout<<"Enter book title: ";
		cin.ignore();
		getline(cin,title);
		cout<<"Enter author name: ";
		cin.ignore();
		getline(cin,author);
		cout<<"Enter the book price: ";
		cin>>price;
	}
	void dis(){
		cout<<"\nbook id: "<<id;
		cout<<"\nbook title: "<<title;
		cout<<"\nauthor name: "<<author;
		cout<<"\nbook price: "<<price;
	}
};
int main(){
	book arr[100];
	int count=0;
	int choice;
	bool found=false;
	while(true)
	{
		cout<<"\n1.Enter to input data";
		cout<<"\n2.Enter to puchase book";
		cout<<"\n3.Enter to show remaning stock";
		cout<<"\n4.to Exit";
		cout<<"\nEnter your choice: ";
		cin>>choice;
		if(choice==1)
		{
			arr[count].input();
			count++;
		}else if(choice==2)
		{
			int idn;
			cout<<"\nEnter book id you wanted to purchased: ";
			cin>>idn;
			for(int i=0;i<count;i++)
			{
				
				if(arr[i].id==idn)
				{
					for(int j=i;j<count-1;j++)
					{
						arr[j]=arr[j+1];
					}
					count--;
					found=true;
					cout<<"\nbook purchased";
					arr[i].dis();
					break;
			    }else if(found==false)
			    {
			    	cout<<"\n not found";
				}
			}
		}else if(choice==3)
		{
			if(count==0)
			{
			   cout<<"stock ended";	
			}
			for(int i=0;i<count;i++){
				arr[i].dis();
			}
				
		}else{
			cout<<"\nthanks for using our system";
			break;
		}
	} 
	return 0;
}*/
#include<iostream>
using namespace std;
int main(){
	int a=10,result;
	bool skip;
	int arr[a]={1,2,-1,4,5,6,7,-1,9,10};
	for(int i=0;i<a;i++)
	{
		if(arr[i]==-1)
		{
			skip=!skip;
			continue;
		}
		if(!skip)
		{
			result+=arr[i];
		}
	}
	cout<<"result: "<<result<<endl;
	return 0;
}