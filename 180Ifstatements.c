int max (int num1,int num2, int num3) {
int result;
if(num1 > num2){
    result = num1;
}   else{
        result = num2
}
return result
}
 int main() {
 printf("%d", max(40, 40));
 return 0;
 }
int max(int num1, int num2, int num3) {
int result;

if(num1 >= num2 && num1 >= num3){
    result = num1;
} else if(num2 >= num1 && num2 >= num3){
    result = num2;
} else {
result = num 3;
}
return result;
}
int main() {
if (3 < 2 || 2 > 5) {
    printf("False");
    return 0;
}
if(!(3 < 2)) {
    printf("True");
}
return 0;
}

