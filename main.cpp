#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin >> q;
	while (q--){
		int a, b, n, s;
		cin >> a >> b >> n >> s;
		int sum = s%n; //the question wants both coins a and b to be included
		if (sum <= b && 1ll * a * n + b >= s){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
