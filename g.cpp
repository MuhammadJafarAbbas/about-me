#include<iostream>
include<iostream>
	using namespace std;
	class tool{
		unsigned int totalcars;
		double totalcash;
		public:
		tool();
		tool(int ,double);
		void payingcar();
		void nonpaying();
	};
	tool::tool(){
	    totalcars=0;
		totalcash=0;	
	}
	tool::tool(int c,double tc){
		totalcars=c;
		totalcash=tc;
		payingcar();
	}
	void tool::payingcar(){
		cout<<"Alhamdulliah";
	}
	int main(){
        tool t(5,6.5);
		return 0;
	}