#include <iostream>
#include<string>
#include<stack>

using namespace std;
class coustomers{
private:
    string name;
    string address;
    string email;
    int destination;
    string receiver_name;

public:
    coustomers(string name,string address,string email,int destination,string receiver_name)
    {
        name=name;
        address=address;
        email=email;
        destination=destination;
        receiver_name=receiver_name;
    }

};
class item{
private:
    string productname;
    int quantity;
    int weight;

public:
    item(string productname,int quantity,int weight)
    {
        productname=productname;
        quantity=quantity;
        weight=weight;
    }

};



    int main()
    {

    return 0;

}
