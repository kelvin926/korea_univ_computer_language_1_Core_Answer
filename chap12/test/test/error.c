#include <stdio.h>

int main(void)
{
    FILE *fp1 = NULL, *fp2 = NULL, *fp3 = NULL;
    char *p = NULL;
    char str[BUFSIZ];
    fp1 = fopen("in.txt", "r");
    if (fp1 == NULL)
        goto cleanup;
    fp2 = fopen("out1.txt", "w");
    if (fp2 == NULL)
        goto cleanup;

    fp3 = fopen("out2.txt", "w");
    if (fp3 == NULL)
        goto cleanup;

    while ((p = fgets(str, sizeof(str), fp1)) != NULL)
    {
        if (fputs(str, fp2) == EOF)
            goto cleanup;
        if (fputs(str, fp3) == EOF)
            goto cleanup;
    }
cleanup:
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
        printf("file open error\n");
    if (fp1 != NULL && ferror(fp1))
        printf("file read error\n");
    if (fp2 != NULL && ferror(fp2))
        printf("file write error\n");
    if (fp3 != NULL && ferror(fp3))
        printf("file write error\n");
    if (fp1)
        fclose(fp1);
    if (fp2)
        fclose(fp2);
    if (fp2)
        fclose(fp2);

    return 0;
}