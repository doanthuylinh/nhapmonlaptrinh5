#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	//Bai 7
	int a,b;
	cout << "Nhap tong so phut cuoc goi: ";
	cin >> a;
	b = 25000;
	if (a>0 && a<=50){
		int c = b + 600*a;
		cout << "Cuoc dien thoai la: " << c << " dong.";
	}
	else if (a>50 && a<=200){
		int d = b + 50*600 + (a-50)*400;
		cout << "Cuoc dien thoai la: " << d << " dong.";
	}
	else if (a>200){
		int e = b + 50*600 + 150*400 + (a-200)*200;
		cout << "Cuoc dien thoai la: " << e << " dong.";
	}
	else {
		cout << "Nhap khong hop le!";
	}
}
	
	// Bai 6
	/*double a;
	cout << "Nhap tong doanh so ban hang (don vi trieu): " ;
	cin >> a;
	if (a>0 && a<=100){
		cout << "Tien hoa hong la: " << 0.05*a;
	}
	else if (a>100 && a<=300){
		cout << "Tien hoa hong la: " << 0.1*a;
	}
	else if (a>300){
		cout << "Tien hoa hong la: " << 0.2*a;
	}
	else {
		cout << "Nhap khong hop le!";
	}
}*/

	// Bai 5
	/*double a,b,c,avr;
	cout << "Nhap diem bai kiem tra: ";
	cin >> a;
	cout << "Nhap diem bai thi giua ki: ";
	cin >> b;
	cout << "Nhap diem bai thi cuoi ki: ";
	cin >> c;
	avr = (a+b+c)/3;
	cout << "Diem trung binh: " << avr << endl;
	if (avr>=9){
		cout << "Hang A!";
	}
	if (avr>=7 && avr<9){
		cout << "Hang B!";
	}
	if (avr>=5&&avr<7){
		cout << "Hang C!";
	}
	if (avr<5){
		cout << "Hang F!";
	}
}*/
	
	// Bai 4
	/*int a,b,c,max;
	cout << "Nhap so nguyen a: " << endl;
	cin >> a;
	cout << "Nhap so nguyen b: " << endl;
	cin >> b;
	cout << "Nhap so nguyen c: " << endl;
	cin >> c;
	if (a>b && a>c){
		cout << "So lon nhat la a.";
	}		
	if  (b>a && b>c){
		cout << "So lon nhat la b.";
	}
	if (c>a && c>b){
		cout << "So lon nhat la c.";
	}
	if (a==b && a>c){
		cout << "So lon nhat la a va b.";
	}
	if (a==c && a>b){
		cout << "So lon nhat la a va c.";
	}
	if (c==b && c>a){
		cout << "So lon nhat la b va c.";
	}
}*/
	
	// Bai 3
	/*int a;
	cout << "Nhap vao 1 so nguyen bat ki: ";
	cin >> a;
	if (a==100){
		cout << "So nguyen bang 100.";
	}
	else if (a>100){
		cout << "So nguyen lon hon 100.";
	}
		else {
			cout <<"So nguyen nho hon 100.";
		}
}*/

// Bai 2	
	/*int a;
	cout << "Nhap tuoi: ";
	cin >> a;
	if (a>=16){
		cout << "Du dieu kien nhap hoc lop 10.";
	}
	else if (a<16 && a>0){
		cout <<"Khong du dieu kien nhap hoc lop 10.";
	}
		else {
			cout << "Nhap khong hop le.";
		}
}*/

// Bai 1
	/*double a,b,c,d;
	cout << "Moi ban nhap luong (don vi trieu): ";
	cin >> a;
	b=0.3*a;
	c=0.2*a;
	d=0.1*a;
	if (a>15){
		cout << "Thue thu nhap cua ban la 30% luong: " << b << " trieu. "; 
		cout << "Luong rong cua ban la: " << a - b << " trieu.";
	}
	else if(a>=7 && a<=15){
		cout << "Thue thu nhap cua ban la 20% luong: " << c<< " trieu. "; 
		cout << "Luong rong cua ban la: " << a - c << " trieu.";
	}
		else if(a<7 && a>0){
			cout << "Thue thu nhap cua ban la 10% luong: " << d << " trieu. "; 
			cout << "Luong rong cua ban la: " << a - d << " trieu.";
		}
			else{
				cout << "Nhap khong hop le!";
			}
}*/


