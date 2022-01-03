//#include<iostream>
//#include<string>
//
//using namespace std;
//
//struct Student {
//	string name;
//	int age;
//	int score;
//};
//void Nhap(Student &x){
//	fflush(stdin);
//	getline(cin,x.name);
//	cin>>x.age;
//	cin>>x.score;
//}
//void Xuat(Student x){
//	cout <<"Name: "<<x.name<<endl;
//	cout <<"Age: "<<x.age<<endl;
//	cout <<"Score: "<<x.score<<endl;
//}
//int main() {
//	int n;
//	cin >> n;
//	Student *students = new Student[100];
//	for(int i = 0; i < n; i++){
//		Nhap(students[i]);
//	}
//	int max = students[0].score;
//	for(int i = 0; i < n; i++){
//		if(students[i].score > max){
//			max = students[i].score;
//		}
//	}
//	for(int i = 0; i < n; i++){
//		if(students[i].score == max){
//			Xuat(students[i]);
//		}
//	}
//
//	delete[] students;
//	return 0;
//}
#include<iostream>

using namespace std;

struct Student {
	string name;
	int age;
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
	}
};
void Nhap(Student &x){
	fflush(stdin);
	cin>>x.name;
	cin>>x.age;
}
void NhapMang(Student *x, int n){
	for(int i = 0; i < n; i++){
		Nhap(x[i]);
	};
}
int main() {
	int n;
	Student students[100];
	NhapMang(students,n);
	for (int i = 0; i < n; i++) {
		students[i].display();
	};
	return 0;
}
