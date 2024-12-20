#include <stdio.h>
#include <string.h>
struct sinhVien{
    char name[100];
    int age;
    char phoneNumber[100];
};
struct sinhVien sv[4];
int main() {
    int soSV = 5;
    for(int i = 0; i < soSV; i++){
        printf("Ten sinh vien thu %d la: ", i + 1);
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        sv[i].name [strlen(sv[i].name) - 1] = '\0';
        fflush(stdin);
        printf("Tuoi sinh vien thu %d la: ", i + 1);
        scanf("%d", &sv[i].age);
        fflush(stdin);
        printf("Sdt sinh vien thu %d la: ", i + 1);
        fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
    }
    for(int i = 0; i < soSV; i++){
        printf("Ten sinh vien thu %d la: %s |", i + 1, sv[i].name);
        printf("Tuoi sinh vien thu %d la: %d |", i + 1, sv[i].age);
        printf("Sdt sinh vien thu %d la: %s", i + 1, sv[i].phoneNumber);
    }
    return 0;
}
