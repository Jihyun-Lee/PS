#include <iostream>
#include <vector>


using namespace std;

void swap (int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int partition ( vector<int>& v, int start, int end) {

    int P = end;
    int E = end-1;
    int S = start;

    while(S < E){
        while ( v[S] < v[P] ) S++;
        while ( v[E] > v[P] ) E--;
        if( S < E ) swap(v[S], v[E]);
    }
    swap(v[S], v[P]);
    return S; //new pivot index
}
void qs ( vector<int>& v, int start, int end) {

    if (start >= end)
        return;

    int new_pivot = partition(v, start, end);
    qs(v, start , new_pivot-1);
    qs(v , new_pivot+1, end);


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N=0;
    cin >> N;
    vector<int> v(N,0);
    for ( int i = 0; i < N; i++ )
        cin >> v[i];


    qs(v, 0, v.size()-1);

    for ( int i = 0; i < N; i++ ){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;


}