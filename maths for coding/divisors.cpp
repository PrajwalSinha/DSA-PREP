#include <iostream>
using namespace std;


void optimized(){
  int n;
  cin>>n;

  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      cout<<i<<" ";
      if(i!=n/i){
        cout<<n/i<<" ";
      }
    }
  }
  cout<<endl;
}
void brute() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    cout << "Enter the number: " << endl;
   // brute();
   optimized();
    return 0;
}
