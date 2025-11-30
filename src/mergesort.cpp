#include <iostream>
#include <vector>

using namespace std;

vector<int> sorted;
void merge(vector<int> &v, int start, int mid, int end) {

    int i=start; //left vector
    //int j=mid;
    int k=mid+1; //right vector
    int h=start; //sorted idx

    while (i<=mid && k <= end){
        if (v[i] < v[k]){
            sorted[h++] = v[i++];
        } else {
            sorted[h++] = v[k++];
        }
    }

    //copy rest of list
    if (i > mid)
        while(k<=end) sorted[h++]=v[k++];
    else if (k > end)
        while(i<=mid) sorted[h++]=v[i++];

    //copy sorted to original list
    for (int i = start; i <= end ; i++)
        v[i]=sorted[i];

}
void mergesort(vector<int> &v, int start, int end){

    if (start < end) {
        int mid = (start + end) /2;
        mergesort(v, start, mid);
        mergesort(v , mid + 1 , end);
        merge(v, start, mid, end);
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin>>N;
    vector<int> list(N,0);
    sorted = vector<int>(N,0);
    //initialize
    for (int i = 0 ; i < N ; i ++ ){
        cin>>list[i];
    }

    mergesort(list, 0, N-1);

    for (int i = 0 ; i < N ; i++)
        cout << list[i] << " ";
    cout<<endl;
    return 0;
}


/* inputs
8
3 1 5 4 2 8 10 6
 */