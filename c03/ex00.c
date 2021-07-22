#include <stdio.h>

int ft_strcmp(char *s1, char *s2){
while(*s1 !='\0' || *s2 !='\0'){
	if(*s1>*s2)
		return 1;
	if(*s2>*s1)
		return -1;
	s1++;
	s2++;
}
return 0;


}

int main(){

ft_strcmp("water","water");//same, result will be 0
ft_strcmp("water","watter");//s2 is bigger, result will be -1
ft_strcmp("aac","aab");//s1 is bigger,  result will be 1

}
