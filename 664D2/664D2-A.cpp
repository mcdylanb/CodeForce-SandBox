
#include <bits/stdc++.h>

using namespace std;

bool check(int g, int r, int b, int w ){
		bool answer = "";
		if (((g % 2) + (r % 2) + (b %2) + (w % 2)) > 1){
			answer = false;
		}else {
			answer = true;
		}
		return answer;
	}

int main(){
	int n, g, r, b, w;
	cin >> n;
	while(n){
		cin >> g >> r >> b >> w;
		if(check(g, r, b, w)){
			cout << "Yes" << endl;
		}else if (g > 0 && r>0 && b>0 && check(g-1, r-1, b-1, w+1)) {
			cout << "Yes" << endl;
		}else {
			cout << "No" << endl;
		}
		n--;
	}
	
}
