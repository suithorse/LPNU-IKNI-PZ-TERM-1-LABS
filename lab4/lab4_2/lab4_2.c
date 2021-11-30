#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>

void printTime();

int main(void)
{
    freopen("4_2.log", "a", stdout);
    if(freopen("4_2.log", "a", stdout) == NULL){
        return 1;
    }
    FILE *file;
    char *out = "output.bin";
    double u, v;
    char ch;

    printTime();
    printf("Program started.\n");
    file = fopen("input.bin", "rb");
    if(file == NULL){
        fclose(stdout);
    }
    fread(&u, sizeof(double), 1, file);
    fread(&v, sizeof(double), 1, file);
    fclose(file);

    printTime();
    printf("Parameters file \"input.bin\" opened. U = %.7lf, V = %.7lf.\n", u, v);

    double b = log10(cbrt(u) + pow(v, 0.25) + 2.0);

    printTime();
    printf("Expression calculated. Result = %.15lf.\n", b);

    freopen("CON", "w", stdout);
    printf("Save output as binary or text file? (b/t) : ");
    ch = getchar();
    if (ch == 't')
    {
        out = "output.txt";
    }
    file = fopen(out, ((ch == 'b') ? "wb" : "w"));

    if (ch == 'b')
    {
        fwrite(&b, sizeof(double), 1, file);
    }
    else
    {
        fprintf(file, "%lf", b);
    }
    fclose(file);

    freopen("4_2.log", "a", stdout);

    printTime();
    printf("Output file \"%s\" saved.\n", out);
    printTime();
    printf("Program ended.\n");

    _getch();
    return 0;
}

void printTime()
{
    time_t t = time(NULL);
    struct tm *timee = localtime(&t);
    printf("[%04d.%02d.%02d %02d:%02d:%02d] ",(*timee).tm_year + 1900,
           (*timee).tm_mon + 1, (*timee).tm_mday , (*timee).tm_hour, (*timee).tm_min,
           (*timee).tm_sec);
}

