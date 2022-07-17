#include<iostream>
using namespace std;
bool search ( int arr[], int size, int key){
    for (int i=0; i<=size; i++){
    if (arr[i]== key){
        return 1;
    }
    }
    return 0;
}
int main(){
     
     int arr[5] = {3,4,2,-1,7};
     cout << "enter number to be searched";
     int key;
     cin >> key;

     bool found = search(arr,5,key);
     if(found){
         cout<<"element is present";
     }
     else{
         cout <<"element not present";
     }
     return 0;

}