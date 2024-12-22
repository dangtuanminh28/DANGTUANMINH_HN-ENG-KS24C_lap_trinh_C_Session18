#include<stdio.h> 
int main(){
	int i,find ; 
	struct SinhVien{
		int id ; 
		char name[100] ;
		int age;
		char phoneNumber[100] ; 
	}; 
	struct SinhVien sv01[50]={
		{1,"Dang Tuan Minh",18,"0374473926"},
		{2,"Pham Thi Loan",19,"0395336228"},
		{3,"Dang Manh Truong",20,"037569647"},
		{4,"Dang Manh Cuong",21,"0369259569"},
		{5,"Nguyen Khoa Nam",22,"0345228336"}
	};
	printf("Moi ban nhap vao ID muon tim :");
	scanf("%d",&find); 
	fflush(stdin); 
    for (i = 0; i < 5;i++){
    	if(sv01[i].id==find){
    		printf("Co ton tai trong danh sach\n");
		    printf("Moi ban nhap vao ten moi:");
			fgets(sv01[find-1].name,100,stdin);
			printf("Moi ban nhap vao tuoi moi:");
			scanf("%d",&sv01[find-1].age);
			fflush(stdin); 
		} 
	}
		if(sv01[i].id!=find){
			printf("Khong ton tai trong mang\n");
		} 
	for (i = 0 ; i < 5;i++){ 
		printf("ID:%d\n",sv01[i].id); 
      	printf("Ten:%s",sv01[i].name);
		printf("Tuoi:%d\n",sv01[i].age); 
		printf("SDT:%s\n",sv01[i].phoneNumber); 
	}
	return 0; 
} 
