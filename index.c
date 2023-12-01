#include <stdio.h>
int biS(int arr[],int start,int end,int key){
    if(start>end){
        return -1;
    }

    int mid=(start+end)/2;
    
    
        if(arr[mid]==key) return mid;
        if(arr[mid]>key){
            biS(arr,start,mid-1,key);
        }

        if(arr[mid]<key){
            biS(arr,mid+1,end,key);
        }
    
        
    
}

int main(){
    int arr[5]={7,21,23,40,53};
    int key=53;
    int ans=biS(arr,0,4,key);
    printf("%d is on %dth index .",key,ans);
    return 0;

}