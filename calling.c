#include<stdio.h>
void england(){
    printf("are you in england\n");
    return;

}
void australia(){
    printf("are you in australia\n"); 
    england(); //calling england
    return;
}
void india(){
    printf("are you in india\n");
    australia(); //calling australia
    return;
}
int main (){
    india(); //calling india
    return 0;
}