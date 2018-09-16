#include <iostream>
using namespace std;
int main(){
	int n;
	double s;
	cout << "Enter n: " << endl;
	cin >> n;
	while (n>0){
		double sd = n%10;
		s = s + sd;
		n = n / 10;
	}
	double a = n%10;
	int max;
		while (n>0){
		double sd = n%10;
		if (sd > a)
			double max = sd;
		n = n/10;
	}
	cout << "max la " << max;
	
	cout << "Tong cac chu so cua n la: " << s;
	
	
	
	// tinh tong binh phuong cac so le tu 1 toi n
	/*double n;
	double s = 0;
	cout << "Enter n: ";
	cin >> n;
	for (int i=1;i<=n;i+=2){
		s = s + i*i;
	}
	cout << "Tong binh phuong cac so le tu 1 toi " << n << " la: " << s;*/
	
	// S = 1 + 1/2 + 1/3 + ... + 1/n
	/*double n;
	double s=0;
	cout << "Enter n: ";
	cin >> n;
	for (int i=1;i<=n;i++){
		s = s + 1.0/i;
	}
	cout << "S = " << s;*/
	
	
	/*for (int n=1;n<=9;n++){
		cout << "Bang cuu chuong " << n <<endl;
		for (int i=1;i<=10;i++){
		cout <<  n << "x" << i << "=" << n*i << endl;	
	}
}*/
	
	/*int n;
	char s;
	while (true){
	cout << "Enter n: ";
	cin >> n;
	for(int i=1;i<=10;i++){
		cout <<  n << "x" << i << "=" << n*i << endl;	
	}
	
	cout << "Continue? ";
	cin >> s;
	if (s=='n')	break;
	}*/
		

	
	/*int n,s=0, gt=1;
	cout << "Enter n: ";
	cin >> n;
	for (int i=0;i<=n;i+=2){
		cout << "\n So chan:" << i << endl;	
	}
	for (int i=1;i<=n;i+=2){
		cout << "\n So le:" << i << endl;	
	}
	for (int i=1;i<=n;i++){
		s=s+i;
	}
	cout << "\n Sum: " << s << endl;
	
	for (int i=1;i<=n;i++){
		gt = gt*i;
	}
	cout << "\n n! = " << gt;*/
		
	
	/*int s=0;
	int s1=0;
	for (int i=0;i<=10;i+=2){
		cout << "So chan:" << 10- i << endl;	
		s = s+i;
	}
	
	cout << "Tong cac so chan la:" << s << endl;
	
	for (int i=1;i<=10;i+=2){
		cout << "So le:" << 10 - i << endl;	
		s1 = s1+i;
	}
	
	cout << "Tong cac so chan la:" << s1 << endl;*/

}
