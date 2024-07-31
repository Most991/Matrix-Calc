#include<iostream>
#include<math.h>
using namespace std;
void insert_array_values(int arr[3][3],int R,int C){
for(int i=0;i<R;i++)
{
    for(int j=0;j<C;j++)
        cin>>arr[i][j];
}}
long det_calc(int arr[3][3]){
long det_value=0;
det_value=(arr[0][0]*(arr[1][1]*arr[2][2]-arr[1][2]*arr[2][1]))-(arr[0][1]*(arr[1][0]*arr[2][2]-arr[2][0]*arr[1][2]))+(arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]));
cout<<det_value<<endl;
return 0;
}

int main()
{
int Ra,Ca,Rb,Cb,w,A[3][3],B[3][3];
cout<<"Please enter dimensions of Matrix A:"<<endl;
cin>>Ra>>Ca;
cout<<"Please enter dimensions of Matrix B:"<<endl;
cin>>Rb>>Cb;
cout<<"Please enter values of Matrix A:"<<endl;
insert_array_values(A,Ra,Ca);
cout<<"Please enter values of Matrix B:"<<endl;
insert_array_values(B,Rb,Cb);
cout<<"Please choose operation type(1: A+B, 2: A-B, 3: AxB, 4: A*inverse(B), 5: |A|, 6: |B|, 7: quit):"<<endl;
cin>>w;
for(;w<7;){
int det_value;
if(w==5&&Ra==Ca&&Rb==Cb){
    det_calc(A);
}
else if(w==6&&Ra==Ca&&Rb==Cb){
    det_calc(B);
}
else if(Ca!=Ra||Cb!=Rb)
    cout<<"The operation you chose is invalid for the given matrices."<<endl;
cout<<"Please choose operation type(1: A+B, 2: A-B, 3: AxB, 4: A*inverse(B), 5: |A|, 6: |B|, 7: quit):"<<endl;
cin>>w;
}
cout<<"Thank you!";
}

