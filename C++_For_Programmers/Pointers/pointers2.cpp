#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	int givenInt;
	float givenFloat;
	double givenDouble;
	string givenString;
	char givenChar;
	int * pointerGivenInt;
	int **pointerPointerGivenInt;
	
	pointerGivenInt = &givenInt;
	pointerPointerGivenInt = &pointerGivenInt;
	
	cout<<"interger = \n";
	cin>>givenInt;
	cout<<"float = \n";
	cin>>givenFloat;
	cout<<"double = \n";
	cin>>givenDouble;
	cin.ignore();//ignore the characters in the buffer leftover from the given double 
	cout<<"charater = \n";
	cin>>givenChar;
	cout<<"string = \n";
	cin.ignore();
	getline(std::cin, givenString);
	
	cout<<"integer = "<<givenInt<<"\n";
	cout<<"float = "<<givenFloat<<"\n";
	cout<<"double = "<<givenDouble<<"\n";
	cout<<"string = "<<givenString<<"\n";
	cout<<"character = "<<(char)givenChar<<"\n";
	
	cout<<"address of integer = "<<&givenInt<<"\n";
	cout<<"address of float = "<<&givenFloat<<"\n";
	cout<<"address of double = "<<&givenDouble<<"\n";
	cout<<"address of string = "<<&givenString<<"\n";
	cout<<"address of character = "<<(void *)&givenChar<<"\n";
	
	cout<<"pointer of the givenInt = " <<*pointerGivenInt<<"\n";
	cout<<"pointer of pointer of givenInt = " << **pointerPointerGivenInt<<"\n";
	
	return 0;	
}