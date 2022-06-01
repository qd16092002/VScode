#include<stdio.h>
#include<stdlib.h>

struct nhanvien{
    char manv[1000];
    char hoten[30];
    char diachi[50];
    struct ngaysinh{
        int ngay, thang, nam;
    }ns;
    
};
int main(){
    int n,i;
    printf("Nhap so luong nhan vien : ");
    scanf("%d", &n);

    struct nhanvien nv[n];
    // nhap du lieu
    for (i=0;i<n;i++){
        printf(" Nhap du lieu nhan vien %d : \n", i+1);
        printf(" Ma nhan vien : "); fflush(stdin);
        gets(nv[i].manv);
        printf(" Ho va ten nhan vien:") ; fflush(stdin);
        gets(nv[i].hoten);
        printf("Dia chi :"); fflush(stdin);
        gets(nv[i].diachi);
        printf("Nhap ngay sinh : "); fflush(stdin);
        scanf("%d/%d/%d", &nv[i].ns.ngay, &nv[i].ns.thang, &nv[i].ns.nam);
    }
    // in thong tin
    printf("----------------------In thong tin---------------------\n");
    printf("%-20s %-20s %-20s %-10s\n", "Ma nhan vien" , "Ho & ten" , "Dia chi" , "Ngay sinh");
    for (i=0;i<n;i++){
        printf("%-20s %-20s %-20s %02d/%02d/%4d\n", nv[i].manv, nv[i].hoten, nv[i].diachi, nv[i].ns.ngay, nv[i].ns.thang, nv[i].ns.nam);
    }
   return 0;
}