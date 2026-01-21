//1.write a function that print hello world without printing any value
/*#include<iostream>
using namespace std;
void hello(){
	cout<<"Hello World";
}
int main(){
	hello();
	return 0;
}*/
/*2.write a function that take no parameter and print sum of 5 and 10
#include<iostream>
using namespace std;
int sum(){
	return 5+10;
}
int main(){
	cout<<sum();
	return 0;
}*/
/*3.write a function that takes an integer as an parameter and prints it square without returning any value 
#include<iostream>
using namespace std;
void square(int n){
	cout<<n*n;
}
int main(){
	int a;
	cout<<"Enter number: ";
	cin>>a;
	square(a);
	return 0;
}*/
/*4.write a function that take two parmeters and returns the sum of to integers
#include<iostream>
using namespace std;
int sum(int x,int y){
	return x+y;
}
int main(){
	int a,b;
	cout<<"Enter num1: ";
	cin>>a;
	cout<<"Enter num2: ";
	cin>>b;
	cout<<sum(a,b);
	return 0;
}*/
/*5.write an overloaded function display() that prints integer value 7 times and print a string
#include<iostream>
using namespace std;
void display(int a){
	for(int i=1;i<=7;i++)
	{
		cout<<a<<" ";
	}
}
void display(string a){
	cout<<a;
}
int main(){
	int a;
	cout<<"Enter num: ";
	cin>>a;
	display(a);
	cout<<endl;
	display("Ali");
	return 0;
}*/
/*6.write two overloaded functions named multiply().one should take two integers and return 
their product and other should take three integers and  return their product
#include<iostream>
using namespace std;
int multiply(int a,int b){
	return a*b;
}
int multiply(int a,int b,int c){
	return a*b*c;
}
int main(){
	cout<<multiply(10,6);
	cout<<endl;
	cout<<multiply(5,6,4);
	return 0;
} */
/*7.write a function that take an integer as an parameter and first n numbers
of fibnaccoai series
#include<iostream>
using namespace std;
void fib(int a){
	int first=0;
	int second=1;
	int newNum;
	for(int i=0;i<=a;i++)
	{
		newNum=first+second;
		cout<<newNum<<" ";
		first=second;
		second=newNum;
	}
}
int main(){
	fib(5);
	return 0;
}*/
/*8.write a function that return maximum and minimum values from array
#include<iostream>
using namespace std;
int maxi(int arr[],int a){
	int maximum=INT_MIN;
	for(int i=0;i<a;i++){
		maximum=max(arr[i],maximum);
	}
	return maximum;
}
int mini(int arr[],int a){
	int minimum=INT_MAX;
	for(int i=0;i<a;i++){
		minimum=min(arr[i],minimum);
	}
	return minimum;
}
int main(){
	int arr[]={12,35,3292,54,246,2215,22,98,68,56,233};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<maxi(arr,size);
	cout<<endl;
	cout<<mini(arr,size);
	return 0;
}*/
/*9.write an overloaded function name countNumbers().that takes all nubers in array and calculate 
even and odd numbers in array
#include<iostream>
using namespace std;
void countNumbers(int arr[],int size){
	int even=0;
	int odd=0;
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			even++;
		}else{
			odd++;
		}
	}
	cout<<"Even: "<<even;
	cout<<"\nodd: "<<odd;
}
void countNumbers(int n){
	if(n%2==0){
		cout<<n<<" is even number.";
	}else{
		cout<<n<<" is odd number.";
	}
}
int main(){
	int arr[]={12,34,54,35,6,3,25,3,22,53};
	int size=sizeof(arr)/sizeof(arr[0]);
	countNumbers(arr,size);
	cout<<endl;
	countNumbers(5);
	cout<<endl;
	countNumbers(56);
	return 0;
}*/
/*10.write a function that take an integer value and prints a hollow diamond the function does not return any value
#include<iostream>
using namespace std;
void diamond(int a){
	cout<<"     *      \n";
	cout<<"   *   *    \n";
	cout<<" *       *  \n";
	cout<<"  *     *   \n";
	cout<<"   *   *     \n";
	cout<<"     *      \n";
}
int main(){
	int a=8;
	diamond(a);
	return 0;
}*/
/*11.write an overloaded function area that can calculate area of rectagule and area of circle.
#include<iostream>
using namespace std;
void area(int a,int b){
	cout<<"area of rectangle: "<<a*b;
}
void area(float r,float pi=3.14){
	cout<<"area of rectangle: "<<pi*r*r;
}
int main(){
	int length, breadth;
    area(3,3); 
    cout<<"\n";
    area(3);
	return 0;
}*/
/*12.write overloaded function reverse_array() that reverses the value of arrary and string
#include<iostream>
#include<algorithm>
using namespace std;
void reverse_array(int arr[],int size){
	for(int i=size;i>=0;i--){
		cout<<arr[i]<<" ";
	}
}
void reverse_array(string name){
	reverse (name.begin(),name.end());
	cout<<name;
}
int main(){
	int arr[]={9,8,7,6,5,4,3,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	reverse_array(arr,size);
	cout<<endl;
	reverse_array("jaffar");
	return 0;
}*/
//13.vowel remove 
/*#include <iostream>
using namespace std;
bool isVowel(char c) {
    c = tolower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
string removeVowels(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (!isVowel(str[i])) {
            result += str[i];
        }
    }
    return result;
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "String after removing vowels: " << removeVowels(str) << endl;
    return 0;
}*/
#include<iostream>
using namespace std;
class bankAccount{
int accountNumber;
string accountHolderName;
double balance;
public:
	bankAccount(int accNumber,string name,double bal)
	{
		accountNumber=accNumber;
		accountHolderName=name;
		balance=bal;
	}
	void deposit(double amount){
		if(amount>bal)
		{
			cout<<"insufficent balance";
		}else if(amount<1)
		{
			cout<<"Error";
		}
	}
	void withdraw(double amount)
	{
		balance-=amount;
	}
	void display(){
		cout<<"Account Balance: "<<accountNumber;
		cout<<"Account Holder Name: "<accountHolder<Name;
		cout<<"Account Balance: "<balance<;
	}
};
int main(){
	int accNumber;
	string name;
	double bal;
	cout<<"\nEnter the account Details\n";
	cout<<"Account Balance: ";
	cin>>accNumber;
	cin.ignore();
	cout<<"Account Holder Name: ";
	getline(cin,name);
	cout<<"Account Balance: ";
	cin>>bal;
	accountNumber (accNumber,name,bal);
	return 0;
}
