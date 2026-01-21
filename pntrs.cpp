/*#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int *ptr;
	ptr=arr;
	for(int i=0;i<5;i++)
   {    cout<<ptr<<endl;
	    cin>>*ptr;
	    ptr++;
    }
    
}
#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *ptr;
	ptr=&a;
	cout<<"a: "<<a<<endl;
	cout<<"&a: "<<&a<<endl;
	cout<<"ptr: "<<ptr<<endl;
	cout<<"&ptr: "<<&ptr<<endl;
	cout<<"*ptr: "<<*ptr<<endl;
	return 0;
}*/
#include<iostream>
using namespace std;
int main(){
//	int a=12;
//	int *ptr;
//	ptr=&a;
//	*ptr+=a;
//	cout<<"ptr: "<<ptr<<endl;
//	cout<<"a: "<<a<<endl;
//    int arr[5];
//    int *ptr;
//    ptr=arr;
//    for(int i=0;i<5;i++)
//    {
//    	cin>>*ptr;
//    	cout<<ptr<<endl;
//    	cout<<*ptr<<endl;
//    	ptr++;
//	}
	//heap
	int *ptr;
	ptr=new int;
	cin>>*ptr;
	cout<<ptr<<endl;
	cout<<*ptr;
	delete ptr;
	return 0;
}

