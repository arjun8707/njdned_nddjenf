// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i <= n - 1; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }
// }
#include<iostream>
using namespace std;
int reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
start++;
end--;
    }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
reverse(arr,n);
print(arr,n);

 
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n / 2; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[n - 1 - i];
//         arr[n - 1 - i] = temp;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }