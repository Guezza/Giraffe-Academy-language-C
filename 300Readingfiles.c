int main()
{
    char line[255];
    FILE*fpointer=fopen("employers.txt","r");
    fgets(line,255,fpointer);
    fgets(line,255,fpointer);
    printf("%s", line);
    fclose(fpointer);
    return 0;
}
