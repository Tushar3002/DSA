#include<iostream>
using namespace std;

void pract(){
    int a=10;
    int* ptr=&a;
    int** parptr=&ptr;



    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << parptr << endl;
    cout << *(&a) << endl;
    cout << *(parptr) << endl;
}

void Change(int* ptr){// pass by reference using pointer
    *ptr=20;
}

void Change2(int &b){//pass by reference using alias
    b=30;
}

int main(){
    int a=10;
    //Change(&a);
    Change2(a);
    cout << a << endl;
    return 0;
}