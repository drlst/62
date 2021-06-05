#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int gcd( int a, int b ) {
    return ( !a ) ? b : gcd( b % a, a );
}

void GT(int arr[], int n){
    for (int i = 0; i < n; ++i) {
        arr[i]=rand()% (20-10+1)+10;
    }
}

void Ktra(const int arr[], int n){
    int sumchan = 0,sumle=0;
    for (int i = 0; i <n ; ++i) {

        if(i%2!=0 && arr[i]%2==0) sumchan+=arr[i];
        if(i%2==0 && arr[i]%2!=0) sumle+=arr[i];
    }
    if(sumchan==sumle) cout << "\n" << sumchan << "=" << sumle << endl;
    else
        cout<<"\nsai "<<sumchan<<" khac "<<sumle<<endl;

}

void xuatMang(int arr[],int n){
    for (int i = 0; i <n ; ++i) {
        cout<<"\n"<<"arr["<<i<<"]= "<<arr[i]<<endl;
    }
}

void coprime(int arr[],int n){
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; ++j)
            if ( gcd( arr[i], arr[j] ) == 1 )
                cout<<"\n("<<arr[i]<<" "<<arr[j]<<")"<<endl;
}

int main() {
  int n;
  int arr[10000];

  cout<<"\nNhap chuoi: ";cin>>n;
  GT(arr, n);
  xuatMang(arr,n);
  Ktra(arr,n);
  coprime(arr,n);
  return 0;
}
