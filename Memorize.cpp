
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
    int inn, n=0;
    int arr[10000]{0};
  //  cout << " enter the limit : " << endl; 

    scanf("%d",&n);

    for (int i =0 ; i < n ; i++){                                      // Reading input for the Shown array 
         scanf("%d", &inn);
         ++arr[inn];
            //cin >> arr[i];
    }

    int qSize=0;

//    cout << " enter the query size : " << endl; 

    scanf("%d",&qSize);

    for(int i=0; i < qSize; i++ ){
            
            scanf("%d", &inn);
            
            (arr[inn])?printf("%d\n",arr[inn]):printf("NOT PRESENT\n"); 
   }
            
   return 0;    
       
}
