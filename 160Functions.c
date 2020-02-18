int main()
{
    printf("Top");
    sayHi();
    printf("bottom");
    return 0;
}
void sayHi() {
printf("Hello User");
}
{
    sayHi("Mike", 40);
    sayHi("Tom", 23);
    sayHi("Oscar", 70);
    return 0;
}
void sayHi(char name[], int age){
printf("Hello %s, you are %d\n", name, age);
}
