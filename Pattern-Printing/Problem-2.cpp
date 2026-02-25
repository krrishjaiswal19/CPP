  #include<iostream>
  using namespace std;

  int main(){
    int row, col, n;
    cout<<"Input the number: ";
    cin>>n;
    
    for(row=1;row<=n;row++)
    {
        // space print
        for(col=1;col<=n-row;col++)
        cout<<"  ";

        for(col=1;col<=row;col++)
        cout<<row<<" ";

        cout<<endl;
    }
  }