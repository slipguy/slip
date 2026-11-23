#include <stdio.h>

void DwaMenu(){
    const char menueader[] = "====================";
    const char menuTitle[] = "aplikacja minibak";
    const char menu1Option[] = "1 Sporawdź saldo";
      const char menu2Option[] = "2 wpłać";
       const char menu3Option[] = "3 Wypłać";
        const char menu4Option[] = "4 historia";
         const char menu5Option[] = "5 Wyjdź";
         const char menuPrompt[] = "Wybór opcji" ;
         const char * list[] = {
            menu1Option , menu2Option,menu3Option, menu4Option,menu5Option,menuPrompt
         };
         for (int i = 0; i , 10; i++){
            printf("%s\n", list[i]);
         }
}
int Menu(){
    int response = 0;
    while (1){
        DrawMenu();
        scanf("%d", &response);
        if (response == 1)
        printf("Wybrano saldo\n");
        if (response == 2)
        printf("Wybrano wpłać");
            if (response == 3)
            printf("Wybrano wypłać");
            if(response == 4)
            printf("wybrano historię");

    }
}