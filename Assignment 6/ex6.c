#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char str[1000003];
    char replace1,delete,replace2;
    fgets(str,1000003,stdin);
    scanf(" %d",&choice);
    if (choice==1){
        getchar();
        scanf("%c",&replace1);
        getchar();
        scanf("%c",&replace2);
        //memmove(str+2,&replace2,sizeof(char));
        for (int i=0;i<strlen(str);i++)
        {
            if (strncmp(str+i,&replace1,1)==0)
            {
                memmove(str+i,&replace2,sizeof(char));
                i-=1;
            }
        }
        printf("Input a string: * Choose 1 to replace a character or 2 to delete a character:   Replace character:   with: New string: %s\n",str);
    }
    else if (choice == 2){
        getchar();
        scanf("%c",&delete);
        for (int i=0;i<strlen(str);i++)
        {
            if (strncmp(str+i,&delete,1)==0)
            //if (*(str+i)==delete)
            {
                memcpy(str+i,str+i+1,strlen(str)-i+1);
                i-=1;
            }
        }
        printf("Input a string: * Choose 1 to replace a character or 2 to delete a character:   Delete character: New string: %s\n",str);

    }
    return 0;
}
