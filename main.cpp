#include <iostream>

using namespace::std;

//a = bq * r
//(a, b) = (b, r)
void gcd(int a, int b){
    int divisor, r;
    if (b > a){
        int temp = a;
        a = b;
        b = temp;
    }
    while (b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    divisor = a;




    cout << divisor;


}

int main(){

    int input1, input2;
    cout << "Enter first number: ";
    cin >> input1;
    cout << endl;
    cout << "Enter second number: ";
    cin >> input2;
    cout << endl;

    gcd(input1, input2);

    return 0;
}