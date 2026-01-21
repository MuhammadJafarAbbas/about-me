/*#include <iostream>
using namespace std;
struct Rectangle{
    double length;
    float width;
};

double area(double l,double w) {
    return l*w;
}

int main() {
    Rectangle rect; 
    cout<<"Enter the value of length: ";
    cin>>rect.length;
    cout<<"Enter the value of width: ";
    cin>>rect.width;
    cout<<"Area: "<<area(rect.length,rect.width)<<endl; 
    return 0;
}*/
#include<iostream>
using namespace std;
struct student{
	string name;
	float marks;
};
int main() {
    int a=2;
    student arr[a];
    for(int i=0;i<a;i++){
    	cout<<"Enter student name: ";
        cin>>arr[i].name;
    	cout<<"Enter student marks: ";
    	cin>>arr[i].marks;
	}
	for(int i=0;i<a;i++){
    	cout<<"\nstudent name: ";
        cout<<arr[i].name;
    	cout<<"\nstudent marks: ";
    	cout<<arr[i].marks;
	}
    for(int i=0;i<a-1;i++){
        for (int j=i;j<a;j++) {
            if (arr[j].marks<arr[j+1].marks){
                student temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout <<"\nStudent details by marks\n";
    for (int i=0;i<a;i++){
        cout<<"Name: "<<arr[i].name<<", Marks: "<<arr[i].marks<<endl;
    }
    return 0;
}