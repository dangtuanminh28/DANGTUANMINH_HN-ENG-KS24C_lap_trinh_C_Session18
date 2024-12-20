#include <stdio.h>
#include <string.h>
int main() {
	struct sinhvien{
		int id;
		char name[100];
		int age;
		char phoneNumber[100];
	};
	struct sinhvien user1;
		printf ("Moi ban nhap ma cua ban:");
		scanf ("%d",&user1.id);
		fflush (stdin);
		printf ("Moi ban nhap fullname :");
		fgets (user1.name,100,stdin);
		user1.name[strcspn(user1.name,"\n")]='\0';
		printf ("Moi ban nhap tuoi cua ban:");
		scanf ("%d",&user1.age);
		fflush (stdin);
		printf ("Moi ban nhap phonenumber:");
		fgets (user1.phoneNumber,100,stdin);
		user1.phoneNumber[strcspn(user1.phoneNumber,"\n")]='\0';
	printf ("%d\n",user1.id);
	printf ("%s\n",user1.name);
	printf ("%d\n",user1.age);
	printf ("%s\n",user1.phoneNumber);
	return 0;
}
