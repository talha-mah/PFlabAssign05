#include <stdio.h>

char encrypt(char c) {
    char key = 0x12; 
    return c ^ key;
}

char decrypt(char c) {
    char key = 0x12; 
    return c ^ key;
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    char encrypted_c = encrypt(c);

    printf("Encrypted character: %c\n", encrypted_c);

    char decrypted_c = decrypt(encrypted_c);

    printf("Decrypted character: %c\n", decrypted_c);

    return 0;
}