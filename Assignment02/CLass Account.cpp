/*Create an Account class that a bank might use to represent customers’ bank accounts. Include
a data member of type int to represent the account balance. Provide a constructor that receives
an initial balance and uses it to initialize the data member. The constructor should validate the
initial balance to ensure that it’s greater than or equal to 0. If not, set the balance to 0 and
display an error message indicating that the initial balance was invalid. Provide three member
functions. Member function Credit should add an amount to the current balance. Member
function Debit should withdraw money from the Account and ensure that the debit amount
does not exceed the Account’s balance. If it does, the balance should be left unchanged and the
function should print a message indicating “Debit amount exceeded account balance.”
Member function getBalance should return the current balance. Create a program that creates
two Account objects and tests the member functions of class Account*/
#include<iostream>
using namespace std;
class Account {
    int account_balance;
public:
    Account(int balance)
    {
        if (balance>=0) {
            account_balance = balance;
        }
        else {
            balance=0;
            cout<<"Invalid initial balance "<<endl;
            account_balance=balance;
        }
    }
    void Credit(int amount) {
        account_balance += amount;

    }
    void Debit(int withdray_money) {
        int temp = account_balance - withdray_money;
        if (temp<0) {
            cout<<"Debit amount exceeded acoount balance "<<endl;
        }
        else {
            account_balance -= withdray_money;
        }
    }
    int getBalance() {

        return account_balance;

    }

};
int main()
{
    int money1;
    cout<<"Enter amount you want to start obj1 account with "<<endl;
    cin>>money1;
    Account obj1(money1);

    int addMoney1;
    cout<<"Enter money you want to add to obj1 account "<<endl;
    cin>>addMoney1;
    obj1.Credit(addMoney1);

    int withdrawMoney1;
    cout<<"Enter money you want to withdraw from obj1 account "<<endl;
    cin>>withdrawMoney1;
    obj1.Debit(withdrawMoney1);
    obj1.getBalance();
    cout<<"\n";


    int money_2;
    cout<<"Enter amount you want to start your with obj2 account "<<endl;
    cin>>money_2;
    Account obj2(money_2);

    int addMoney_2;
    cout<<"Enter money you want to add to obj2 account"<<endl;
    cin>>addMoney_2;
    obj2.Credit(addMoney_2);

    int withdrawMoney_2;
    cout<<"Enter money you want to withdraw from obj2 account"<<endl;
    cin>>withdrawMoney_2;
    obj2.Debit(withdrawMoney_2);
    obj2.getBalance();

    return 0;
} 