#include<iostream>
#include<cmath>
using namespace std;

void printHello(){
    cout<<"Hello"<<endl;
}

void workwithdatatype(){
    int a=10;
    int b=20;
    cout<<"Value of A:"<<a<<endl;
    cout<<"Value of B:"<<b<<endl;
}

void printz(){
        cout<<"*****"<<endl;
        cout<<"   * "<<endl;
        cout<<"  *  "<<endl;
        cout<<" *   "<<endl;
        cout<<"*****"<<endl;
}

void gradingsystem(int n){
    if(n>90){
        cout<<"excellent"<<endl;
    }
    else if(n>80 && n<=90){
        cout<<"good"<<endl;
    }
    else if(n>70 && n<=80){
        cout<<"fair"<<endl;
    }
    else if(n>60 && n<=70){
        cout<<"meets"<<endl;
    }
    else{
        cout<<"below par"<<endl;
    }
}

void oddeven(int n){
    if (n%2==0){
        cout<<"Even"<<endl;
    }
    else {
        cout<<"Odd"<<endl;          
    }
}

bool isprime_(int n){
    bool prime=true;
    for(int i=2; i*i<n; i++){
        if(n%i==0){
            prime=false;
            break;
        }
    
    }
    return prime;
}

void isprime(int x){
    bool ans= isprime_(x);
    if(ans){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}        
    
void isallprime(int a, int b){
    for(int i=a; i<=b; i++){
        bool ans= isprime_(i);
        if (ans){
            cout<<i<<endl;
        }
    }
}

//important
void printfibo(int n){
    if (n==1){
        cout<<0<<endl;
    }
    int a=0, b=1;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        int sum=a+b;
        a=b;
        b=sum;
    }
}   
    
int countdigits(int n){
    int count=0;
    int num=n;
    while(num>0){
        count = count +1;
        num=num/10;
    }
    return count; 
}

//important
int rotatenumber(int n, int r){
    int len=countdigits(n);
    r%=len;
    if(r<0){
        r=(r+len)% len;
    }

    int mul=1, div=1;
    for(int i=1; i<=len; i++){
        if(i<=r){
            mul=mul*10;
        }
        else{
            div=div*10;
        }
    }
    int a=n%div;
    int b=n/div; 
    return (a*mul)+b; 
}

void showdigits(int n){
    int len=countdigits(n);
    int num=n;
    int di=1;
    while(len-->1){
        di *=10;
    }
    while(di!=0){
        cout<<n/di<<endl;
        n=n%di;
        di=di/10;
    }
}

//important
void reversenumber(int n){
    int len=countdigits(n);
    int num=n;
    for(int i=0; i<len; i++){
        cout<<num%10<<endl;
        num=num/10;
    }
}

//important
void inversenumber(int n){
    int len=countdigits(n);
    int num=n;
    int digit=0;
    int res=0;
    for(int i=1; i<=len; i++){
        digit= n%10;
        res = res*10 + digit ;
        n=n/10;
    }
    cout<<res<<endl;
}

int gcd(int a, int b){
    int divisor=a;
    int divident=b;
    while(divident%divisor!=0){
        int rem=divident%divisor;
        divident=divisor;
        divisor=rem;
    }
    return divisor;
}

int lcm(int a, int b, int gcd){
    return ((a/gcd)*b);
}

//important
bool isPythagorean(int a,int b,int c){
    if((a*a + b*b == c*c ) || (b*b + c*c == a*a) || (a*a + c*c == b*b)){
        return true;
    }
    return false;
}

void benjaminbulb(int n){
    for(int i=1; i*i<=n; i++){
        cout<<i*i<<endl;
    }
}

int main(){
    //printHello();
    //workwithdatatype();
    //printz();
    //int n;
    //cin>>n;
    //gradingsystem(n);
    //oddeven(n);
    //isprime(n);
    //int m;
    //cin>>m;
    //isallprime(n,m);
    //printfibo(n);
    //cout<<countdigits(n);
    //showdigits(n);
    //cout<<rotatenumber(n,m);
    //reversenumber(n);
    //inversenumber(n);
    //int k;
    //cin>>k;
    //cout<<isPythagorean(n,m,k);
    return 0;
}