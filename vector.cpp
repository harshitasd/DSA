//basic vector functions
#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> name;
    cout<<"size: "<<name.size()<<endl;
    cout<<"capacity: "<<name.capacity()<<endl;

    name.push_back(1);
    cout<<"size: "<<name.size()<<endl;
    cout<<"capacity: "<<name.capacity()<<endl;

    name.push_back(2);
    cout<<"size: "<<name.size()<<endl;
    cout<<"capacity: "<<name.capacity()<<endl;

    name.push_back(3);
    cout<<"size: "<<name.size()<<endl;
    cout<<"capacity: "<<name.capacity()<<endl;

    name.push_back(8);
    cout<<"size: "<<name.size()<<endl;
    cout<<"capacity: "<<name.capacity()<<endl;

    name.push_back(8);
    cout<<"size: "<<name.size()<<endl;
    cout<<"capacity: "<<name.capacity()<<endl;


    name.resize(9);
    cout<<"size: "<<name.size()<<endl;
    cout<<"capacity: "<<name.capacity()<<endl;

    name.resize(30);
    cout<<"size: "<<name.size()<<endl;
    cout<<"capacity: "<<name.capacity()<<endl;

name.pop_back();
name.pop_back();
name.pop_back();
cout<<"size: "<<name.size()<<endl;
cout<<"capacity: "<<name.capacity()<<endl;

}