#include<bits/stdc++.h>
using namespace std;
void PrintPattern(int n){

    for(int i =0; i<n; i++){
        for(int j =0; j<2*n-1; j++){
            if(j>n-1+i){
                break;
            }
           else if(j>=n-1-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void print8(int n){
      for(int i =0; i<n; i++){
        for(int j =0; j<2*n-1; j++){
            if(j>n-1+i){
                break;
            }
           else if(j>=n-1-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i =0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<(2*n-1)-(2*i);j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
    cout<<endl;
    }
    
}
void print10(int n){
    for(int i =0; i<n; i++){
        for(int j =0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i =0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
   
}
void myPrint10(int n){
    int stars;
    for(int i=0 ; i<2*n-1; i++){
        stars=i;
       if(i>=n) stars = 2*n-i-2;
        for(int j =0; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print11(int n){
    int x = 1;
    int y = 1;
    for(int i =0; i<n; i++){
        for(int j = 0; j<=i; j++){
            if(x==1){
                cout<<1<<" ";
                x=0;
            } 
            else {
                cout<<0<<" ";
                x=1;
            }
        }
        if(y==1) y=0;
        else y=1;
        x=y;
        cout<<endl;
    }
}
void myPrint11(int n){
    int start = 1;
    for(int i =0; i<n; i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j = 0; j<=i; j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
void print14(int n){
        for(int i =0; i<n; i++){
        for(char ch='A';ch<'A'+n-i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print16(int n){
    for(int i =0; i<n; i++){
    for(int j =0; j<=i; j++){
        cout<<'A'+i<<" ";
    }
    
    cout<<endl;
    }
}
void print17(int n){
     for(int i =0; i<n; i++){
        char ch='@';
        for(int j =1; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            if(j>i) {
                ch=ch-1;
                cout<<ch<<" ";
            }
            else {
                ch=ch+1;
                cout<<ch<<" ";
                
                }

        }
        cout<<endl;
    }
}
void print19(int n){
       for(int i = 0;i<n; i++ ){
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        for(int j =0; j<2*i; j++){
            cout<<"  ";
        }
        for(int j = 0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j =0; j<=i; j++){
            cout<<"* ";
        }
        for(int j=0; j<(2*(n-1)-(2*i));j++){
            cout<<"  ";
        }
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print20(int n){
         for(int i = 0;i<n; i++ ){
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        for(int j =0; j<2*i; j++){
            cout<<" ";
        }
        for(int j = 0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j =0; j<=i; j++){
            cout<<"* ";
        }
        for(int j=0; j<(2*(n-1)-(2*i));j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void myPrint20(int n){
       for(int i =0; i<n; i++){
        for(int j =0; j<=i; j++){
            cout<<"* ";
        }
        for(int j=0; j<2*(n-1)-(2*i);j++){
            cout<<"  "; 
        }
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i =0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        for(int j=0; j<2*i; j++){
            cout<<"  ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print21(int n){
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void print22(int n){
     int x;
     int y=n;
    for(int i =0; i<n; i++){
        x=n; 
        for(int j=0; j<i; j++){
            cout<<x;
            x--;

        }
        for(int j=0; j<((2*n-1)-(2*i));j++){
            cout<<n-i;
        }
        for(int j=0; j<i; j++){
            cout<<y+j;
        }
        y=n-i;
        cout<<endl;
    }
   
    for(int i=0; i<n-1; i++){
         x=n;
        for(int j=0; j<n-2-i; j++){
            cout<<x;
            x--;
        }
        for(int j=0; j<3+2*i; j++){
            cout<<2+i;
        }
        for(int j=0; j<n-2-i; j++){
            cout<<3+i+j;
        }
        cout<<endl;
    }
}
void print18(int n){
    for(int i =0; i<n; i++){
        for(char ch = 'A'+(n-1)-i; ch<'A'+n; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    print18(3);
}