#include<iostream>
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

bool isprime_(){
    bool prime=true;
    for(int i=2; i*i<n; i++){
        if(n%i==0){
            prime=false;
            break;
        }
    
    }
    return prime;
}

void isprime(){
    int x;
    cin>>x;
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

void printfibo(int n){
        if (n==1){
            System.out.println(0);
        }
        int a=0, b=1;
        for(int i=1; i<=n; i++){
            System.out.println(a);
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
    return (a*mul)+div; 
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

void reversenumber(int n){
    int len=countdigits(n);
    int num=n;
    for(int i=0; i<len; i++){
        cout<<num%10<<endl;
        num=num/10;
    }
}

void inversenumber(int n){
    int len=countdigits(n);
    int num=n;
    int digit=0;
    int res=0;
    for(int i=1; i<=len; i++){
        digit= n%10;
        res = res + i*pow(10,digit-1);
        n=n/10;
    }
    cout<<res<<endl;
}





void ispytrip(int x, int y, int z){
    if(x>y){
        if(x>z){
            if(x*x==y*y+z*z){
                cout<<true<<endl;
            }
            else{
                cout<<false<<endl;
            }
        }
        else{
            if(z*z==x*x+y*y){
                cout<<true<<endl;
            }
            else{
                cout<<false<<endl;
            }
        }
    }
    else if(x>z){
        if(x>y){
            if(x*x==y*y+z*z){
                cout<<true<<endl;
            }
            else{
                cout<<false<<endl;
            }
        }
        else{
            if(y*y==x*x+z*z){
                cout<<true<<endl;
            }
            else{
                cout<<false<<endl;
            }
        }
    }
}

void benjaminbulb(int n){
    for(int i=1; i*i<=n; i++){
        cout<<i*i<<endl;
    }
}

int main(){
    printHello();
    workwithdatatype();
    isprime();
    int t;
    cin >> t;
    while(t-->0){
        isprime();
    }
    return 0;
}