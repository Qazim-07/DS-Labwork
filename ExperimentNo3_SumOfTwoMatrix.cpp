#include <iostream>
using namespace std;
int main() {
    int i,j;
    int a[3][3];
    int b[3][3];
    int c[3][3];
    cout<<"Enter the elements of matrix 'A' : \n";
     for(i=0;i<3;i++) {
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
     }
     cout<<"Enter the elements of matrix 'B' : \n";
     for(i=0;i<3;i++) {
        for(j=0;j<3;j++){
            cin>>b[i][j];
        }
     }
     cout<<"Addition of two matrix is: \n";
     for(i=0;i<3;i++) {
        for(j=0;j<3;j++){
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}