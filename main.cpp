#include <iostream>
using namespace std;
/*int sum(int n, int a) {
    if (a==0) {
        return 0;
    }
    if (a>0) {
        return n+sum(n,a-1);
    }
    if (a<0){
        return -(n+sum(n,-a-1));


    }
}




int main(){
    int n, a;
    cout<<" Enter two numbers:"<<endl;
    cin>>n>>a;
    sum(n,a);
    cout<<sum(n,a);
    return 0;
}*/

//problem2

/*int factorial(int n) {
    if (n==0) return 1;
    if (n>0) return n*factorial(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}*/

//problem 3
/*int fibonacci(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    if (n>1) {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main() {
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}*/

//problem 4
/*int sum(int n) {
    if (n==0) return 0;
    if (n>0) return n+sum(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}*/

//problem 5
/*void order(int n) {
    if (n==1) cout<<1;
    if (n>1) {
        cout<<n<<" ";
        order(n-1);
    }}

int main() {
    int n;
    cin>>n;
    order(n);
    return 0;

}*/

//problem6
/*int digit(int n) {
    if (n==0) return 0;
    if (n>0) return 1+digit(n/10)
}
int main() {
    int n;
    cin>>n;
    cout<<digit(n);
    return 0;
}*/

//problem 7
/*int sum_digit(int n) {
    if (n==0) return 0;
    if (n>0) return n%10 + sum_digit(n/10);
}

int main() {
    int n;
    cin>>n;
    cout<<sum_digit(n)<<endl;
    return 0;
}*/

//problem 8;
/*int power(int x, int y) {
    if (y==0) return 1;
    if (y>=0) return x*power(x, y-1);
}

int main() {
    int x, y;
    cin>>x>>y;
    cout<<power(x,y);
    return 0;
}*/

//problem 9
/*int reverse(int n, int reserved=0) {
    if(n==0) return reserved;
    return reverse(n/10,reserved*10+n%10);

}
int main() {
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}*/

//problem 10
int polin(int n, int reverse=10, int org=-1) {
    if (n==0) return reverse;
    return polin(n/10,reverse*10+n%10, org);
}
void pol(int n) {
    if (n<0) {
        cout<<"false"<<endl;
        return;
    }
    if (n==polin(n)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
}
int main() {
    int n;
    cin>>n;
polin(n);
    pol(n);

    return 0;
}