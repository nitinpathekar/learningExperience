#include<iostream>
using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    int count;
    for(int i=1;i<=n;i++){
        count=1;
        for(int j=1;j<=i;j++){

            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
    return 0;

}


 
// int main(){
    
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
        
//         for(int j=1;j<=i;j++){

//             cout<<j<<" ";
           
//         }
//         cout<<endl;
//     }
    
//     return 0;

// }