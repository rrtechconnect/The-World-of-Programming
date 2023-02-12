#include<iostream>

int main(){
	int a = 54;
	
	int * pointertoA = &a;
	std::cout<<"a = "<<a<<"\n";
	std::cout<<"The address of a is at &a which is "<<&a<<"\n";
	std::cout<<"pointertoA stores "<<pointertoA<<"\n";
	std::cout<<"The value of a stored at pointertoA adress is: "<< *pointertoA <<"\n";
	return 0;
}