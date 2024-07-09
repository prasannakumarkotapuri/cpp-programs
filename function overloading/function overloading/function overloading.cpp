// function overloading.cpp : 

#include <iostream>
using namespace std;
void add(int a, int b) {
    cout << "int 2 parameters: " <<( a + b)<< endl;
}
void add(double a, double b) {
   
    cout << "double 2 parameters : " << a+b<< endl;
    
   
}
 void add(char c){
    cout << "char: " << c << endl;
}

int main()
{

    add(10,20);
    add(2.5, 2.5);
    add('c');
    std::cout << "Hello World!\n";
}

