#include <iostream>
#include <fstream>
using namespace std;

class User
{
protected:
    string first_name,last_name,address,username,password,phone_number;
public:
    int option;
    void setFirst_name(string f)
    {
        first_name = f;
    }
    string getfirst_name()
    {
        return first_name;
    }
    void setLast_name(string l)
    {
        last_name = l;
    }
    string getLast_name()
    {
        return last_name;
    }
    void setAddress(string a)
    {
        address = a;
    }
    string getAddress()
    {
        return address;
    }
    void setUsername(string u)
    {
        username = u;
    }
    string getUsername()
    {
        return username;
    }
    void setPassword(string p)
    {
        password = p;
    }
    string getPassword()
    {
        return password;
    }
    void setPhone_number(string p)
    {
        phone_number = p;
    }
    string getPhone_number()
    {
        return phone_number;
    }
    void userlogin();
    void custprofile();
};
class Order
{
public:
    string receipt;
    int balance = 0.0;
    double t_shirt = 100;
    double Short = 200;
    double top = 100;
    double skirt = 100;

    void addCart();
    void displayItems();
    void confirmOrder();
};
void Order::addCart()
{
    User myUser;
    Order myOrder;
    int category;
    string yes, no;

    do{
    cout << "category for men and woman wears" <<endl;
    cout << "1. T-shirt     R100" <<endl;
    cout << "2. Short       R200" <<endl;
    cout << "3. Top         R100" <<endl;
    cout << "4. Skirt       R100" <<endl;
    cout << "Enter your category number to add any type: "<<endl;
    cin >>category;
    if(category == 1)
    {
        cout << "t-shirt of R100 is added to the chart" <<endl;
        myOrder.confirmOrder();
    }else if(category == 2)
    {
        cout << "short of R200 is added to the chart" <<endl;
        myOrder.confirmOrder();
    }else if(category == 3)
    {
        cout << "top of R100 is added to the chart" <<endl;
        myOrder.confirmOrder();
    }else if(category == 4)
    {
        cout << "skirt of R100 is added to the chart" <<endl;
        myOrder.confirmOrder();
    }
}while(category == 0);
}
void Order::displayItems()
{
    cout << "Category     Type        Price" <<endl;
    cout << "Men wears    T-shirt     R100" <<endl;
    cout << "             Short       R200" <<endl;
    cout << "Men wears    Top         R100" <<endl;
    cout << "             Skirt       R100" <<endl;
}
void Order::confirmOrder()
{
    User myUser;
    Order myOrder;
    string yes, no;

    cout << "Do you want to confirm your order?yes/no: " <<endl;
      if(yes == "yes")
        {
            cout << "Thank your receipt is printed on the text file" <<endl;
        }else if(yes == "no")
        {
            cout << "Add category type to the cart" <<endl;
        }
    cin >> myUser.option;
    fstream mywrite("slipe.txt",ios::app);
    mywrite.close();
}
void User::userlogin()
{
    User myUser;
    Order myOrder;

    ofstream mytext("receipt.txt",ios::app);

    cout << "Enter your username: " <<endl;
    cin >>username;
    cout << "Enter your password: " <<endl;
    cin >>password;
    if (username == "username" && password == "password")
    {
        do{
        cout << "'''''''Item menu'''''''"<<endl;
        cout << "1 to addCart" <<endl;
        cout << "2 to displayItems" <<endl;
        cout << "3 to confirmOrder" <<endl;
        cout << "4 Exit" <<endl;
        cout << "Select your Item: "<<endl;
        cin >> myUser.option;
        switch(myUser.option)
        {
        case 1:
            myOrder.addCart();
            break;
        case 2:
            myOrder.displayItems();
        case 3:
            myOrder.confirmOrder();
            break;
        }
        }while(myUser.option == 4);

    }else
    {
        cout << "Try again"<<endl;
    }

    /*string text;
    ifstream myfile("User_Details.txt");
    while(getline(myfile,text))
    {
        cout << text << '\n'<<endl;
    }
    myfile.close();*/

}
int main()
{
    User myUser;
    do{
    cout << "welcome" << endl;
    cout << "1. to login" << endl;
    cout << "2. to sign up" << endl;
    cout << "3. Exit" << endl;
    cout << "select option: " << endl;
    cin >>myUser.option;
    switch(myUser.option)
    {
    case 1:
        myUser.userlogin();
        break;
    case 2:
        myUser.custprofile();
        break;
    case 3:
        break;
    }
    }while(myUser.option == 4);
    return 0;
}
void User::custprofile()
{
    cout << "Enter your first-name: " <<endl;
    cin >> first_name;
    cout << "Enter your last-name: " <<endl;
    cin >> last_name;
    cout << "Enter your address: " <<endl;
    cin >> address;
    cout << "Enter your username: " <<endl;
    cin >> username;
    cout << "Enter your password: " <<endl;
    cin >> password;
    cout << "Enter your phone-number: " <<endl;
    cin >> phone_number;
    ofstream myfile("User_Details.txt",ios::app);
    myfile <<"First-name: "<<(first_name)<<'\n'<<"Last-name: "<<(last_name)<<'\n'<<"Address: "<<(address)<<'\n'<<"Username: "<<(username)<<'\n'<<"Password: "<<(password)<<'\n'<<"Phone-number: "<<(phone_number)<<'\n'<<endl;
    cout << "Your profile is created" <<endl;
    myfile.close();
}

