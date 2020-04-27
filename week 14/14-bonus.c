 #include <stdio.h>
#include <stdlib.h>
float convert(float f)
{
    float c;
    c = (f-32.0)*(5.0/9.0);
    return c;
}
int main()
{
    float num;
    FILE *inFile;
    FILE *outFile;
    inFile = fopen("f.txt", "r");
    outFile = fopen("c.txt", "w");
    if (inFile == NULL)
    {
        printf("Fail to open the file.\n");
        exit(1);
    }
    while(fscanf(inFile, "%f", &num) != EOF)
    {
        printf("%.2f\n", convert(num));
        fprintf(outFile,"%.2f\n",convert(num));
    }
    fclose(inFile);
    fclose(outFile);
    return 0;
}
