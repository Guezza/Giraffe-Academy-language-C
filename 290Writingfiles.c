int main()
{
    FILE * fpointer = fopen("employees.txt","a");
    fprintf(fpointer, "Jim, Salesman\nPan, Reception ist inOScar, Accounting");
    fclose(fpointer);
    return 0;
}
