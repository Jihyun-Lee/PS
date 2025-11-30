#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    vector<int> v(N,0);
    for (int i=0;i<N;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    int count=0;

    for (int k=0;k<N;k++){
        int i =0;
        int j = N-1;
        while (i<j){
            int sum = v[i] + v[j];
            if (sum == v[k]){
                if (i != k && j != k){
                    count++;
                    break;
                }
                else if (i == k){
                    i++;
                }
                else if (j == k){
                    j--;
                }
            }
            else if (sum < v[k]){
                i++;
            }
            else{
                j--;
            }
        }
    }

    cout << count << endl;
    return 0;
}