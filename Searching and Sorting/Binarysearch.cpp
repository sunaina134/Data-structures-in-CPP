#include <iostream>
using namespace std;
int binary_search(int arr[],int m,int st,int en,int x){
    int mid=(st+en)/2;
    int i;
    for(i=0;i<m-1;i++){
          if(arr[mid]==x)
        {
           cout<<mid;
        }
        if(arr[mid]>>x)
        {
            st=mid+1;
        }
          if(arr[mid]<<x)
        {
            en=mid-1;
        }
    }
    return -1;
}
int main() {
   int arr[100];
   int n;
   int key;
   int si=0;
   int e=n-1;
   cout<<"enter the number of elements";
   cin>>n;
   cout<<"enter the array elements";
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<"enter the Key";
   cin>>key;
   int result=binary_search(arr,n,si,e,key);
  
if(result==-1){
    cout<<"elemet not found";
    
}
else{
cout<<"element found at"<<result;     
}
    return 0;
}