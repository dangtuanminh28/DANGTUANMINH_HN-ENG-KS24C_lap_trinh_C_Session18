#include <stdio.h>
#include <string.h>
int main() {
	struct sinhvien{
		int id;
		char name[100];
		int age;
		char phoneNumber[100];
	};
	struct sinhvien user[5];
	int i=0;
	for (int i=0; i<5; i++) {
		user[i].id=i+1;
		printf ("Sinh vien thu %d:\n",i+1);
		fflush (stdin);
		printf ("Moi ban nhap ten cua ban :");
		fgets (user[i].name,100,stdin);
		user[i].name[strcspn(user[i].name,"\n")]='\0';
		printf ("Moi ban nhap tuoi cua ban:");
		scanf ("%d",&user[i].age);
		fflush (stdin);
		printf ("Moi ban nhap Sdt cua ban:");
		fgets (user[i].phoneNumber,100,stdin);
		user[i].phoneNumber[strcspn(user[i].phoneNumber,"\n")]='\0';
	}
	for (int i=0; i<5; i++) {
		printf ("Sinh vien thu %d:\n",i+1);
		printf ("Ma sinh vien:%d\n",user[i].id);
	    printf ("%s\n",user[i].name);
	    printf ("%d\n",user[i].age);
	    printf ("%s\n",user[i].phoneNumber);
	}
	return 0;
}
