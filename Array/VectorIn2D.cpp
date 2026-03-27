// #

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{ //vector<vector<int> > matrix(row,vector<int> (col,intialize))
    // vector<vector<int> > matrix(3,vector<int> (4,1));
    
    // // Print Matrix
    // for(int i = 0; i < 3; i++)
    // for(int j = 0; j < 4; j++)
    // cout<<matrix[i][j]<<" ";
    // cout<<endl;
    
    int n, m;
    cout<<"Enter row & col: ";
    cin>>n>>m;
    
    vector<vector<int> >matrix(n,vector<int>(m,n));
    
    // User Input
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    cin>>matrix[i][j];
    
    // Output
    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
    cin>>matrix[i][j];
    
    // Output
    for(int i = 0; i<n; i++){
    for(int j=0; j<m; j++)
    cout<<matrix[i][j]<<" ";
    cout<<endl;
    }
    
    // How much row and column in matrix
    cout<<"rows = "<<matrix.size();
    cout<<endl;
    cout<<"col = "<<matrix[0].size();
    
    // Input/Output 2-D Array
    // int n, m;
    // cout<<"Enter row & col: ";
    // cin>>n>>m;
    
    // vector<vector<int> >matrix(n,vector<int>(m,n));
    
    // // User Input
    // for(int i=0; i<n; i++)
    // for(int j=0; j<m; j++)
    // cin>>matrix[i][j];
    
    // // Output
    // for(int i = 0; i<n; i++)
    // for(int j = 0; j<m; j++)
    // cin>>matrix[i][j];
    
    // // Output
    // for(int i = 0; i<n; i++){
    // for(int j=0; j<m; j++)
    // cout<<matrix[i][j]<<" ";
    // cout<<endl;
    // }
}