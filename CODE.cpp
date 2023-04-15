/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int action(int num,int arr[][3],int user){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            // arr[i][j]=
            if(user==1){
                switch(num){
                    case 1:arr[0][1]='X';break;
                    case 2:arr[0][2]='X';break;
                    case 3:arr[0][3]='X';break;
                    case 4:arr[1][1]='X';break;
                    case 5:arr[1][2]='X';break;
                    case 6:arr[1][3]='X';break;
                    case 7:arr[2][1]='X';break;
                    case 8:arr[2][2]='X';break;
                    case 9:arr[2][3]='X';break;
                }
            }
                        if(user==2){
                switch(num){
                    case 1:arr[0][1]='O';break;
                    case 2:arr[0][2]='O';break;
                    case 3:arr[0][3]='O';break;
                    case 4:arr[1][1]='O';break;
                    case 5:arr[1][2]='O';break;
                    case 6:arr[1][3]='O';break;
                    case 7:arr[2][1]='O';break;
                    case 8:arr[2][2]='O';break;
                    case 9:arr[2][3]='O';break;
                }
            }
        }
        
    }
    // return 0;
                if(user==1 && arr[0][1]=='O'){
                // if(user==1 && arr[1][1]=='O'){
                    // if(user==1 && arr[2][1]=='O'){
                        return 1;}
}
int main()
{
int num,user;
int arr[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"enter row";
cin>>num;
cout<<"Enter user 1 or 2";
cin>>user;


cout<<action(num,arr,user);}}
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
            //winner or trie one more time or tie
            // if(user==1 && arr[0][1]=='O'){
            //     // if(user==1 && arr[1][1]=='O'){
            //         // if(user==1 && arr[2][1]=='O'){
            //             cout<<"User 1 wins";
            //         // }
            //     // }
            // }
        // cout<<arr[i][j]<<"|";
// }
}
}
