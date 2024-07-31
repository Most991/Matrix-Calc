#include<iostream>
#include<math.h>
using namespace std;
void insert_array_values( int arr[10][10],int R,int C){
for(int i=0;i<R;i++)
{
    for(int j=0;j<C;j++)
        cin>>arr[i][j];
}}

int det_calc(int mat[10][10],int R)
{
int det_value = 0;
int new_mat[10][10];
if(R==1)
    return mat[0][0];
else if(R==2){
    return ((mat[0][0]*mat[1][1])-(mat[1][0]*mat[0][1]));
}
    for (int c=0;c<R;c++){
        int i1 =0;
        for(int i=1;i<R;i++){
            int j1 = 0;
            for(int j=0;j<R;j++){
                if (j==c)
                    continue;
                new_mat[i1][j1] = mat[i][j];
                j1++;}
                i1++;}
        det_value = det_value+(pow(-1,c)*mat[0][c]*det_calc(new_mat,R-1));
}

    return det_value;

}
int main()
{
int Ra,Ca,Rb,Cb,w;
int A[10][10],B[10][10];
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
if(w==5&&Ra==Ca){
   cout<< det_calc(A,Ra)<<endl;
}
else if(w==6&&Rb==Cb){
    cout<<det_calc(B,Rb)<<endl;
}
else if(Ca!=Ra||Cb!=Rb)
    cout<<"The operation you chose is invalid for the given matrices."<<endl;
cout<<"Please choose operation type(1: A+B, 2: A-B, 3: AxB, 4: A*inverse(B), 5: |A|, 6: |B|, 7: quit):"<<endl;
cin>>w;
}
cout<<"Thank you!";
}


