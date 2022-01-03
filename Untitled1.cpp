#include<iostream>
using namespace std;
#include<string.h>
struct sach{
        char tensach[30];
        char tentacgia[30];
        int sl;
        float dg;
    };typedef struct sach S;  
void NhapThongTin(S &s1){
    cout<<"\nNhap ten sach : ";
    fflush(stdin);
    gets(s1.tensach);
    cout<<"\nNhap ten tac gia : ";
    fflush(stdin);
    gets(s1.tentacgia);
    cout<<"\nNhap so luong : ";cin>>s1.sl;
    cout<<"\nNhap don gia : ";cin>>s1.dg;
}
void DanhSach(S a[],int n){
    for(int i=0;i<n;i++){
        cout<<"\n Sach thu "<<i+1;
        NhapThongTin(a[i]);
    }
}
void Xuat(S &s1){
    cout<<"\nTen sach can tim la : "<<s1.tensach;
    cout<<"\nTen tac gia cua sach la  : "<<s1.tentacgia;
    cout<<"\nSo luong can mua  : "<<s1.sl;
    cout<<"\nDon gia cua sach la  : "<<s1.dg;
    float tt;
    tt=s1.sl*s1.dg;
    cout<<"\nSo tien can tra la : "<<tt;
}
void XuatSach(S a[],int n){
    for(int i=0;i<n;i++){
        cout<<"\nThong tin sach thu "<<i+1;
        Xuat(a[i]);
        cout<<endl;
    }
}
int main(){
    S s1;
    int n;
    cout<<"\nNhap so loai sach : ";
    cin>>n;
    S a[100];
    DanhSach(a,n);
    cout<<endl;
    XuatSach(a,n);
    return 0;
}
