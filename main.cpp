#include <iostream>
#include <string>
using namespace std;

# Restaurant Application
class User
{
public:
    void User_details()
    {
        cout << "The details of the user\n";
    }
};

class Name: public User
{
    public:
    void User_Name()
    {
        cout << "Name: Matimba\n";
    }

};

class Password: public User
{
    public:
    void User_Password()
    {
        cout << "Password: Shirinda@97\n";
    }
};

class address: public User
{
    public:
    void User_address()
    {
        cout << "adress: Vanderbijlpark CW 1900\n";
    }
};

class City: public User
{
    public:
    void User_City()
    {
        cout << "City: Gauteng\n";
    }
};


class Cell_Number: public User
{
    public:
    void User_Cell_Number()
    {
        cout << "Cell_Number: 0817640684\n";
    }
};

void kfc()
{
    cout << "1. dunked_wings \t R49.00\n";
    cout << "2. zinger_wings \t R70.59\n";
}
void nandos()
{
    cout << "1. half_chicken \t R50.00\n";
    cout << "2. full_chicken \t R95.90\n";
}
int main()
{
    int choice;
    double half_chicken = 50;
    double full_chicken = 95.90;
    double dunked_wings = 49.00;
    double zinger_wings = 70.59;
    int balance = 00.00;


    User myUser_details;
    Name myUser_Name;
    Password myUser_Password;
    address myUser_address;
    City myUser_City;
    Cell_Number myUser_Cell_Number;

    myUser_details.User_details();
    myUser_Name.User_Name();
    myUser_Password.User_Password();
    myUser_address.User_address();
    myUser_City.User_City();
    myUser_Cell_Number.User_Cell_Number();


   void nandos();
   void kfc();

   do{


   cout << "1. nandos\n";
   cout << "2. kfc\n";
   cout << "3. exit\n";
   cout << "enter your choice: ";
   cin >> choice;

   if(choice == 1)
   {
      nandos();
      cout << "place your order: ";
      cin >> choice;
      if(choice == 1)
      {
          cout << "enter amount to order a half_chicken: ";
          double half_chicken;
          cin >> half_chicken;
          balance += half_chicken;

          if(half_chicken > 50)
          {
              cout << "you have ordered your half_chicken\n";
              cout << "press any key to return to the menu: ";
              cin >> choice;
          }else if(half_chicken < 50)
          {
              cout << "insufient fund\n";
              cout << "press any key to return to the menu: ";
              cin >> choice;
          }
      }else if(choice == 2)
      {
          cout << "enter amount to order a full_chicken: ";
          double full_chicken;
          cin >> full_chicken;
          balance += full_chicken;

          if(full_chicken > 95.90)
          {
              cout << "you have ordered your full_chicken\n";
              cout << "press any key to return to the menu: ";
              cin >> choice;
          }else if(full_chicken < 95.90)
          {
              cout << "insufient fund\n";
              cout << "press any key to return to the menu: ";
              cin >> choice;
          }

      }

   }if(choice == 2)
   {
      kfc();
      cout << "place your order: ";
      cin >> choice;
      if(choice == 1)
      {
          cout << "enter amount to order a dunken_wings: ";
          double dunken_wings;
          cin >> dunken_wings;
          balance += dunken_wings;

          if(dunken_wings > 49)
          {
              cout << "you have ordered your dunken_wings\n";
              cout << "press any key to return to the menu: ";
              cin >> choice;
          }else if(dunken_wings < 49)
          {
              cout << "insufient fund\n";
              cout << "press any key to return to the menu: ";
              cin >> choice;

          }if(choice == 2)
          {
              cout << "enter amount to order a zinger_wings: ";

          }
      }
   }
}while(choice !=3);

    return 0;

}
