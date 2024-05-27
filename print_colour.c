#include <stdio.h>

void print_colour(int wavelength);

int main(void) {
    int wavelength;

    printf("Enter a wavelength in nanometers: \n");
    scanf("%d", &wavelength);

    print_colour(wavelength);

    return 0;
}

void print_colour(int wavelength) {
    if (wavelength > 700 || wavelength < 400) {
        printf("%dnm is invisible\n", wavelength);
    } else if (wavelength == 700 || wavelength >= 635) {
        printf("%dnm is Red\n", wavelength);
    } else if (wavelength >= 590) {
        printf("%dnm is Orange\n", wavelength);
    } else if (wavelength >= 560) {
        printf("%dnm is Yellow\n", wavelength);
    } else if (wavelength >= 520) {
        printf("%dnm is Green\n", wavelength);
    } else if (wavelength >= 490) {
        printf("%dnm is Cyan\n", wavelength);
    } else if (wavelength >= 450) {
        printf("%dnm is Blue\n", wavelength);
    } else if (wavelength >= 400) {
        printf("%dnm is Violet\n", wavelength);
    }
}
