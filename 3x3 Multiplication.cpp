#include<iostream>
#include<math.h>
using namespace std;
void insert_array_values(int arr[3][3],int R,int C){
for(int i=0;i<R;i++)
{
    for(int j=0;j<C;j++)
        cin>>arr[i][j];
}}
void print_array(int x[3][3],int R,int C){
for(int j=0;j<R;j++)
    {
        for(int i=0;i<C;i++)
            cout<<x[j][i]<<" ";
        cout<<endl;
    }}

int main()
{
int Ra,Ca,Rb,Cb,A[3][3],B[3][3],w;
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
int x[3][3];
if(w==3&&Ca==Rb)
{
    for(int n=0;n<Ra;n++){
        for(int j=0;j<Cb;j++)
        {
            x[n][j]=0;
            for(int i=0;i<Rb;i++)
                x[n][j] += A[n][i]*B[i][j];
        }
        }
    print_array(x,Ra,Cb);
}
else if(Ca!=Rb)
    cout<<"The operation you chose is invalid for the given matrices."<<endl;
cout<<"Please choose operation type(1: A+B, 2: A-B, 3: AxB, 4: A*inverse(B), 5: |A|, 6: |B|, 7: quit):"<<endl;
cin>>w;
}
cout<<"Thank you!";
}
