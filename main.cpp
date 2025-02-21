#include <iostream>
using namespace std;
int main() {
    //problem 1.a
    /*int sum=0;
    for (int i=1;i<=100;i++) {
        sum+=i;
    }
    cout<<sum;*/


    //problem 1.b
    /*int sum=0, n, i=1;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while (i<=n) {
        sum+=i;
        i++;
    }
    cout<<sum;*/

    //problem 2.a
    /*int count=0, num=2;
    cout<<"First 10 prime numbers: ";
    for (; count<10 ;num++) {
        bool isPrime = true;

        for (int i=2; i*i<=num; i++) {
            if (num%i==0) {
                isPrime = false;
                break;
            }
        }
            if (isPrime){
                cout<<num<<" ";
                count++;
            }
        }*/

    //problem2.b
    /*int n, count=0, num=2;
    cout<<"Nechta tub son chiqsin:"<<endl;
    cin>>n;
    while (count<n) {
        int divisor= 2;
        bool isPrime = true;
        while (divisor*divisor <= n) {
            if (num % divisor == 0) {
                isPrime = false;
                break;
            }
            divisor++;
        }
        if (isPrime) {
            cout<<num<<" ";
            count++;
        }
        num++;
    }
cout<<endl;*/

    //problem3
    /*int n;
      cin>>n;
      while (n!=1) {
          if (n%2==0) {
              n=n/2;
              }
          else {
              n=n*3+1;
          }

          cout<<n<<" ";
          }*/

    //problem4;
    /* int n,r=0;
     cin>>n;
     while (n>0) {
         n/=10;
         r++;
     }
     cout<<r;
 */


    //problem 5
    /*int num, r;
    cout<<"Enter a number"<<endl;
    cin>>num;
    while (num>0) {
        r=num%10;
        num/=10;

        cout<<r<<" ";

    }*/


    //problem6;
    /*int num1, num2;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;
if (num1>num2) {
    while (num1%num2!=0&&num2%num1!=0) {
        num1=num1%num2;
        num2=num2%num1;
        if (num1==0) {
            cout<<"The biggest divisible number is "<<num2;
        }
        if (num2==0) {
            cout<<"The biggest divisible number is "<<num1;

        }
    }

}

    if (num2>num1) {
        while (num2%num1!=0&&num1%num2!=0) {
            num2=num2%num1;
            num1=num1%num2;
            if (num1==0) {
                cout<<"The biggest divisible number is "<<num2;
            }
            if (num2==0) {
                cout<<"The biggest divisible number is "<<num1;
            }
        }

    }
if (num1>num2) {
    cout<<"The biggest divisible number is "<<num2;
}
    if (num2>num1) {
        cout<<"The biggest divisible number is "<<num1;
    }*/

    //problem7
    /*int put, sum=0, num=0;
    while (sum!=100) {
        cout<<"Enter a number , and I add it"<<endl;
        cin>>put;
        sum+=put;
        num++;
        cout<<"Sum is "<<sum<<". Total numbers entered "<<num<<endl;
    }
    cout<<"Sum exceeded 100!. ";*/



    //problem 8
    /*int n=500, wamount;
    while (n!=0) {
        cout<<"\nEnter the withdrawl"<<endl;
        cin>>wamount;
        if (n<wamount) {
            cout<<"You can not buy it";

        }

            if (n>wamount) {
            n-=wamount;
            cout<<"Your budget is "<<n;




        }
    }*/

    //problem9
    /*char letter;
    do {
        cout << "Enter a uppercase letter: ";
        cin >> letter;
        if (letter == 'Y' || letter == 'N') {
            cout << "Valid answer\n";

        }

    } while (letter !='Y'||letter != 'N');
    cout<<"invalid input";*/

    //PROBLEM10
   /* int num;
    do { cout<<"Please, choose one of them"<<endl;
        cout<<"1. GO"<<endl;
        cout<<"2, Run"<<endl;
        cout<<"3. Exit"<<endl;
        cin>>num;

        if (num==1) {
            cout<<"Processing...";
        }
        if (num==2) {
            cout<<"Processing..."<<endl;
        }


    }
    while (num!=3);
    cout<<"Goodbye!"<<endl;*/

    //problem11
    /*int a, b, num;
    cin >> a >> b;
    do {
        cout<<"Please choose one of them\n 1. Adding \n 2. Subtracting \n 3. Exit"<<endl;
        cin >> num;
        if (num==1) {
            cout<<a+b<<endl;
        }
        if (num==2) {
            cout<<a-b<<endl;
        }
    }
    while (num!=3);
    cout<<"Goodbye";*/

    //problem12
    /*int password=1234;
    int password2, count=0;
    do {
        cout<<"Enter a password"<<endl;
        cin>>password2;
        if (password2==password) {
            cout<<"Your password is correct"<<endl;
        return 0;}
        if (password2!=password) {
            cout<<"Your password is not correct"<<endl;
        }
        count++;
    }
    while (count<3);
    cout<<"Your limit is over";*/

    //problem13
    /*int num=10, guessnum;
    do {
        cout<<"Enter a number between 1 and 10: "<<endl;
        cin>>guessnum;
        if (num>guessnum) {
            cout<<"Too low"<<endl;
        }
        if (num<guessnum) {
            cout<<"Too high"<<endl;
        }
    }
    while (num!=guessnum);
            cout<<"You win!"<<endl;*/

    return 0;
}


