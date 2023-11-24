#include <bits/stdc++.h>

using namespace std;

class haisonguyen{
	private:
		int a,b;
	public:
		haisonguyen(int A, int B){
			a=A;
			b=B;
		}
		int cong(){
			return a+b;
		}
		
};

int main(){
	int a,b;
	cin >> a >> b;
	haisonguyen hsn(a,b);
	int sum = hsn.cong(); cout<<sum;
	return 0;
}










