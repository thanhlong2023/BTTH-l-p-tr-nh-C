#include <stdio.h>

void print_line() {
    printf("------------------------------------------------------------------------\n");
}

int main() {
    printf("|%-2s|%-14s | %-5s| %-7s| %-4s| %-4s| %-4s| %-7s|\n",
           "STT", "Ho va ten", "Toan", "Vat Ly", "Hoa", "Sinh", "Van", "Diem TB");

    printf("| %-2s|%-14s | %-5s| %-7s| %-4s| %-4s| %-4s| %-7s|\n",
           "1", "Nguyen Van A", "7.5", "7.0", "5.5", "8.5", "7.5", "7.4");
    print_line();

    printf("| %-2s|%-14s | %-5s| %-7s| %-4s| %-4s| %-4s| %-7s|\n",
           "2", "Nguyen Van B", "7.0", "8.5", "9.0", "5.0", "6.5", "7.7");
    print_line();

    printf("| %-2s|%-14s | %-5s| %-7s| %-4s| %-4s| %-4s| %-7s|\n",
           "3", "Nguyen Van C", "6.5", "7.2", "6.5", "10.0", "5.5", "7.2");
   


    return 0;
}
