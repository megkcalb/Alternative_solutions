#include<iostream>

using namespace std;

int findHidden(int[],int);

int main(){

        int arr[50];

        int len,x ;

        cout << " enter the length : " << endl;

        cin >> len;

        cout << " enter the array : " << endl;

        for(int i = 0; i < len ; i++)
                cin >> arr[i];

        if(x = findHidden(arr,len))
                cout << " Hidden value is :  "<< x << endl;
        else
                cout << " No such hidden value found  "<< endl;

        return 0;
}

int findHidden(int arr[],int len){

        int i = 0;
        int totsum = 0;
        int hd = 0;

        for( i = 0; i < len   ; i++)
              totsum += arr[i];

        int min = totsum / len ;

        for ( i = 0 ; i < len ; i++)
              hd = hd +  (min - arr[i]);

        if(hd == 0)
              return min;
        else
              return -1;
}


