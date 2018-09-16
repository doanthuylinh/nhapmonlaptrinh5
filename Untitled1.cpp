#include<iostream>
#include <cmath>
using namespace std;

int main(){
	char a,b;
	cout << "Nguoi choi 1: ";
	cin >> a;
	switch (a){
		case 'B':
			cout << "Nguoi choi 2: ";
			cin >> b;
			switch (b){
				case 'K':
					cout << "Nguoi choi 1 thang!"; break;
				case 'G':
					cout << "Nguoi choi 2 thang!"; break;
				case 'B':
					cout << "Hoa nhau!"; break;
				default:
					cout << "Khong hop le.";		
			}
		break;
		case 'K':
			cout << "Nguoi choi 2: ";
			cin >> b;
			switch (b){
				case 'B':
					cout << "Nguoi choi 2 thang!"; break;
				case 'G':
					cout << "Nguoi choi 1 thang!"; break;
				case 'K':
					cout << "Hoa nhau!"; break;
				default:
					cout << "Khong hop le.";
			}
		break;
		case 'G':
			cout << "Nguoi choi 2: ";
			cin >> b;
			switch (b){
				case 'B':
					cout << "Nguoi choi 1 thang!"; break;
				case 'K':
					cout << "Nguoi choi 2 thang!"; break;
				case 'G':
					cout << "Hoa nhau!"; break;
				default:
					cout << "Khong hop le.";		
			}
		break;
	}
}
	
	/*char s;
	cout << "Nhap vao 1 ky tu: ";
	cin >> s;
	switch (s){
		case 'r':
		case 'R':
			cout << "RED";
			break;
		case 'g':
		case 'G':
			cout << "GREEN";
			break;
		case 'b':
		case 'B':
			cout << "BLUE";
			break;
		default:
			cout << "BLACK";
	}
}*/
	
	
	/*double a,b;
	char s;
	cout << "Nhap vao so a: ";
	cin >> a;
	cout << "Nhap vao so b: ";
	cin >> b;
	cout << "Nhap vao phep tinh: ";
	cin >> s;
	switch (s){
		case '+':
			cout << a + b; break;
		case '-':
			cout << a - b; break;
		case '*':
			cout << a * b; break;
		case '/':
			cout << a / b; break;
		default:
			cout << "Khong hop le!";
	}
}*/
	

// Giai phuong trinh bac 2.
	/*int a,b,c;
	cin >> a >> b >> c;
	if (a==0){
		if (b==0){
			if (c==0){
				cout << "Phuong trinh co vo so nghiem.";
			}
			else {
				cout << "Phuong trinh vo nghiem.";
			}
		}else{
			int x = -c/b;
			cout << "Phuong trinh co 1 nghiem duy nhat: x = " << x;
		}
		}
	else{
		int delta = b*b - 4*a*c;
		if (delta<0){
			cout << "Phuong trinh vo nghiem.";
		}
		else if (delta == 0){
			double x = -b/(2*a);
			cout << "Phuong trinh co 1 nghiem kep: x = " << x;
		}
		else {
			double x1 = (-b+sqrt(delta))/(2*a);
			double x2 = (-b-sqrt(delta))/(2*a);
			cout << "Phuong trinh co 2 nghiem phan biet: x1 = " << x1 << " ; x2 = " << x2;
		}
	}
	}*/

// Kiem tra so tu nhien n la so chan hay so le.
	/*int n;
	cin >> n;
	if (n>0){
		if (n % 2 == 0){
			cout << "So chan.";
		}
		else{
			cout << "So le.";
		}
		}
	else{
		cout << "So ban nhap khong phai la so tu nhien.";
	}
}*/

// Kiem tra so ngay trong 1 thang bat ky.
	/*int a,nam;
	cin >> nam >> a;
	if (a>0 && nam>0){
	if (a==2){
		if ((nam % 4 == 0 && nam % 100 != 0)||nam % 400 == 0){
			cout << "Thang 2 nam " << nam << " co 29 ngay.";
		}
		else{
			cout << "Thang 2 nam " << nam << " co 28 ngay.";
		}
	}
	else if (a % 2 == 0){
			cout << "Thang " << a << " nam " << nam << " co 30 ngay.";
		}
		else {
			cout << "Thang " << a << " nam" << nam << " co 31 ngay.";
		}
	}
	else{
		cout << "Nhap khong hop le.";
	}
}*/

