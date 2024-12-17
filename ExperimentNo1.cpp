#include <iostream>
using namespace std;

int main() {
    int arr[100],n,i;
    float sum=0,ave=0;
    cout<<"Enter the number of student's: ";
    cin>>n;
    cout<<"Enter the mark's of "<<n<<" student's: "<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Average mark's: ";
    for ( i = 0; i < n; i++)
    sum += arr[i];
    ave = sum/n;
    cout<<ave<<endl;

    return 0;
}