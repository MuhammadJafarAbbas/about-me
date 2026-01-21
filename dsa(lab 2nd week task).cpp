//task1
/*#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int* arr=new int[size];
	bool found=false;
	cout<<"enter array elements\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int search;
	cout<<"Enter element to search\n";
	cin>>search;
	for(int i=0;i<size;i++){
		if(arr[i]>search){
			found=true;
			cout<<arr[i]<<" ";	
		}
	}
	if(!found){
		cout<<"no element have greater value "<<endl;
	}
	delete[] arr;
	return 0;
}*/
/*
//lab task2
#include<iostream>
using namespace std;
int main(){
	int* arr1=new int(5);
	cout<<"enter array elements"<<endl;
	for(int i=0;i<5;i++){
		cin>>arr1[i];
	}
	int* arr2=new int(3);
	cout<<"enter array elements"<<endl;
	for(int i=0;i<3;i++){
		cin>>arr2[i];
	}
	
	int* arr3=new int(8);
	for(int i=0;i<5;i++){
		arr3[i]=arr1[i];
	}
	
	for(int i=0;i<3;i++){
		arr3[5+i]=arr2[i];
	}
	
	for(int i=0;i<8;i++){
		cout<<arr3[i]<<" ";
	}
	
	delete[] arr1;
    delete[] arr2;
    delete[] arr3;
	
	return 0;
}*/
/*
//lab task3
#include<iostream>
using namespace std;
int main(){
	int row;
	int column;
	cout<<"Enter the number of rows: ";
	cin>>row;
	cout<<"Enter the number of columns: ";
	cin>>column;
	
	int** array=new int*[row];
	for(int i=0;i<row;i++){
		array[i]=new int[column];
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cin>>array[i][j];
		}
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int eCount=0;
	int oCount=0;
	cout<<"Even numbers in array are: ";
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(array[i][j] % 2 == 0){
				eCount++;
				cout<<array[i][j]<<" ";
			}
		}
	}
	cout<<"\nodd numbers in array are: ";
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(array[i][j] % 2 != 0){
				oCount++;
				cout<<array[i][j]<<" ";
			}
		}
	}
	cout<<endl;
	cout<<"even numbers are: "<<eCount<<endl;
	cout<<"odd numbers are: "<<oCount<<endl;
	
    for(int i=0; i<row; i++){
        delete[] array[i];
    }
    delete[] array;
	return 0;
}*/
/*
//lab task4
#include<iostream>
using namespace std;
int main(){
	int row;
	int column;
	cout<<"Enter the number of rows: ";
	cin>>row;
	cout<<"Enter the number of column: ";
	cin>>column;
	int** array=new int*[row];
	for(int i=0;i<row;i++){
		array[i]=new int[column];
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cin>>array[i][j];
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int oCount=0;
	int eCount=0;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(array[i][j] % 2 ==0){
				eCount++;
			}else{
			   oCount++;
		    }
		}
	}


    int* evens=new int[eCount];
    int* odds=new int[oCount];

    int eIndex=0,oIndex=0;

    cout<<"\nArray elements:\n";
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++){
            cout<<array[i][j]<<" ";
            if(array[i][j] % 2 == 0)
                evens[eIndex++]=array[i][j];
            else
                odds[oIndex++]=array[i][j];
        }
        cout<<endl;
    }

    cout<<"\nEven numbers array: ";
    for(int i=0; i<eCount;i++){
        cout<<evens[i]<<" ";
    }

    cout<<"\nOdd numbers array: ";
    for(int i=0;i<oCount;i++){
        cout<<odds[i]<<" ";
    }
    cout<<endl;


    for(int i=0;i<row;i++){
        delete[] array[i];
    }
    delete[] array;
    delete[] evens;
    delete[] odds;
	
	cout<<"\nodd numbers are: "<<oCount<<endl;
	cout<<"even numbers are: "<<eCount<<endl;
	return 0;
}*/

//lab task 5
#include<iostream>
using namespace std;
int main(){
	int row;
	int column;
	cout<<"Enter the number of rows: ";
	cin>>row;
	cout<<"Enter the number of column: ";
	cin>>column;
	int** array=new int*[row];
	for(int i=0;i<row;i++){
		array[i]=new int[column];
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cin>>array[i][j];
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}

 
    cout<<"\nMaximum element in each row:\n";
    for(int i=0;i<row;i++){
        int maxVal=array[i][0];  
        for(int j= 1;j<column;j++){
            if(array[i][j]>maxVal){
                maxVal=array[i][j];
            }
        }
        cout<<"Row "<<i+1<<" greater value is: "<<maxVal<<endl;
    }

 
    for(int i=0;i<row;i++){
        delete[] array[i];
    }
    delete[] array;

    return 0;
}


