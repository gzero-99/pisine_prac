#include <stdio.h>
void ft_print_alphabet(void){

char alpha = 'a';
for(int i=0;i<26;i++){
printf("%c",alpha);
alpha+=1;
}
printf("\n");

 }

int main(){
ft_print_alphabet();

return 0;
}
