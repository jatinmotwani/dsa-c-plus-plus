#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int matrix[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0; j < m;j++){
            cin >> matrix[i][j];
        }
    }
    int row_start = 0;
    int row_end = n-1;
    int column_start = 0;
    int column_end = m-1;
    while (row_start <= row_end && column_start <= column_end){
        //For row start
        for(int col=column_start;col<=column_end;col++){
            cout << matrix[row_start][col] << " ";
        }
        row_start++;
        //For column end
        for(int row=row_start;row<=row_end;row++){
            cout << matrix[row][column_end] << " ";
        }
        column_end--;
        //For Row end 
        for(int col = column_end; col >= column_start;col--){
               cout << matrix[row_end][col] << " ";
        }
        row_end--;
        //For column start
        for(int row=row_end;row >= row_start;row--){
               cout << matrix[row][column_start] << " ";
        }
        column_start++;
    }
    return 0;
}