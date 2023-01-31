#include<iostream>
using namespace std;
#define max_size 100
void inertpolaition(int arr[],int n,int search)
{

int low=0;
int high=n-1;
bool flag=true;

while(low<=high&& search>=arr[low]&&search<=arr[high])

{
    if (low==high){
        cout<<"found on index"<<low<<endl;

    }
    int k=low+(high-low) * ((search -arr[low])/(arr[high]-arr[low]));
    if(arr[k]==search){
       cout<<"found on index"<<k<<endl;
       flag=false;
    }
    if(arr[k]<search){
       low=k+1; 
    }
    else{
	
    high=k-1;
    }  
}
if(flag==true){

cout<<"not found\n";
}
}
int main(){
    int n;
    int arr[max_size];
    cout<<"enter the size\n";
    cin>>n;
    cout<<"enter the number\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"enter the number to search\n";
    int search;
    cin>>search;
    inertpolaition(arr,n,search);
    return 0;
}
