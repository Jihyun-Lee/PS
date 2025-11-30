#include <cstdint>
#include <iostream>
#include <cstring>
#include <vector>


int foo(int a, int b){
	return a+b;
}

/**
 * @brief 
 * 
 * @return int 

 */

int res;
using namespace std;
int main(){
	int a,b;
	a=1;
	b=2;

	vector<int> v;
	for (int i=0;i<10;i++)
		v.push_back(i);

	v.insert(v.begin()+5,100);
	v.pop_back();
	v.erase(v.begin()+2);
	
	res = foo(a,b);
	cout <<"res : " <<res    <<endl;
	return 0;

}


