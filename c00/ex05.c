#include <stdio.h>
void ft_print_cmb(void){
//0-7,1-8,2-9/

for(int i=0;i<8;i++){
        for(int j=1;j<9;j++){
                for(int k=2;k<10;k++){
                        printf("%d%d%d, ",i,j,k);

}
}
}

printf("\n");
}
int main(){
ft_print_cmb();

return 0;
}

                     
