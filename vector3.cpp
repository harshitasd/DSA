//find the last occurence of an element x in an array
#include<vector>
#include<iostream>
using namespace std;
int main(){
vector<int> v(6);
for(int i=0;i<6;i++){
    cin>>v[i];
}                         
cout<<"enter x:";        //running
int x;
cin>>x;
int occurrence=0;
for(int i=0;i<v.size();i++){
    if(v[i]==x){
     occurrence=i;
    }
}
cout<<occurrence<<endl;
return 0;
}