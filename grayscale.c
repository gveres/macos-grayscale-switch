// clang -g -O2 -std=c11 -Wall -framework ApplicationServices
#include <stdio.h>
#include <ApplicationServices/ApplicationServices.h>

CG_EXTERN bool CGDisplayUsesForceToGray(void);
CG_EXTERN void CGDisplayForceToGray(bool forceToGray);

int main(int argc, char** argv)
{
    bool isGrayscale = CGDisplayUsesForceToGray();
    printf("isGrayscale = %d\n", isGrayscale);
    CGDisplayForceToGray(!isGrayscale);
    printf("Grayscale is now: %d\n", CGDisplayUsesForceToGray());

    return 0;
}