#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter first value:";
    cin>>a;
    
    cout<<"Enter second value:";
    cin>>b;
    
    char c;
    cout<<"Enter the operator like (+,-,*,/)=";
    cin>>c;
    
    float add;
    add=a+b;
    
    float substract;
    substract=a-b;
    
    float multiply;
    multiply=a*b;
    
    float divide;
    divide=a/b;
    

    
    if(c=='+'){
       cout<<"The calculated value after addition is:"<<add<<endl;
    }
    else if(c=='-'){
        cout<<"The calculated value after substraction is:"<<substract<<endl;
    }
    else if(c=='*'){
        cout<<"The calculated value after multiplication is:"<<multiply<<endl;
    }
    else if(c=='/'){
        cout<<"The calculated value after division is:"<<divide<<endl;
    }
    else{
        cout<<"You entered invalid operator please enter the valid operator";
    }
    
    return 0;
    
}