#include <stdio.h>
int main() {
	struct sinhvien{
		int id;
		char name[100];
		int age;
		char phoneNumber[100];
	};
	struct sinhvien user1={
		1,"Dang Tuan Minh",18,"0374473926"
	};
	printf ("%d\n",user1.id);
	printf ("%s\n",user1.name);
	printf ("%d\n",user1.age);
	printf ("%s\n",user1.phoneNumber);
}
