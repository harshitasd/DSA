//count the number of occurances of an element x
#include<vector>
#include<iostream>
using namespace std;
    int main(){
        vector <int> v(6);
        for(int i=0;i<v.size();i++){  //right running
            cin>>v[i];
        }
        cout<<"value of x: ";
        int x;
        cin>>x;
        int occurence=0;
        for(int i=0; i<v.size();i++){
            if(x==v[i]){
                occurence++;
            }
        }
      cout<<occurence<<endl;
    }
