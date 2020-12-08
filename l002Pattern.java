import java.util.Scanner;
public class l001{
    public static Scanner scn= new Scanner(System.in);
    
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

    public static void main(String[] args){

    }
}