#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

int main (){

    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    vector<pair<int, int>> v(N);
    for (int i=0;i<N;i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    //Nlog(N)
    sort(v.begin(),v.end());
    // for (int i=0;i<N;i++){
    //     cout << v[i].first << " " << v[i].second << "\n";
    // }
    //버블 정렬 시 , 두번째 루프에서 숫자는 왼쪽으로 한번 밖에 움직일 수 없다는 점을 이용
    int MAX = -1;
    for (int i=0;i<N;i++){
        if ( MAX < v[i].second - i ){
            MAX = v[i].second - i;
        }
    }

    cout << MAX + 1 << endl;
    return 0;
}