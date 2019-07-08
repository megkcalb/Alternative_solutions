#include<iostream>
using namespace std;
int main(){

   int arr[] = { 4,4,4,5,5 };
   int len = sizeof(arr)/sizeof(arr[0]);
   int j=0;
   cout << " array length : " << len << endl;
   cout << " Given array : " << endl;

   for (int i =0;i < len; i++)
      cout << arr[i] << " " << endl;

   for (int i = 0; i < len-1 ; i++)
        if( arr[i] != arr[i+1] )
          arr[j++] = arr[i];

   arr[j++] = arr [len - 1];

   cout << " after removing : " << endl;

   for (int i = 0;i < j ; i++)
      cout << arr[i] << " " << endl;

   return 0;

}

