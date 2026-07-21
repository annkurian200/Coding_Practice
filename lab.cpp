
/*#include <iostream>
using namespace std;
int main() {
    string n;
    cout<<"Enter name";
    cin>>n;
    cout<<"Hello,"<<n<<"!";
    return 0;

}
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<a+b;
    cout<<a-b;

}

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter your age";
    cin>>a;
    cout<<"Next year you will be"<<a+1<<"years old";
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a ,b,temp;
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<endl<<b;
    return 0;
}
 #include<iostream>
 using namespace std;
 int main(){
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<a*b;
    return 0;
    
}

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"Addition"<<a+b<<endl;
    cout<<"subtraction"<<a-b<<endl;
    cout<<"Muliplication"<<a*b<<endl;
    cout<<"Division"<<a/b<<endl;
    cout<<"Remainder = "<<a%b<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number";
    cin>>a;
    cout<<"Square"<<a*a;
    cout<<"Cube"<<a*a*a;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two numbers";
    cin>>n1>>n2;
    if(n1==n2){
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter numbers:";
    cin>>n1>>n2;
    if(n1>n2){
        cout<<n1<<"is larger";
    }
    else{
        cout<<n2<<"is larger";
    }
    return 0;
}
🎯 Today's Challenge

Write a program that:

Takes three numbers as input.
Prints:
Their sum
Their average
Their product

Example:

Input:

10
20
30

Output:

Sum = 60
Average = 20
Product = 6000

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter age";
    cin>>a;
    if(a>=18){
        cout<<"Eligible to Vote";
    }
    else{
        cout<<"Not Eligible";
    }
    return 0;

}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(n>0){
        cout<<"Positive Number";
    }
    else if(n<0){
        cout<<"Negative Number";
    }
    else{
        cout<<"Zero";
    }
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter marks";
    cin>>m;
    if(m>=90){
        cout<<"A";
    }
    else if(m>=75){
        cout<<"B";
    }
    else if(m>=50){
        cout<<"C";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}*/


/*
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two numbers";
    cin>>n1>>n2;
    if(n1>n2){
        cout<<n1<<"is larger";
    }
    else if(n2>n1){
        cout<<n2<<"is larger";
    }
    else{
        cout<<"Both numbers are equal";
    }
    return 0;
} 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(n%5==0){
        cout<<"Divisible";
    }
    else{
        cout<<"Not Divisible";
    }
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=10;i++){
        cout<<i<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    for(int i=10;i>=1;i--){
        cout<<i<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=20;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=20;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
        
    }
    cout<<sum;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;;
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=5;i++){
        for(int j=0;j<i;j++){
            cout<<i;
        }
    cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    for(int i=5;i>=1;i--){
        for(int j=5;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
      }
}
#include<iostream>
using namespace std;
int main(){
    for(char i='A';i<='E';i++){
        for(char j='A';j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    for(int i=5;i>=1;i--){
        for(int j=5;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
void welcome()
{
    cout<<"Welcome to C++";
}
int main()
{
welcome();
return 0;
}
#include<iostream>
using namespace std;
void printsquare(int n)
{
    cout<<"square is "<<n*n;
}
int main()
{
printsquare(5);
return 0;
}

#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    cout<<"sum is "<<sum(10,20);
    return 0;
}
 
#include<iostream>
using namespace std;
int multiply(int a,int b){
    return a*b;
}
int main(){
    cout<<"product is "<<multiply(10,20);
    return 0;
}

#include<iostream>
using namespace std;
bool isEven(int n){
    if(n%2==0){
        return true;
    }
    else{
    return false;
    } 
}
int main(){
    if(isEven(10)){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    return 0;
}
#include<iostream>
using namespace std;
int fac(int n){
    while(n>1){
        return n*fac(n-1);
    }
}
int main(){
    cout<<"factorial is "<<fac(5);
}*/
#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}