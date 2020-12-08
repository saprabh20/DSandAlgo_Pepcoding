#include<iostram>
using namespace std;

void printSquare(int row){
    int nst=row; //no. of stars
    for(int r)
}

void printtriangle(int row){
    int nst=1; // no os stars
    for(int r=1; r<=row; r++){
        for(int cst=1; cst<=nst; cst++){
            cout<<"*";
        }
        nst++;
        cout<<endl;
    }
}

void printmirrortriangle(int row){
    int nst=1; //no of stars
    int nsp=row-1; //no of spaces
    for(int r=1; r<=row; r++){
        for(int csp=1; csp<=nsp; csp++){
            cout<<" ";
        }
        for(int cst=1; cst<=nst; cst++){
            cout<<"*";
        }
        nst++;
        nsp--;
        cout<<endl;
    }
}

void printdiamond(int row){
    int nst=1; //no of stars
    int nsp=row/2; //no of spaces
    for(int r=1; r<=row; r++){
        for(int csp=1; csp<=nsp; csp++){
            cout<<" "<<"\t";
        }
        for(int cst=1; cst<=nst; cst++){
            cout<<"*"<<"\t";
        }
        if(r<=row/2){
            nsp--;
            nst=nst+2;
        }
        else{
            nsp++;
            nst=nst-2;
        }
        cout<<endl;
    }
}

void printhollowdiamond(int row){
    int nst=(row+1)/2; //no of stars
    int nsp=1; //no of spaces
    for(int r=1; r<=row; r++){
        for(int csp=1; csp<=nsp; csp++){
            cout<<"\t";
        }
        for(int cst=1; cst<=nst; cst++){
            cout<<"*\t";
        }
        if(r<=row/2){
            nsp--;
            nst=nst+2;
        }
        else{
            nsp++;
            nst=nst-2;
        }
        cout<<endl;
    }
}

void pattern15pep(int row){
    int nst=1; //no of stars
    int nsp=row/2; //no of spaces
    int count=1;
    for(int r=1; r<=row; r++){
        for(int csp=1; csp<=nsp; csp++){
            cout<<" "<<"\t";
        }
        int count=r;
        if(r>row/2+1){
            count=(row-r+1);
        }
        for(int cst=1; cst<=nst; cst++){
            cout<<count<<"\t";
            if(cst<=nst/2){
                count++;
            }
            else{
                count--;
            }
        }
        if(r<=row/2){
            nsp--;
            nst=nst+2;
        }
        else{
            nsp++;
            nst=nst-2;
        }
        cout<<endl;
    }
}

void pattern7pep(int row){
    int nsp=0;
    for(int r=1; r<=row; r++){
        for(int csp=1; csp<=nsp; csp++){
            cout<<"\t";
        }
        cout<<"*\t"<<endl;
    nsp++;
    }
}

void pattern8pep(int row){
    int nsp=row-1;
    for(int r=1; r<=row; r++){
        for(int csp=1; csp<=nsp; csp++){
            cout<<"\t";
        }
        cout<<"*\t"<<endl;
    nsp--;
    }
}

void pattern9pep(int row){
    int r=row;
    int x=1;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=r; j++){
            if(j==x||j==r){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
        if(i<=row/2){
            x++;
            r--;
        }
        else{
            x--;
            r++;
        }
    }
}

void pattern10pep(int row){
    int r=row/2+1;
    int x=row/2+1;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=r; j++){
            if(j==x||j==r){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
        if(i<=row/2){
            x--;
            r++;
        }
        else{
            x++;
            r--;
        }
    }
}

void numtriangle(int row){
    int nst=1; // no os stars
    int count=1;
    for(int r=1; r<=row; r++){
        for(int cst=1; cst<=nst; cst++){
            cout<<count<<"\t";
            count++;
        }
        nst++;
        cout<<endl;
    }
}

void fibotriangle(int row){
    int a=0; // no of stars
    int b=1;
    int c=1;
    for(int r=1; r<=row; r++){
        for(int i=1; i<=c; i++){
            cout<<a<<"\t";
            int sum=a+b;
            a=b;
            b=sum;
        }
        c++;
        cout<<endl;
    }
}

void numtrianglepattern13(int row){
    for(int n=0; n<row; n++){
        int val=1;
        for(int r=0; r<=n; r++){
            cout<<val<<"\t";
            val=((n-r)*val)/(r+1);
        }
        cout<<endl;
    }
}

void pattern14(int x){
    for(int i=1; i<=10; i++){
        cout<<x<<" * "<<i<<" = "<<x*i<<endl;
    }
}

void numdiamondpattern15(int row){
    int nst=1; //no of stars
    int nsp=row/2; //no of spaces
    int count=1;
    for(int r=1; r<=row; r++){
        for(int csp=1; csp<=nsp; csp++){
            cout<<"\t";
        }
        int count=r;
        if(r>row/2+1){
            count=(row-r+1);
        }
        for(int cst=1; cst<=nst; cst++){
            cout<<count<<"\t";
            if(cst<=nst/2){
                count++;
            }
            else{
                count--;
            }
        }
        if(r<=row/2){
            nsp--;
            nst=nst+2;
        }
        else{
            nsp++;
            nst=nst-2;
        }
        cout<<endl;
    }
}

void pattern16pep(int x){
    int a=1;
    int b=2*x-1;
    for(int r=1; r<=x; r++){
        int count=1;
        for(int i=1; i<2*x; i++){
            if(i<=a||i>=b){
                cout<<count<<"\t";
            }
            else{
                cout<<"\t";
            }
            if(i<x){
                count++;
            }
            else{
                count--;
            }
        }
        a++;
        b--;
        cout<<endl;
    }
}

void pattern17pep(int row){
    int a=row/2+1;
    int b=row/2+1;
    for(int r=1; r<=row; r++){
        for(int i=1; i<=row; i++){
            if(i<=b&&i>=a){
                cout<<"*\t";
            }
            else if(r==row/2+1){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
        if(r<row/2+1){
            b++;
        }
        else {
            b--;
        }
    }
}

void pattern18pep(int row){
    int a=1;
    int b=row;
    for(int r=1; r<=row; r++){
        if(r<=row/2+1){
            for(int i=1; i<=row; i++){
                if(r==1){
                    cout<<"*\t"; 
                }
                else if(i==a||i==b){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
        }
        else{
            for(int j=1; j<=row; j++){
                if(r==row){
                    cout<<"*\t"; 
                }
                else if(j<=a&&j>=b){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
        }
        a++;
        b--;
        cout<<endl;
    }
}

void pattern19pep(int row){
    if(row>3){
        int a=row/2+1;
        int b=row;
        for(int r=1; r<=row; r++){
            for(int i=1; i<=row; i++){
                if(i==row/2+1){
                    cout<<"*\t";
                }
                else if(r==row/2+1){
                    cout<<"*\t";
                }
                else if(r==1){
                    if(i<=a||i==row){
                        cout<<"*\t";
                    }
                    else{
                        cout<<"\t";
                    }
                }
                else if(r>1&&r<row/2+1){
                    if(i==row){
                        cout<<"*\t";
                    }
                    else{
                        cout<<"\t";
                    }
                }
                else if(r<row&&r>row/2+1){
                    if(i==1){
                        cout<<"*\t";
                    }
                    else{
                        cout<<"\t";
                    }
                }
                else if(r==row){
                    if(i>=a||i==1){
                        cout<<"*\t";
                    }
                    else{
                        cout<<"\t";
                    }
                }
                else{
                    cout<<"\t";
                }
            }
            cout<<endl;
        }
    }
    else{
        for(int r=1; r<=row; r++){
            for(int i=1; i<=row; i++){
                cout<<"*\t";
            }
            cout<<endl;
        }
    }
}

void pattern20pep(int row){
    int a=row/2+1;
    int b=row/2+1;
    for(int r=1; r<=row; r++){
        if(r>=row/2+1){
            for(int j=1; j<=row; j++){
                if(j==1||j==row){
                    cout<<"*\t";
                }
                else if(j==a||j==b){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
            a++;
            b--;
        }
        else{
            for(int i=1; i<=row; i++){
                if(i==1||i==row){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
        }
        cout<<endl;
    }
}

int main(){

}