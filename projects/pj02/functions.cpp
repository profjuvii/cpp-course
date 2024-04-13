#include <iostream>

using namespace std;


// default arguments
void greet(const string name = "User"){
    cout << "Hello " << name << '!' << endl;
}


// passing parameters by reference
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}


// inline function for double increment
inline int double_increment(int& x){
    return x += 2;
}


int main(int argc, char** argv){
    greet();        // without argument
    greet("Jack");  // with an argument

    // swapping the values of num1 and num2
    int num1 = 10, num2 = 20;
    cout << "Before:\t" << "num1 = " << num1 << ", address: "<< &num1;
    cout << "\t\tnum2 = " << num2 << ", address: "<< &num2 << endl;
    swap(num1, num2);
    cout << "After:\t" << "num1 = " << num1 << ", address: "<< &num1;
    cout << "\t\tnum2 = " << num2 << ", address: "<< &num2 << endl;

    // double increment
    double_increment(num1);
    cout << num1 << endl;

    return 0;
}
