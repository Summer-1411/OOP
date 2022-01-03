#include <stdio.h>
#include <math.h>
struct ToaDo {
	float x;
	float y;
};
void NhapToaDo1Diem(ToaDo &a){
	printf("Nhap toa do x = ");
	scanf("%f", &a.x);
	printf("Nhap toa do y = ");
	scanf("%f", &a.y);
}
void Nhap(int n, ToaDo a[]){
	int i;
	for(i = 1; i <= n; i++){
		printf("\nNhap toa do diem thu %d\n", i);
		NhapToaDo1Diem(a[i]);
	}
}
void Xuat(ToaDo &a){
	int i;
	printf("(%.3f,%.3f)   ", a.x, a.y);
}
void XuatAll(int n, ToaDo a[]){
	int i;
	for(i = 1; i <= n; i++){
		printf("  ");
		Xuat(a[i]);
	}
}
void Count(int n, ToaDo a[]){
	int dem = 0;
	int i;
	for(i = 1; i <= n; i++){
		if(sqrt(pow(a[i].x,2) + pow(a[i].y,2)) < 7.5){
			dem++;
		}
	}
	printf("\nSo diem nam trong duong tron la : %d", dem);
}
int main(){
	int n;
	do {
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n < 0);
	ToaDo a[100];
	Nhap(n,a);
	XuatAll(n,a);
	Count(n,a);
	return 0;
}


