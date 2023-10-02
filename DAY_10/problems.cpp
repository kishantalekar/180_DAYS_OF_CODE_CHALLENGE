
// 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

// 2: Find the factorial of a number n using a while loop and do a while loop.

// 3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

// 4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)

// 5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

// 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.


#include<iostream>
using namespace std;
void even_numbers(){
    int n;
    cout << "enter a number :";
    cin >> n;
    int i = 1;
    while(i<n){
        if(i %2 == 0){
            cout << i <<endl;
        }
        i++;
    }
}
void fact (){
    int n;
    cout << "enter a number :";
    cin >> n;
    int fact = 1;
    int n1 = n;
    while(n>0){
        fact = fact * n;
        n--;
    }
    cout << "Fact of " << n1 << " is : " << fact<<endl;
}
void print_numbers_not_divisible_5and3(){
    int n;
    cout << "enter a number :";
    cin >> n;
    int i = 1;
    while (i<=n){
        if(i%3==0 || i%5==0){
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }
}
void     prime_or_not(){
    
    int n;
    cout << "enter a number :";
    cin >> n;
    int count = 0;
    int i = 2;
    while(i <n){
        if(n%i==0){
            cout << "Not a prime number ";
            break;
        }
        i++;
        if(i == n){
            cout << "Prime Number ";
        }
    }
}
int main(){
    even_numbers();
    fact();
    print_numbers_not_divisible_5and3();
    prime_or_not();
    return 0;
}