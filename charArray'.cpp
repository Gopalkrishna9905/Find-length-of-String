#include<iostream>
using namespace std;

int main()
{
	int count =0;
	char name[10];
	cout<<"enter string : ";
	cin>>name;
	cout<<"String is  : "<<name<<endl;
    for(int i =0;name[i]!='\0';i++){
    	count++;
	}
	cout<<"Length of String is : " <<count;
	
	
	
	return 0;
}
