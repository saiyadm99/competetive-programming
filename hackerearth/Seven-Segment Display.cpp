#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        string N;
        int i;
        long long int S = 0;
        cin >> N;
        
        int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        
        for (i=0; i<size(N); i++) {
            long long int num = N[i] - '0';
            S = S + arr[num];
        }
        
        if(S % 2 == 0) {
            long long int t = S / 2;
            
            for(i=0; i < t; i++) {
                cout << 1 ;
            }
            cout << endl;
        } else {
            long long int t =S/2;
            for(i=0; i < t; i++) {
                if(i==0) {
                    cout << 7;
                }else {
                    cout << 1;
                }
            }
			cout << endl;
        }
        
    }
}
