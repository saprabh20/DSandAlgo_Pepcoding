import java.util.Scanner;
public class l001{
    public static Scanner scn= new Scanner(System.in);
    public static void printHello(){
        System.out.println("Hi There");
        System.out.println("This is Saprabh");   
    }
    public static void workwithdatatype(){
        int a=10;
        int b=20;
        System.out.println("Value of A:"+ a);
        System.out.println("Value of B:"+ b);
    }
    public static void printz(){
        System.out.println("*****");
        System.out.println("   * ");
        System.out.println("  *  ");
        System.out.println(" *   ");
        System.out.println("*****");
    }
    
    public static void gradingsystem(int n){
        if(n>90){
            System.out.println("excellent");
        }
        else if(n>80 && n<=90){
            System.out.println("good");
        }
        else if(n>70 && n<=80){
            System.out.println("fair");
        }
        else if(n>60 && n<=70){
            System.out.println("meets");
        }
        else(n<=60){
            System.out.println("below par");
        }
    }
    
    public static void oddeven(int n){
        if (n%2==0){
            System.out.println("Even");
        }
        else {
            System.out.println("Odd");   
        }
    }
    
    public static boolean isprime_(int n){
        boolean prime=true;
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                prime=false;
                break
                }
            }
            return prime;
        }
    public static void isprime(){
        int x=scn.nextInt();
        boolean ans= isprime_(x);
        if(ans){
            System.out.println("prime");
        }
        else{
            System.out.println("not prime");
        }
    }    

    public static void isallprime(int a, int b){
        for(int i=a; i<=b; i++){
            bool ans= isprime_(i);
                if (ans){
                System.out.println(i);
            }
        }
    }

    public static void printfibo(int n){
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
    
    public static void countdigits(int n){
        int count=0;
        int num=n;
        while(num>0){
            count = count +1;
            num=num/10;
        }
        System.out.println(count); 
    }

    public static int rotatenumber(int n, int r){
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
    public static void showdigits(int n){
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

public static int gcd(int a, int b){
    int divisor=a;
    int divident=b;
    while(divident%divisor!=0){
        int rem=divident%divisor
        divident=divisor;
        divisor=rem;
    }
    return divisor;
}
public static int lcm(int a, int bn int gcd){
    return ((a/gcd)*b);
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


    public static void main(String[] args){
        printHello();
        workwithdatatype();
        int n = scn.nextInt();

    }
}