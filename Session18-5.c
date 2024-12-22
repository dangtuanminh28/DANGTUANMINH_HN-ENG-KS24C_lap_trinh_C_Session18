#include<stdio.h>
int main(){
	int i,j ; 
	struct SinhVien{
		int id ; 
		char name[100] ;
		int age;
		char phoneNumber[100] ; 
	}; 
	struct SinhVien sv01[50];
		for (i = 0; i < 5; i++) {
    		sv01[i].id = i + 1; 
    	}
		for (i = 0 ; i < 5 ;i++ ) {
    		printf("Nhap vao ten sinh vien thu %d : ",i+1);
	    	fgets(sv01[i].name , 100 , stdin);
	   		printf("Nhap vao tuuoi cua sinh vien : ");
	    	scanf("%d",&sv01[i].age);
	    	fflush(stdin);
			printf("Nhap vao SDT sinh vien thu %d : ",i+1);
    		fgets(sv01[i].phoneNumber , 100 , stdin);
		} 
      	for (i=0 ; i<5 ;i++ ) { 
      		printf("ID : %d\n",sv01[i].id); 
      		printf("Ten : %s",sv01[i].name);
			printf("Tuoi : %d\n",sv01[i].age); 
			printf("SDT : %s\n",sv01[i].phoneNumber);  
		}
	return 0; 
} 
