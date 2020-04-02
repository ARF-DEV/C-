#include<bits/stdc++.h>

int EuclidianGDC(int a,int b){
    if (b == 0){
        return a;
    }else{
        int c = a % b;
        return EuclidianGDC(b,c);
    }
}

int Fibo(int n){ //ke n
    if(n == 2){
        return 1;
    }else if(n <= 1){
        return 0;
    }
    else {
        return (Fibo(n-1)+Fibo(n-2));
    }
}

int main(){
   
    std::cout<<Fibo(n);
}   