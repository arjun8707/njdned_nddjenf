/*#include <iostream>
using namespace std;
int main()
{
    // decleration
    int B[5];
    B[0] = 0;
    B[1] = 2;
    B[3] = 4;
    int c[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        cout << c[i] << " ";
    }
    for (int i = 0; i < 5; i++)
    {
        cout << B[i] << endl;
    }
    // initilization
    int A[5] = {1, 2, 3};
    for (int i = 0; i < 5; i++)
        cout << A[i] << " ";
}*/
#include<iostream>
using namespace std;
int main(){
int A[5]={1,3,4,5,6};
for(int X:A){
cout<<X<<" ";
}
}

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
 int arr[110];
    //char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}*/
/*
/*#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], c[3][3];
    cout << "enter the elements of matrix a:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    cout << "enter the elements of matrix b:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
}*/
/*#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the row a:"<<"\n"<<"enter the coloumn b:"<<endl;
    cin>>m>>n;
int a[m][n];
cout<<"enetr the elemente of matrix:";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];

    }
    cout<<endl;
}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){

cout<<a[j][i]<<"\n";
}
cout<<endl;
}




}*/