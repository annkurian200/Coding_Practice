
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
}
#include<iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"enter: ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int a[5],sum=0;
    cout<<"enter the numbers: ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
    cout<<sum;

}

#include<iostream>
using namespace std;
int main(){
    int a[5],i;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    int lar=a[0];
    for(i=0;i<5;i++){
        if(a[i]>lar){
            lar=a[i];
        }
    }
    cout<<lar;
}

#include<iostream>
using namespace std;
int main(){
    int a[5],i;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    int sma=a[0];
    for(i=0;i<5;i++){
        if(a[i]<sma){
            sma=a[i];
        }
    }
    cout<<sma;
}

#include<iostream>
using namespace std;
int main(){
    int a[5],i,n,found=false;
    cout<<"enter numbers of array: ";
    for(i=0;i<5;i++){
        cin>>a[i];                                                                                                                                         a[i];
    }
    cout<<"Enter a number to find";
    cin>>n;
    for(i=0;i<5;i++){
        if(a[i]==n){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"Found";

    }
    else{
        cout<<"not found";
    }
}

#include<iostream>
using namespace std;
int main(){
    int a[10],i,sum=0,avg;
    cout<<"enter numbers for array: ";
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    int lar=a[0],sma=a[0];
    for(i=0;i<10;i++){
        if(a[i]>lar){
            lar=a[i];
        }
    }
    cout<<"Largest number is: "<<lar;
    for(i=0;i<10;i++){
        if(a[i]<sma){
            sma=a[i];
        }
    }
    cout<<"\n Smallest number is: "<<sma;
    for(i=0;i<10;i++){
        sum=sum+a[i];
    }
    cout<<"\n Sum is: "<<sum;
    avg=sum/10;
    cout<<"\n average is: "<<avg;
}


//Type casting 
//Type conversion implicit
#include<iostream>
using namespace std;
int main(){
    char grade='A';
    int value=grade;
    cout<<value<<endl;
    return 0;
}
//Type casting explicit
#include<iostream>
using namespace std;
int main(){
    int value =65;
    char grade =value;
    cout<<grade<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    cout<<(5/2)<<endl;
    cout<<(5/(double)2);
    return 0;
}

//Ternary Statement
#include<iostream>
using namespace std;
int main(){
    int n=21;
    cout<<(n%2==0 ? "even":"odd")<<endl;
    return 0;
}
//Revision
//Sum of all odd numbers
#include<iostream>
using namespace std;
int main(){
    int n,count=0,sum=0;
    cout<<"Number: ";
    cin>>n;
    while(count<=n){
        if(count%2!=0){
            sum=sum+count;
        }
        count=count+1;
    }
    cout<<"\nSum of odd numbers is: "<<sum;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n,i,res=1;
    cout<<"enter number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        res=res*i;
    }
    cout<<"\n Factorial: "<<res;
}
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    for(i=0;i<n;i++){
        char ch='A';
        for(j=0;j<n;j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"Enter a number";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch;
        }
        cout<<endl;
        ch=ch+1;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
//Reverse
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j;
        } 
        cout<<endl;
    }
}

//Floyds Triangle
#include<iostream>
using namespace std;
int main(){
    int num=1,n=4;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    char ch='A';
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }

}
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<i+1;j++){
            cout<<ch;
            ch=ch-1;
        }
        cout<<endl;
    }
}
//Inverse
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<ch;
        }
        ch=ch+1;
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(i+1);j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
//Hallow diamond
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(i+1);j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j=0;j<2*i-1;j++){
            cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=1){
            for(int j=0;j<2*(i-1)-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}
//2nd method
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(i+1);j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j=0;j<2*i-1;j++){
            cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    //diferent from here
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){
            for(int j=0;j<2*(n-i)-5;j++){   // 2*(n-2-i)-1
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}
//Butterfly pattern
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        if(i!=n-1){
            for(int j=0;j<2*(n-1-i);j++){
                cout<<" ";
            }
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        if(i!=n){
            for(int j=0;j<2*(n-i);j++){
                cout<<" ";
            }
        }
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;

    }
}

#include<iostream>
using namespace std;
int sumOfno(int n){
    int sum=0;
    for(int i=0; i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    cout<<"Sum = "<<sumOfno(5);
    return 0;
}

#include<iostream>
using namespace std;
int fact(int n){
    int res=1;
    while(n>0){
        res=res*n;
        n=n-1;
    }
    return res;
}
int main(){
    cout<<"Factorial = "<<fact(5);
    return 0;
}

#include<iostream>
using namespace std;
int sumOfdigits(int n){
    int sum=0,r;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}

int main(){
    cout<<"Sum of digits is = "<<sumOfdigits(111);
    return 0;
}
#include<iostream>
using namespace std;
int fact(int n ){
    int res=1;
    while(n>0){
        res=res*n;
        n=n-1;
    }
    return res;
}
int binomialcoeff(int n,int r){
    int num=fact(n);
    int re=fact(r);
    int m=fact(n-r);

    return num/(re*m);
}
int main(){
    cout<<binomialcoeff(8,2);
    return 0;
}

#include<iostream>
using namespace std;
int primenos(int n){
    bool isPrime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    cout<<primenos(5);
    return 0;
}
//complete this
#include<iostream>
using namespace std;
void primenos(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<< i<<endl;
        }

    }
}
int main(){
    primenos(10);
    return 0;
}
//Binary system
#include<iostream>
using namespace std;
int binary(int num){
    int r,ans=0,power=1;
    while(num>0){
        r=num%2;
        num=num/2;
        ans=ans+r*power;
        power=power*10;
    }
    return ans;
}
int main(){
    cout<<binary(42);
    return 0;
}

#include<iostream>
using namespace std;
int decimal(int n){
    int r,ans=0,power=1;
    while(n>0){
        r=n%10;
        ans=ans+r*power;
        n=n/10;
        power*=2;

    }
    return ans;
}
int main(){
    cout<<decimal(101010);
    return 0;
}
//Bitwise operators
#include<iostream>
using namespace std;
int main(){
    int a=6,b=10;
    cout<<(a & b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;;
    cout<<(10<<2)<<endl;
    cout<<(10>>1)<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a[5]={2,4,6,1,7};
    int sm=INT_MAX;//this is largest number till infinity
    int la=INT_MIN;
    for(int i=0;i<5;i++){
        if(a[i]<sm){
            sm=a[i];
        }
    }
    for(int i=0;i<5;i++){
        if(a[i]>la){
            la=a[i];
        }
    }
    for(int i=0;i<5;i++){
        sm=min(a[i],sm);
    }
    cout<<sm;
}

//Print index of smallest number
#include<iostream>
using namespace std;
int main(){
    int a[]={2,1,4,0,5};
    int size=5;
    int sm=INT_MAX;
    int i,index;
    for(i=0;i<size;i++){
        if(sm>a[i]){
            index=i;
        }
    }
    cout<<index;
}
//Linear Search
#include<iostream>
using namespace std;
int linear(int a[],int s,int target){
    for(int i=0;i<s;i++){
        if(a[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[]={2,3,4,2,5,6};
    int s=6;
    int target=60;
    cout<<linear(a,s,target);
    return 0;
}
//Reverse array without making a new array
#include<iostream>
using namespace std;
void rev(int a[],int s){
    int start=0;
    int end=s-1;
    while(start<end){
        swap(a[start],a[end]);
        start++,end--;
    }
}
int main(){
    int a[]={2,3,1,5,4};
    int s=5;
    rev(a,s);
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
}
//HW
//Sum &product of array
#include<iostream>
using namespace std;
int main(){
int a[]={1,2,1,1,1};
int s=5;
int sum=0,res=1;
for(int i=0;i<s;i++){
    sum=sum+a[i];
}
cout<<"Sum is: "<<sum<<endl;
for(int i=0;i<s;i++){
    res=res*a[i];
}
cout<<"Product is: "<<res;
}
*/
//Swap Max and min of array incomplete 
#include<iostream>
using namespace std;
void swap_m(int a[],int s){
    int sm=INT_MAX;
    int min_i;
    for(int i=0;i<s;i++){
        if(a[i]<sm){
            min_i=i;
        }
    }
    int la=INT_MIN;
    int max_i;
    for(int i=0;i<s;i++){
        if(a[i]>la){
            max_i=i;
        }
    }
    swap(a[max_i],a[min_i]);
}
int main(){
    int a[]={5,2,3,4,1};
    int s=5;
    swap_m(a,s);
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
}