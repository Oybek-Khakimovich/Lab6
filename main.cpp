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
    //int count=0; num=2;


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
          }
  */
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


    //problem6;
    /*int num1, num2;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;
if (num1>num2) {
    while (num1%num2==0) {
        num1=num1%num2;
        num2=num2%num1;
    }
    cout<<num1<<endl;
}

    if (num2>num1) {
        while (num2%num1==0) {
            num2=num2%num1;
            num1=num1%num2;
        }
        cout<<num2<<endl;
    }

*/

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
    char letter;
    do {
        cout << "Enter a uppercase letter: ";
        cin >> letter;
        if (letter == 'Y' || letter == 'N') {
            cout << "Valid answer\n";

        } else cout << "Invalid answer, try again";

    } while (letter == 'Y'||letter == 'N');

    return 0;
}


