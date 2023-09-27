/*#include<iostream>
using namespace std;
int main(){
int n,sum=0,avg;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum=sum+arr[i];
    //avg=(avg+sum)/n;

}
avg=sum/n;
cout<<sum<<endl;
cout<<avg;
}*/
#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int A[m];

    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    int n;
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j < m ; j++)
        {
            if (A[i] + A[j] == n)
            {
                if(i<=j)
               cout << i<<" "<<j<< " ";
            
            }
            

        }

             }
}