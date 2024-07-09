// friend class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

class Car
{
	string Brake;
public:
	//Car(){}
	//Car(string brake) { Brake = brake; }
	 virtual void print(){ cout << "Base Class " << endl; }

	
};
class Lorry:public Car 
{
public:
	//Lorry(){}
	void print() { cout << "derived Class  LORRY"<<endl; }
	
};
class Bike :public Car
{
public:
	//Bike(){}
	void print() { cout << "Derived Class BIKE" << endl; }
};

int main()
{
	
	Car* l = new Bike;
	l->print();


  
}


