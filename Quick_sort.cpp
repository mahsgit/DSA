#include<iostream>
using namespace std;
int patrition(int arr[], int start,int end){
int pivot=arr[start];
int count=0;
for(int i=start+1;i<end;i++){
    if(arr[i]<pivot){
        count++;   
}
int pi=start+count;
swap(arr[start],arr[pi]);
int i=start;
int j=end;
while(start<end && i<pi && j >pi){
 if (arr[i]<pivot){
    i++;
}
else if (arr[j]>pivot){
    j--;

}

}
if(start<end && i<pi && j >pi ){
    swap(arr[i++],arr[j--]);
}
return pi;
}
quick(int arr[],int start,int end){
    int p= patrition(arr[],start, end);
    quick(arr,start,p-1);
    quick(aee,p+1,end);


}
int main(){
    int arr[]={5,2,9,56,1,9};
    int end=6;
    int start=0;
    quick(arr,start,size-1);
    return 0;
}
