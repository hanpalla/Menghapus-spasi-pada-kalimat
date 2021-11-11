#include <stdio.h>

int main(){
    char kalimat[50], tanpaSpasi[25];
    int i = 0, j = 0, k = 0;
    system("cls");
    printf("Input kalimat sebelum spasi dihapus\t: ");
    gets(kalimat);
    while(kalimat[i] != '\0'){
        if(kalimat[i] == ' ')
            kalimat[i] = '\0';
        else if (kalimat[i] != ' '){
            tanpaSpasi[j] = kalimat[i];
            j++;
        }
        i++;
    }
    printf("Kalimat setelah spasi terhapus\t\t: %s", tanpaSpasi);
    return 0;
}
