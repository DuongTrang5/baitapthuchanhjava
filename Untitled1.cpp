class Lop1
{
	private:
		int a,b;
		friend void Nhap;
};
class Lop2
{
	private:
	float x,y;
	friend void Nhap();
};
void nhap()
{
	Lop1 objl; Lop2 obj2;
	cout << "\n\t Nhap a -"; cin >> a;
	cout << "\n\t Nhap x = "; cin >>x;
}

