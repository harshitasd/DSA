
//finding max and min in a array
#include <iostream>
using namespace std;
#include<climits>
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arrMax=INT_MIN;
    int arrMin=INT_MAX;
            for(int i=0;i<n;i++){
        arrMax=max(arrMax,arr[i]);
        arrMin=min(arrMin,arr[i]);
    }
cout<<"max num:"<<arrMax<<endl;
cout<<"min num:"<<arrMin<<endl;


return 0;
}
